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

bool check(char c){
	if(c=='h' || c=='e' || c=='l' || c=='o')
		return true;
	return false;
}

int main(){
	
	//c_p_c();

	string s;
	cin>>s;

	int n=s.length();
	string curr;
	for(int i=0;i<n;i++){
		if(check(s[i]))
			curr+=s[i];
	}

	if(curr.find("hello")==string::npos){
		cout<<"NO";
	}else
		cout<<"YES";

	return 0;
	}

		