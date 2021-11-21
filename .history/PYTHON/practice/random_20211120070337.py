import random
lower="abcdefghiklmnopqrstuvwxyz"
upper="ABCDEFGHIJKLMNOPQRSTUVWXYZ"
number="0123456789"
symbol="[]{}#()*;._-"
all=lower+upper+number+symbol
length=9
password="".join(random.sample(all, length))
print("the password you generated is: ",password)