#include<bits/stdc++.h>
using namespace std;

int main(){
  string guest;
  string host;
  string letters;
  cin>>guest>>host>>letters;
map<char,int> m;
  for(int i=0;i<guest.length();i++){
    m[guest[i]]++;
  }
  for(int i=0;i<host.length();i++){
    m[host[i]]++;
  }
  for(int i=0;i<letters.length();i++){
    m[letters[i]]--;
  }

  for(auto it=m.begin();it!=m.end();it++){
    if(it->second!=0){
      cout<<"NO"<<endl;
      return 0;
    }
  }
  cout<<"YES"<<endl;
  return 0;
}
