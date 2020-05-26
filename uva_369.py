import math
while(1):
	n,m = map(int,input().split())
	if n==0 and m==0:
		exit()
	else:
		deno = math.factorial(n-m)*math.factorial(m)
		ans = math.factorial(n)//deno
		print(str(n) +" things taken "+ str(m) + " at a time is "+ str(ans) +" exactly.")

