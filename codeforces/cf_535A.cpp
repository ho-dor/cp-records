#include<bits/stdc++.h>
using namespace std;

#define ll  long long

void c_p_c()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

int main(){
	
	//c_p_c();

	map<int,string> m;
	m[0] = "zero";
	m[1] = "one";
	m[2] = "two";
	m[3] = "three";
	m[4] = "four";
	m[5] = "five";
	m[6] = "six";
	m[7] = "seven";
	m[8] = "eight";
	m[9] = "nine";
	m[10] = "ten";
	m[11] = "eleven";
	m[12] = "twelve";
	m[13] = "thirteen";
	m[14] = "fourteen";
	m[15] = "fifteen";
	m[16] = "sixteen";
	m[17] = "seventeen";
	m[18] = "eighteen";
	m[19] = "nineteen";
	m[20] = "twenty";
	m[30] = "thirty";
	m[40] = "forty";
	m[50] = "fifty";
	m[60] = "sixty";
	m[70] = "seventy";
	m[80] = "eighty";
	m[90] = "ninety";

	int n;
	cin>>n;
	string res;
	
	if(n>10 && n<20)
		cout<<m[n];
	else if(n%10==0){
		cout<<m[n];
	}
	else if(n<10)
		cout<<m[n];
	else{
		int first = n/10;
		res += m[first*10];
		res += '-';

		int second = n%10;
		res += m[second];
		cout<<res;
	}

	//ll t;
	//cin>>t;
	//while(t--){

	//}

	return 0;
	}

		