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

	
	string s;
	cin>>s;

	int v[26]={};

	for(auto c: s){
		v[c-'A']++;
	}

	ll cnt=0;

	for(int i=0;i<26;i++){
		
		if(v[i]&1)
			cnt++;
	
	}

	if(cnt>1){
	
		cout<<"NO SOLUTION\n";
		return 0;
	
	}

	string t;

	for(int i=0;i<26;i++){
	
		if(v[i]&1^1){

			for(int j=0;j<v[i]/2;j++)
	
				t+= (char)('A'+i);
	
		}
	
	}

	cout<<t;

	for(int i=0;i<26;i++){

		if(v[i]&1){
	
			for(int j=0;j<v[i];j++){
	
				cout<<(char)('A'+i);
	
			}
	
		}

	
	}

	reverse(t.begin(),t.end());

	cout<<t;

	return 0;
	}

		