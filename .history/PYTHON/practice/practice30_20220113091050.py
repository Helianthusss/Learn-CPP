a = [int(x) for x in input().split()]
sum = 0
for i in range(1,len(a)+1):
    sum += a[i]
print(sum)