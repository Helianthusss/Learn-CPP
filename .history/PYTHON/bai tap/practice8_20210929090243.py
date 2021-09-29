import math
n=int(input())
x,y = [int(x) for x in input().split(' ')]
s=x*x+y*y
if math.sqrt(s) >= n: 
    print("black")
else: print("white")