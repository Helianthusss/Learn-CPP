import math
m,n= list(map(int, input().split(' ')))
x=math.pow(m%1000000007,n)
print(x)