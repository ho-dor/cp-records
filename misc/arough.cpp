// CPP program to count minimum 
// steps to reduce a number 
#include <iostream> 
#include <cmath> 

using namespace std; 

int countways(int n) 
{ 
	if (n == 1) 
		return 0; 
	else if (n % 2 == 0) 
		return 1 + countways(n / 2); 
	else
		return 1 + min(countways(n - 1), 
					countways(n + 1)); 
} 

// Driver code 
int main() 
{ 
	int n = 4; 

	cout << countways(n)<< "\n"; 

	return 0; 
} 
