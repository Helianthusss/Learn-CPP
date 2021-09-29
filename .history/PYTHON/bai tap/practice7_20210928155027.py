san,gach= list(map(int, input().split(' ')))
if san%gach ==0:
    print(int(san/gach))
else: 
    print(int((san/gach)+1))