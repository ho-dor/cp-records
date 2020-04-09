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

void bfs(map<int,vector<int>> m){
	queue<int> q; vector<int> v;
	q.push((m.begin())->first);
	v.push_back((m.begin())->first);
	while(!q.empty()){
		int i = q.front();
		q.pop();
		cout<<i<<" ";
		int l = (m[i]).size();
		for(int j=0;j<l;j++){
			auto it= find(v.begin(),v.end(),m[i][j]);
			if(it == v.end())
				q.push(m[i][j]);
				v.push_back(m[i][j]);
			}
	}
}

int main(){
	
	//c_p_c();

	int e,v;
	cin>>e>>v;
	map<int,vector<int>> m; //Here the data type is generic, change according to the type of data in vertices.

	for(int i=0;i<e;i++){
		int s,d;
		cin>>s>>d;
		
		m[s].push_back(d); //only for directed edges.
		m[d].push_back(s); //for undirected edges.
	}

	for(auto it=m.begin();it!=m.end();it++){
		int l = (it->second).size();
		cout<<it->first<<" -> ";
		for(int j=0;j<l;j++){
			cout<<it->second[j]<<",";
		}
		cout<<"\n";
	}
	
	bfs(m);

	return 0;
	}

		