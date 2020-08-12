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
	
	bool comp(string s1,string s2){
	int len1 = s1.length();
	int len2 = s2.length();

	return s1+s2 < s2+s1;
	}

	int main() {

		int n;
		cin>>n;
		vector<string> v;

		for(int i=0;i<n;i++){
			string str;
			cin>>str;

			v.push_back(str);
		}

		sort(v.begin(),v.end(),comp);
		
		for(int i=0;i<n;i++){
			cout<<v[i]<<"\n";
		}
		
		return 0;
	}