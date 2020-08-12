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
	//TODO
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	
	ll t;
	cin>>t;
	vector<int> X(2002,false);
	vector<int> Y(2002,false);
	while(t--){
		int x,y;
		cin>>x>>y;
		X[x+1000] = true;
		Y[y+1000] = true;
	}



	return 0;
	}

		