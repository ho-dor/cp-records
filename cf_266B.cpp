#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,t;
  cin>>n>>t;

  string str;
  cin>>str;

while(t--){
  int i=1;
  while(i<n){
    if(str[i-1]=='B' && str[i]=='G'){
      str[i-1]='G'; str[i]='B';
      i++;
    }
    i++;
  }
}
  cout<<str<<endl;
  return 0;
}
