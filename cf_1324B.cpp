#include<bits/stdc++.h>

using namespace std;

#define ll              long long
#define setbits(x)      __builtin_popcountll(x)

int check(int n,vector<ll> v){
  int first=-1,last=-1;
  for(int i=0;i<=v.size()-1;i++){
    if(v[i]==n){
      first = i;
      break;
    }

  }

  for(int i=v.size()-1;i>=0;i--){
    if(v[i]==n){
      last = i;
      break;
    }
  }

  return last-first;
}

int32_t main()
{

	//code from here
  int t;
  cin>>t;
  while(t--){
    ll n; int flag=0;
    cin>>n;
    vector<ll> v(n);
    map<int,int> m;
    for(ll i=0;i<n;i++){
      cin>>v[i];
      m[v[i]]++;
    }

    for(auto it=m.begin();it!=m.end();it++){
      if(it->second>=3){
        cout<<"YES"<<endl;
        flag=1;
        break;
      }
    }

    for(auto it=m.begin();it!=m.end();it++){
      if(it->second==2){
        if(check(it->first,v)>1 && flag==0){
          cout<<"YES"<<endl;
          flag=1;
          break;
        }
      }
    }

    if(!flag)
      cout<<"NO"<<endl;

}
	return 0;
}
