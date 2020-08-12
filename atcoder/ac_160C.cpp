#include<bits/stdc++.h>
using namespace std;
//NOT DONE.
int main(){
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  int k,n;
  cin>>k>>n;
  vector<int> v(n);
  int min = INT_MAX,max=INT_MIN;
  for(int i=0;i<n;i++){
    cin>>v[i];
    if(v[i]>(k/2)){
      v[i] = -(k-v[i]);
    }
    if(v[i]==(k/2)){
      v[i]=0;
    }
  }
  sort(v.begin(),v.end());

  int ans = v[n-1]-v[0];
  cout<<ans<<endl;



  return 0;
}
