import math
n=int(input())
x,y = [int(x) for x in input().split(' ')]
s=x*x+y*y
t= math.sqrt(s)
if round(t, 0) >= n: 
    print("black")
else: print("white")