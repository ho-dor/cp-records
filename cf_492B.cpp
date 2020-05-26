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

int main()
{
   int n;
   long long int l,x,y,m;
   double long ans=-100;
   cin>>n>>l;
   long long int a[n];
   for(int i=0;i<n;i++)
    cin>>a[i];
    sort(a,a+n);
    for(int i=n-1;i>0;i--)
    {
      x=a[i]-a[i-1];
      
        if(x>ans)
          ans=x;
    }
    ans/=2;
    m=a[0];
    y=l-a[n-1];
    y=max(y,m);
    if(y>ans)
      ans=y;
    
       cout<<fixed<<setprecision(10)<<ans;
       
       return 0;
}

		