import math


def rev(a):
	reve=0
	
	while(a>0):
		dig = a%10;
		reve = reve*10+dig
		a = a/10

	return reve	

def main():
	
	t = int(input())

	while t>0:
		
		a,b = map(int,input().split())
		a = rev(a)
		b = rev(b)
		s=a+b

		print(rev(s))
		t=t-1 


if __name__ == "__main__":
    main()
