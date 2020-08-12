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

	int n;
	cin>>n;

	vector<int> v(n);

	for(int i=0;i<n;i++){
		cin>>v[i];
	}

	int pre=0;
	int res=0;

	map<int,int> m;

	if(v[0]==0)
		m[0]=0;

	for(int i=0;i<n;i++){

		pre+=v[i];
		int curr = 0;
	
		if(pre==0 || m.count(pre)){
			curr = i-m[pre]+1;
		}
		else{
			m[pre]=i;
		}
		res = max(res,curr);
	
	}
	cout<<res;
	return 0;
	}

		