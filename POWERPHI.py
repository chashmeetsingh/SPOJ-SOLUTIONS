from math import sqrt
a=round((1+sqrt(5))/2,5)
t=input()
for i in range (0,t):
	n=input()
	b=int(round(a**n,0))%1000000007
	print b
