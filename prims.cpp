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

map<int,pair<int,int>> dist;

void prims(auto m){
	
	int source = (m.begin()->first);
	dist[source].first = 0;
	int next = m.begin().first;
	for(auto it=m.begin();it!=m.end();it++){
		int sz = it->second.size();
		int min=INT_MAX;
		for(int i=0;i<sz;i++){
			int d = it->second[i].second;
			if(d<min){
				dist[it->second[i].first] = make_pair(d,it->first);
				min=d;

			}
		}

	}
}

void init(auto m){
	for(auto it=m.begin();it!=m.end();it++){
		dist[it->first] = make_pair(INT_MAX,-1);
	}
}

int main(){
	
	//c_p_c();

	int v,e;
	cin>>v>>e;

	int s,d,w;
	map<int,vector<pair<int,int>>> m;
	
	for(int i=0;i<e;i++){
		cin>>s>>d>>w;
		m[s].push_back(make_pair(d,w));
	}	

	init(m);
	
	prims(m);


	return 0;
	}

		