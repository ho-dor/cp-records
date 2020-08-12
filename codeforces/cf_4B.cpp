#include<bits/stdc++.h>
using namespace std;

#define ll  long long

int main(){
	
	//c_p_c();

	//TODO

	ll d,st;
	cin>>d>>st;
	vector<pair<int,int>> v;
	int mins=0,maxs=0;
	int temp=d;
	while(temp--){
		int mint,maxt;
		cin>>mint>>maxt;
		v.push_back(make_pair(mint,maxt));
		mins += mint;
		maxs += maxt;
	}
	if(!(st<=maxs && st>=mins)){
		cout<<"NO";
		return 0;
	}

	vector<int> res;
	for(int i=0;i<d;i++){
		res.push_back(v[i].first);
		st -=v[i].first;
	}

	int i=0;
	if(st>0){
		while(st>0 && i<d){
			int pos = v[i].second-v[i].first;
			int val = pos>st?st:pos;
			res[i]+=val;
			st-=val;
			i++;
		}
	}

		cout<<"YES"<<"\n";

		for(int i=0;i<d;i++){
			cout<<res[i]<<" ";
		}

	return 0;
	}

		