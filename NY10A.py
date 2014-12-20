b=["TTT", "TTH", "THT", "THH", "HTT", "HTH", "HHT", "HHH"]
t=input()
for i in range(t):
	c=[0,0,0,0,0,0,0,0]
	n=input()
	a=raw_input()
	i=0
	for i in range(len(a)-2):
		z=a[i:i+3]
		if z in b:
			c[b.index(z)]+=1
	print n," ".join([str(x) for x in c] )
