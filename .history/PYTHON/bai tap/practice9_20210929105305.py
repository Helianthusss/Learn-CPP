n = int(input())
lst = []
for i in range(n):
    lst.append(int(input()).split(' '))
sum = 0
for v in lst:
    sum += v

print(round(sum/2, 0))