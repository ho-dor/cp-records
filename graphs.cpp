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
	int e,v;
	cin>>e>>v;
	map<string,vector<string>> m; //Here the data type is generic, change according to the type of data in vertices.

	for(int i=0;i<e;i++){
		string s,d;
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

	return 0;
	}

		