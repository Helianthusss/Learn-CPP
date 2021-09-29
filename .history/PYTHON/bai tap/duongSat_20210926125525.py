import math
k=float(input())
t=float(input())
if (t // k)%2 == 0:  
    print(t%k)
else: print(k-(t%k))
