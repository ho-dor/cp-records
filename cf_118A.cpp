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

bool isVowel(char c){
	if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='y' || c=='A' || c=='E' || c=='I' || c=='O' || c=='U' || c=='Y')
		return true;
	return false;
}

int main(){
	
	//c_p_c();

	string str;
	string res;
	cin>>str;
	int n=str.length();

	for(int i=0;i<n;i++){
		//code
		if(!isVowel(str[i])){
			res+=('.');
			if(str[i]>=65 && str[i]<=90)
				res+=str[i]+32;
			else
				res+=str[i];
		}
	}

	cout<<res;
	
	//ll t;
	//cin>>t;
	//while(t--){

	//}

	return 0;
	}

		