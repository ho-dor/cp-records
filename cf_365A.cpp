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

	ll n; char k;
	cin>>n>>k;
	ll cnt=0;

	while(n--){
		bool flag = true;
		string s;
		cin>>s;

		for(char i='0';i<=k;i++){
			if(s.find(i)==string::npos){
				flag = false;
				break;
			}
		}

		if(flag)
			cnt++;

	}

	cout<<cnt<<"\n";

	return 0;
	}

		