numbers=(5,12,25,33,48,50,61)
for x in numbers:
    if x%5 ==0 or x%10 == 0:
        print(x)
    else: 
        continue