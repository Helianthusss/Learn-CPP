n = int(input())
lst = []
for i in range(n):
    lst.append(int(input()))
sum = 0
for v in lst:
    sum += v

print(round(sum/n, 0))