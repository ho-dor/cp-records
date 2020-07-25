#include<bits/stdc++.h>
//#include <ext/pb_ds/assoc_container.hpp>

//using namespace __gnu_pbds;

using namespace std;

#define ll  long long

typedef vector<int> vi;
typedef pair<int,int> pi;
typedef unordered_map<int,int> um;
typedef unordered_set<int> us;
typedef priority_queue<int> pq;
typedef deque<int> dq;
typedef queue<int> q;
typedef stack<int> st;

#define f first
#define s second
#define pb push_back
#define mp make_pair

#define rep(i,a,b) for (auto i = a; i < b; i++)

void c_p_c()
{
	
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

int main(){

	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	
	ll t;
	cin>>t;
	
	char a[t+5][t+5];
	ll res[t+5][t+5];

	rep(i,0,t){
		rep(j,0,t){
			res[i][j]=-1;
		}
	}

	rep(i,0,t){
		
		rep(j,0,t){

			cin>>a[i][j];

			if(a[i][j]=='*'){

				res[i][j]=0;

			}
		}

	}


	if(a[0][0]=='*'){
		res[0][0]=0;

	}
	else{
		res[0][0]=1;
	}

	rep(i,1,t){
		if(res[0][i]!=0)
			res[0][i]=res[0][i-1];

	}

	rep(i,1,t){
		if(res[i][0]!=0)
			res[i][0]=res[i-1][0];

	}

		rep(i,1,t){

			rep(j,1,t){
				
				if(res[i][j]!=0)
					res[i][j] = (res[i-1][j]+res[i][j-1])%1000000007;

			}

		}

		cout<<res[t-1][t-1]<<"\n";

	return 0;
	}

		