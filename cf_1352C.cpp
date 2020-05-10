#include<bits/stdc++.h>
//#include <ext/pb_ds/assoc_container.hpp>

//using namespace __gnu_pbds;

using namespace std;

#define ll  long long

int main(){

	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

		
	ll t;
	cin>>t;
	while(t--){
		int n, k;
		cin >> n >> k;
		int need = (k - 1) / (n - 1);
		cout << k + need << endl;
	}

	return 0;
	}

		