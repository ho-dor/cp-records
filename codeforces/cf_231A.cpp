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

	int n,v;
	cin>>n;
	int oc=0;
	while(n--){
		int i=3;int count=0;
		while(i--){
			cin>>v;
			if(v)
				count++;
		}
		if(count>=2)
			oc++;

	}

	cout<<oc;

	return 0;
	}

		