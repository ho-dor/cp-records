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
	
	c_p_c();

	
	ll t;
	cin>>t;
	while(t--){
		int n,m,a;
		cin>>n>>m;
		std::vector<int> v;
		std::vector<int> p;
		while(n--){
			cout<<a;
			v.push_back(a);
		}
		while(m--){
			cin>>a;
			p.push_back(a);
		}

		if(issorted(v))
			cout<<"YES<<'\n';
	}

	return 0;
	}

		