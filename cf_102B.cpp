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

	string str;
	cin>>str;

	if(str.length()<2){
		cout<<0;
		return 0;
	}

	ll len = str.size();
	ll sum=0;
	ll count=1;

	rep(i,0,len){
		sum+=str[i]-'0';
	}

	while(sum>=10){
		count++;
		ll temp=0;
		while(sum>0){
			int dig = sum%10;
			temp += dig;
			sum/=10;
		}

		sum = temp;
	}

	cout<<count;
	
	return 0;
	}

		