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

	ll ot,et;

	if(n&1){
		ot = (n/2)+1;
		et = n/2;
	}
	else{
		ot = n/2;
		et = n/2;
	}

	ll es = ((et)*(2*2+(et-1)*2))/2;
	ll os = ((ot)*(2*(-1)+(ot-1)*(-2)))/2;

	cout<<es+os<<"\n";

	return 0;
	}

		