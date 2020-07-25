#include<bits/stdc++.h>

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

	
	ll n;
	cin>>n;

	char a[n][n];

	rep(i,0,n){
		rep(j,0,n){
			cin>>a[i][j];
		}
	}

	char dia = a[0][0];
	char non = a[0][1];

	if(non==dia){
		cout<<"NO\n";
		return 0;
	}

	rep(i,0,n){
		rep(j,0,n){
			if(i==j){
				if(a[i][j]!=dia){
					cout<<"NO\n";
					return 0;
				}
			}
			else if(i+j==n-1){
				if(a[i][j]!=dia){
					cout<<"NO\n";
					return 0;
				}
			}
			else{
				if(a[i][j]!=non){
					cout<<"NO\n";
					return 0;
				}
			}
		}
	} 

	cout<<"YES\n";

	return 0;
	}

		