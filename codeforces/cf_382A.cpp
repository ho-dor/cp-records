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

	
	string s;
	cin>>s;

	string s1;
	cin>>s1;

	auto it = s.find('|');

	ll first = it;
	ll second = s.length()-1-it;

	ll diff = abs(first-second);

	if(diff%2){

		if(s1.length()>=diff && s1.length%2!=0){

			rep(i,0,s.length()){
				
			}
		
		}
		else{
		
			cout<<"Impossible";
		
		}
	
	}
	
	else{
		
		if(s1.length()>=diff && s1.length%2==0){
		
			rep(i,0,s.length()){
				
			}
		
		}

		else{
		
			cout<<"Impossible";
		
		}
	
	}



	return 0;
	}

		