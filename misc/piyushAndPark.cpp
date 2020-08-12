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

	
	ll N,K,M,S;
	cin>>N>>M>>K>>S;

	char arr[N][M];
	
	rep(i,0,N){
		rep(j,0,M){
			cin>>arr[i][j];
		}
	}

	rep(i,0,N){
		
		rep(j,0,M){

			if(S<=K){
				cout<<"NO\n";
				return 0;
			}

			if(arr[i][j]=='.'){

				S-=2;

			}else if(arr[i][j]=='#'){

				break;

			}else{

				S+=5;

			}

			if(j!=M-1){
				S--;
			}

		}
	
	}

	cout<<"YES\n"<<S<<"\n";

	return 0;
	}

		