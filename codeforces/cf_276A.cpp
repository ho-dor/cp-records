#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,k;
  cin>>n>>k;
  int f,t; int max = INT_MIN;
  for(int i=0;i<n;i++){
    cin>>f>>t;
    if(t>k)
      f = f-(t-k);
    if(max<f){
      max = f;
    }
  }
  cout<<max<<"\n";
  return 0;
}
