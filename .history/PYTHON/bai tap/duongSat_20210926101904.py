import math
[k,t]=float(input())
#t=float(input())
if t // k == 0:  
    print(t%k)
else: print(k-(t%k))
