n=int(input())
x,y = [int(x) for x in input().split(' ')]
if x>=x+y-1: 
    print("white")
else:
    print("black")   