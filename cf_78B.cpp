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

	int n;
	cin>>n;

	int curr = floor(double(n/7));

	rep(i,0,curr){
		cout<<"ROYGBIV";
	}

	switch(n%7){
		case 1: cout<<"G";
		break;
		case 2: cout<<"GB";
		break;
		case 3: cout<<"YGB";
		break;
		case 4: cout<<"YGBI";
		break;
		case 5: cout<<"OYGBI";
		break;
		case 6: cout<<"OYGBIV";
		break;
	}

	return 0;
	}

		