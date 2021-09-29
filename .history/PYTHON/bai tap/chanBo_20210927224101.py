n,S= list(map(int, input().split(' ')))
Sum=0
for i in range(1,n): 
    Sum = Sum+i
print(Sum-S)