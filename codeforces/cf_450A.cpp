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

	int n,m,v;
	cin>>n>>m;

	queue<int> q;
	vector<int> p;
	for(int i=0;i<n;i++){
		cin>>v;
		q.push(i+1);
		p.push_back(v);
	}

	int final=q.back();
	while(!q.empty()){
		p[q.front()-1] -= m;
		if(p[q.front()-1] > 0){
			int val = q.front();
			q.pop();
			q.push(val);
			final = val;
		}else{
			q.pop();
		}

	}

	cout<<final;
	
	//ll t;
	//cin>>t;
	//while(t--){

	//}

	return 0;
	}

		