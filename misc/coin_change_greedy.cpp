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

int noOfCoins(vector<int> coins,int price){

	

}

int main(){

	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	
	vector<int> coins = {5,10,20,50,100,200,500,2000};

	int price;
	cin>>price;

	cout<<noOfCoins(coins,price)<<"\n";

	return 0;
	}

		