#include<bits/stdc++.h>
using namespace std;

int main(){
  int d,n,v,sum=0;
  cin>>d>>n;
  for(int i=0;i<n-1;i++){
    cin>>v;
    sum+= d-v;
  }
  cin>>v;
  cout<<sum<<endl;
  return 0;
}
