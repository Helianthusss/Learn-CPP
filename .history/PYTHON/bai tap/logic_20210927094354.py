tre_trung,xinh_dep,co_gau,giau_co= list(map(int, input().split(' ')))

if tre_trung ==1 and xinh_dep==1 and co_gau==1: 
    print("1")
elif tre_trung ==0 and xinh_dep==0 and co_gau==1 and giau_co == 1: 
    print ("1")
elif tre_trung ==0 and xinh_dep==1 and co_gau==1: 
    print ("1")
elif tre_trung ==0 and xinh_dep==0 and co_gau==0 and giau_co == 0: 
    print ("1")
else:
    print ("0")