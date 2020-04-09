#include<bits/stdc++.h>
using namespace std;

int main(){
  string s;
  cin>>s;
  int n=s.length();
  map<char,int> m;
  for(char c: s){
    m[c]++;
  }
  int cnt=0;
  for(auto it=m.begin();it!=m.end();it++){
    cnt++;
  }

  if(cnt&1){
    cout<<"IGNORE HIM!"<<"\n";
  }else{
    cout<<"CHAT WITH HER!"<<"\n";
  }
  return 0;
}
