import math
m,n= list(map(int, input().split(' ')))

print((math.pow(m%100000000,n))%1000000007)