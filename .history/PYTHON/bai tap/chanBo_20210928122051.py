import math
n,S= list(map(int, input().split(' ')))
answer = (n*(n+1))/2

print(int(answer-S))