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
		int n,x,val;
		cin>>n>>x;
		vector<bool> v(100,false);
		
		for(int i=0;i<n;i++){
			cin>>val;
			v[val-1]=true;
		}

		int i=0;

		while(x && i<100){
			if(!v[i]){
				x--;
				v[i]=true;
			}
			i++;
		}

		i=0;
		while(v[i] && i<100){
			i++;
		}

		if(x!=0){
			cout<<i+x<<endl;
			continue;
		}

		cout<<i<<"\n";
	}

	return 0;
	}

		