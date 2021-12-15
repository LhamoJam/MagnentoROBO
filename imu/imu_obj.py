#coding:UTF-8
import serial

class IMU():
    def __init__(self,port,baud):
        self.ACCData=[0.0]*8
        self.GYROData=[0.0]*8
        self.AngleData=[0.0]*8          
        self.FrameState = 0            #通过0x后面的值判断属于哪一种情况
        self.Bytenum = 0               #读取到这一段的第几位
        self.CheckSum = 0              #求和校验位         

        self.a = [0.0]*3
        self.w = [0.0]*3
        self.Angle = [0.0]*3
        port = port
        baud = baud
        self.ser = serial.Serial(port, baud, timeout=0.5)  # ser = serial.Serial('com7',115200, timeout=0.5) 
        print("imu_obj_status:",self.ser.is_open)
        # while(1):
        #     datahex = self.ser.read(33)
        #     DueData(datahex)         

    def DueData(self):   #新增的核心程序，对读取的数据进行划分，各自读到对应的数组里
        inputdata = self.ser.read(33)
        for data in inputdata:  #在输入的数据进行遍历
            #Python2软件版本这里需要插入 data = ord(data)*****************************************************************************************************
            if self.FrameState==0:   #当未确定状态的时候，进入以下判断
                if data==0x55 and self.Bytenum==0: #0x55位于第一位时候，开始读取数据，增大self.Bytenum
                    self.CheckSum=data
                    self.Bytenum=1
                    continue
                elif data==0x51 and self.Bytenum==1:#在byte不为0 且 识别到 0x51 的时候，改变frame
                    self.CheckSum+=data
                    self.FrameState=1
                    self.Bytenum=2
                elif data==0x52 and self.Bytenum==1: #同理
                    self.CheckSum+=data
                    self.FrameState=2
                    self.Bytenum=2
                elif data==0x53 and self.Bytenum==1:
                    self.CheckSum+=data
                    self.FrameState=3
                    self.Bytenum=2
            elif self.FrameState==1: # acc    #已确定数据代表加速度
                
                if self.Bytenum<10:            # 读取8个数据
                    self.ACCData[self.Bytenum-2]=data # 从0开始
                    self.CheckSum+=data
                    self.Bytenum+=1
                else:
                    if data == (self.CheckSum&0xff):  #假如校验位正确
                        self.a = self.get_acc(self.ACCData)
                    self.CheckSum=0                  #各数据归零，进行新的循环判断
                    self.Bytenum=0
                    self.FrameState=0
            elif self.FrameState==2: # gyro
                
                if self.Bytenum<10:
                    self.GYROData[self.Bytenum-2]=data
                    self.CheckSum+=data
                    self.Bytenum+=1
                else:
                    if data == (self.CheckSum&0xff):
                        self.w = self.get_gyro(self.GYROData)
                    self.CheckSum=0
                    self.Bytenum=0
                    self.FrameState=0
            elif self.FrameState==3: # angle
                
                if self.Bytenum<10:
                    self.AngleData[self.Bytenum-2]=data
                    self.CheckSum+=data
                    self.Bytenum+=1
                else:
                    if data == (self.CheckSum&0xff):
                        self.Angle = self.get_angle(self.AngleData)
                        d = self.a+self.w+self.Angle
                        # print(d)
                        # print("a(g):%10.3f %10.3f %10.3f w(deg/s):%10.3f %10.3f %10.3f Angle(deg):%10.3f %10.3f %10.3f"%d)
                        return d
                    self.CheckSum=0
                    self.Bytenum=0
                    self.FrameState=0
    
    
    def get_acc(self,datahex):  
        axl = datahex[0]                                        
        axh = datahex[1]
        ayl = datahex[2]                                        
        ayh = datahex[3]
        azl = datahex[4]                                        
        azh = datahex[5]
        
        k_acc = 16.0
    
        acc_x = (axh << 8 | axl) / 32768.0 * k_acc
        acc_y = (ayh << 8 | ayl) / 32768.0 * k_acc
        acc_z = (azh << 8 | azl) / 32768.0 * k_acc
        if acc_x >= k_acc:
            acc_x -= 2 * k_acc
        if acc_y >= k_acc:
            acc_y -= 2 * k_acc
        if acc_z >= k_acc:
            acc_z-= 2 * k_acc
        
        return [acc_x,acc_y,acc_z]
    
    
    def get_gyro(self,datahex):                                      
        wxl = datahex[0]                                        
        wxh = datahex[1]
        wyl = datahex[2]                                        
        wyh = datahex[3]
        wzl = datahex[4]                                        
        wzh = datahex[5]
        k_gyro = 2000.0
    
        gyro_x = (wxh << 8 | wxl) / 32768.0 * k_gyro
        gyro_y = (wyh << 8 | wyl) / 32768.0 * k_gyro
        gyro_z = (wzh << 8 | wzl) / 32768.0 * k_gyro
        if gyro_x >= k_gyro:
            gyro_x -= 2 * k_gyro
        if gyro_y >= k_gyro:
            gyro_y -= 2 * k_gyro
        if gyro_z >=k_gyro:
            gyro_z-= 2 * k_gyro
        return [gyro_x,gyro_y,gyro_z]
    
    
    def get_angle(self,datahex):                                 
        rxl = datahex[0]                                        
        rxh = datahex[1]
        ryl = datahex[2]                                        
        ryh = datahex[3]
        rzl = datahex[4]                                        
        rzh = datahex[5]
        k_angle = 180.0
    
        angle_x = (rxh << 8 | rxl) / 32768.0 * k_angle
        angle_y = (ryh << 8 | ryl) / 32768.0 * k_angle
        angle_z = (rzh << 8 | rzl) / 32768.0 * k_angle
        if angle_x >= k_angle:
            angle_x -= 2 * k_angle
        if angle_y >= k_angle:
            angle_y -= 2 * k_angle
        if angle_z >=k_angle:
            angle_z-= 2 * k_angle
    
        return [angle_x,angle_y,angle_z]

if __name__ == '__main__':
    imu = IMU('/dev/ttyUSB0',9600)
    while(1):
        data_tuple = imu.DueData()
        if data_tuple != None:
            # print(data_tuple)
            # print(len(data_tuple))
            print(type(data_tuple[0]))