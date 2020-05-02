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

char arr[1001][1001];
int dp[1001][1001];

void init(){
	rep(i,0,1000){
		rep(j,0,1000){
			arr[i][j]='0';
		}
	}
}

int main(){

	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	ll H,W;
	cin>>H>>W;

	init();

	rep(i,1,H+1){
		rep(j,1,W+1){
			cin>>arr[i][j];
		}
	}

	rep(i,0,H+1){
		rep(j,0,W+1){
			if(i==1 && j==1)
				dp[i][j]=1;
			else
				dp[i][j]=0;
		}
	}

	rep(i,1,H+1){
		rep(j,1,W+1){
			if(i==1 && j==1)
				continue;
			if(arr[i][j]=='#')
				dp[i][j]=0;
			else{
				dp[i][j]=(dp[i-1][j]+dp[i][j-1])%1000000007;
			}
		}
	}

	cout<<dp[H][W]%1000000007;

	return 0;
	}

		