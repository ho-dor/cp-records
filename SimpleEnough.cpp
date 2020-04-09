#include<bits/stdc++.h>
using namespace std;

/*
For a given number n, form a list and insert the following pattern into the list at the same position sequentially.
{floor(n/2) , n%2 , floor(n/2) }
Until every element in the list is either 1 or 0. Now, calculate number of 1s in from l to r (1-indexed).

EXPLAINATION: Start from n. Then make a list with the following elements.i.e. 
{floor(n/2) , n%2 , floor(n/2) }. Now this list has three elements. 
Now further break down each of those 3 elements considering the new n to be floor(n/2) ,
n%2 and floor(n/2) respectively for those three elements respectively INPLACE.
And this process will go on until the n reduces down to 1 or 0. So it will basically 
form a tree with 3 branches coming out of every node at every level starting from 1 node (n) at the root.

Sample input - 9 6 9

Output -        3
*/

int main() {

	return 0;
}