#include<bits/stdc++.h>
using namespace std;

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  string str;
  cin>>str;
  if(str[2]==str[3] && str[4]==str[5]){
    cout<<"Yes"<<'\n';
    return 0;
  }

  cout<<"No"<<'\n';
  return 0;
}
