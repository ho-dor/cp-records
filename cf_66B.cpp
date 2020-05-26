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

 	ll n;
 	cin>>n;

 	vector<ll> v(n);
 	
 	rep(i,0,n){
 		cin>>v[i];
 	}

 	std::vector<ll> right(n);
 	std::vector<ll> left(n);

 	right[n-1]=1;
 	left[0]=1;

 	for(int i=n-2;i>=0;i--){
 		if(v[i]>=v[i+1]){
 			right[i] = right[i+1]+1;
 		}else{
 			right[i]=1;
 		}
 	}

 	for(int i=1;i<n;i++){
 		if(v[i]>=v[i-1]){
 			left[i]=left[i-1]+1;
 		}else{
 			left[i]=1;
 		}
 	}

 	ll max=1;

 	rep(i,0,n){
 		ll curr = right[i]+left[i]-1;
 		if(curr>max){
 			max = curr;
 		}
 	}

 	cout<<max<<"\n";

 	return 0;
 	}
 
 		