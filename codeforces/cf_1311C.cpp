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

	
	ll t;
	cin>>t;
	while(t--){
		ll n,m,v;
		cin>>n>>m;
		string s;
		vector<ll> ma(n);
		cin>>s;
		while(m--){
			cin>>v;
			ma[v-1]++;
		}

		for(int i=n-1;i>0;i--){
			ma[i-1] += ma[i];
		}
		
		vector<ll> ans(26);
		for(int i=0;i<26;i++){
			ans[s[i]-'a'] += ma[i];
		}

		for(int i=0;i<26;i++){
			cout<<(ans[i]+1)<<" ";
		}

		cout<<'\n';
	}

	return 0;
	}

		