def min(n):
    if (n-1)%2==0:
        return n-(n-1)
    else: 
        return 0;
n = int(input())
a = []
for i in range(n):
    a.append(int(input()))
for i in range(n):
    print(min(a[i]))
    

