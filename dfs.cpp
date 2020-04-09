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

void dfs(map<int, vector<int>> m,int e){
	vector<int> v;
	int i=(m.begin())->first;
	cout<<i<<" ";
	v.push_back(i);
	while(e--){
		int l=m[i].size();
		int j=0;
		while(l--){
			auto it = find(v.begin(),v.end(),m[i][j]);
			if(it==v.end()){
			cout<<m[i][j]<<" ";
			v.push_back(m[i][j]);
			i = m[i][j];
			break;
		}else{
			j++;
			}
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
	
	dfs(m,v-1);

	return 0;
	}

		