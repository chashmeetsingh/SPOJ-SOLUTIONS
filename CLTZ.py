while True:
	try:
		n=input()
		c=1
		while(n!=1):
			if(n%2==0):
				n=n>>1
			else:
				n=n*3+1
			c+=1
		print c	
	except EOFError:
		break
