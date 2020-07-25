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

vector<ll> v;
vector<ll> parent;

void init(){

	v.resize(1000);
	
	for(int i=0;i<1000;i++){
	
		v[i]=i;
		parent[i]=i;
	
	}

}

ll get(ll a){
	if(a==parent[a])
		return a;
	return parent[a] = get(parent[a]);
}

void union_set(ll a,ll b){
	
	a = get(a);
	b = get(b);
	
	if(a!=b){

		parent[a]=b;

	}

}

int main(){

	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	
	init();	

	union_set(1,2);
	union_set(2,4);

	return 0;
	}

		