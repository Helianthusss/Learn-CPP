def min(n):
    if (n-1)%2==0:
        return n-1
    else: 
        return n;
n = int(input())
a = []
for i in range(n):
    a.append(int(input()))
for i in range(n):
    print(min(a[i]))
    

