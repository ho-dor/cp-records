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
		int n,p,c;
		cin>>n;
		vector<pair<int,int>> v(n);
		for(int i=0;i<n;i++){
			cin>>p>>c;
			v[i] = make_pair(p,c);
		}

		if(n==1){
			if(v[0].first>=v[0].second)
				cout<<"YES\n";
			else
				cout<<"NO\n";

			continue;
		}

		if(v[0].first<v[0].second){
			cout<<"NO\n";
			continue;
		}
			bool curr = false;	

		for(int i=1;i<n;i++){
			if(v[i].first>=v[i-1].first && v[i].second>=v[i-1].second){

				int f_d = v[i].first-v[i-1].first;
				int s_d = v[i].second-v[i-1].second;

				if(v[i].first<v[i].second || s_d>f_d){
					cout<<"NO\n";
					curr = true;
					break;
				}
			}
			else{
				cout<<"NO\n";
				curr=true;
				break;
			}
		}
		if(!curr)
			cout<<"YES\n";
	}

	return 0;
	}

		