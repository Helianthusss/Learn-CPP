import math
n=int(input())
x,y = [int(x) for x in input().split(' ')]
s=math.sqrt(x,y)
if s > n: 
    print("black")
else: print("white")