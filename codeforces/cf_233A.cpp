#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;
  if(n&1) cout<<-1<<"\n";
  else{
    int i=1;
    int j=i+1;
    while(j<=n){
      cout<<j<<" "<<i<<" ";
      i+=2;
      j+=2;
    }
  }
  return 0;
}
