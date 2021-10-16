m,n= list(map(int, input().split(' ')))
a=[]
k=0
w=[] 
while k<m:
    w.append(0)
    k+=1
for i in range(1,n+1):
    print('nhap thoi gian cho cong viec',i,':',end="")
    bv=int(input())
    a.append(bv)
print()
print('Tong thoi gian cua',n,'cong viec: ',sum(a))

k=n     

while k>0:
    s=max(a) 
    a.remove(s) 
    y=min(w) 
    kda=y+s 
    w.append(kda)
    w.remove(y)
    k-=1

print('Thoi gian hoan thanh cua may thu 1: ', w[0])
print('Thoi gian hoan thanh cua may thu 2: ', w[1])
print('Thoi gian hoan thanh cua may thu 3: ', w[3])
print('\n')
print('thoi gian lam viec hieu qua: ',max(w))