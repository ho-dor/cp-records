#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,k;
  cin>>n>>k;
  vector<int> v(n);
  for(int i=0;i<n;i++){
    cin>>v[i];
  }
  sort(v.begin(),v.end());

  if(k==0 && v[0]>1){
    cout<<v[0]-1;
    return 0;
  }
  else if(k==0){
    cout<<-1;
    return 0;
  }
  if(n==1){
    cout<<v[0];
    return 0;
  }

  if(n==k){
    cout<<v[n-1];
    return 0;
  }

  if(v[k-1]==v[k]){
    cout<<-1;
  }else{
    if((v[k]-v[k-1])==1){
      cout<<v[k-1];
    }else{
    cout<<v[k-1]+1;
  }
  }
}
