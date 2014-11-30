while True:
	try:
		a=input()
		b=input()
		d= (a/2)+(b/2)
		x= (a/2)-(b/2)
		if (a-d-x==1):
			print d+1
			print x
		else:
			print d
			print x
	except EOFError:
		break
