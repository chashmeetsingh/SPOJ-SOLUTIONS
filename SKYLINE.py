a = []
a.append(1)
for i in range(1, 1001):
	a.append ( a [ i - 1 ] * (4 * i - 2 ) / ( i + 1 ) )
n = input()
while(n>0):
	print a[n] % 1000000
	n = input()
