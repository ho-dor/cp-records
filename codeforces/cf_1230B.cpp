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

	
	int n,k;
	cin>>n>>k;
	string str;
	cin>>str;

	if(n==1 && k==1){
		str[0]='0';
		k--;
	}

	if((str[0]-'0')!=1 && k>0){
		str[0]='1';
		k--;
	}
	int i=1;
	while(k>0 && i<n){
		if((str[i]-'0')!=0){
			str[i]='0';
			k--;
		}
		i++;
	}

	cout<<str;

	return 0;
	}

		