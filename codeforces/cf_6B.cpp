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

	
	ll n,m;
	char pc;

	cin>>n>>m>>pc;

	char arr[n][m];

	rep(i,0,n){
		rep(j,0,m){
			cin>>arr[i][j];
		}
	}

	set<char> s;

	rep(i,0,n){
		rep(j,0,m){
			if(arr[i][j]==pc){
				
				if(i>0){
					if(arr[i-1][j]!='.' && arr[i-1][j]!=pc){
						s.insert(arr[i-1][j]);
					}
				}

				if(i<n-1){
					if(arr[i+1][j]!='.' && arr[i+1][j]!=pc){
						s.insert(arr[i+1][j]);
					}
				}
				
				if(j<m-1){
					if(arr[i][j+1]!='.' && arr[i][j+1]!=pc){
						s.insert(arr[i][j+1]);
					}
				}
				
				if(j>0){
					if(arr[i][j-1]!='.' && arr[i][j-1]!=pc){
						s.insert(arr[i][j-1]);
					}
				}
			}
		}
	}

	cout<<s.size();

	return 0;
	}

		