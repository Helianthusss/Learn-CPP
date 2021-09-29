def Sum():
    n = int(input())
    arr = []
    for i in range(n):
        arr.append(int(input()))
    sum = 0
    for v in arr:
        sum += v
    print(round(sum/n, 0))
q=int(input())
arr=[]
for i in range(1,q): 
    arr=int(input())
    Sum()

    
