class NV:
    def __init__(self,ma = 0,ten = " ",hsl= 0,pc= 0):
        self.ma = ma
        self.ten = ten
        self.hsl = hsl
        self.pc = pc
    def Xuat(self):
        print("Nhan vien co he so luong thap nhat")
        print("{} {} {:.2f} {}".format(self.ma,self.ten,self.hsl,self.pc))
    def Nhap(self):
        b = input().split() 
        self.ma = int(b[0])
        self.ten = str(b[1])
        self.hsl = float(b[2])
        self.pc = int(b[3])
    def hesoluong(self):
        return self.hsl

n = int(input())        
a = []
for i in range(n):
    a.append(NV())  
    a[i].Nhap()
vt = 0
for i in range(n):
    if a[i].hesoluong() < a[vt].hesoluong():
        vt = i   
    if a[i].hesoluong() == a[vt].hesoluong()  :
        if vt > i:
            vt = i
a[vt].Xuat()