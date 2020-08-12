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


bool dfs(map<int, vector<int>> m,int t,int n){

	int i=(m.begin())->first;

	while(i<=n){
		if(i==t){
			return true;
		}
		if(i>t)
			return false;
		i = m[i][0];
	}
	return false;
}

int main(){
	
	//c_p_c();

	int n,t;
	cin>>n>>t;
	vector<int> v(n-1);
	for(int i=0;i<n-1;i++){
		cin>>v[i];
	}

	map<int,vector<int>> m;
	int temp = n-1;
	int i=0;
	while(temp--){
		if((v[i]+i)<n)
			m[i].push_back(v[i]+i);
		i++;
	}


	bool val = dfs(m,t-1,n-1);

	val?cout<<"YES":cout<<"NO";

	return 0;
	}

		