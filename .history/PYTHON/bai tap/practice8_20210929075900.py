n=int(input())
x,y = [int(x) for x in input().split(' ')]
if x==y and y > x: 
    print("white")
else: print("black")