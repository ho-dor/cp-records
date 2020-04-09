#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;
  string s;
  cin>>s;
  int i=0,j=i+1;
  map<string,int> m;
  while(j<s.length()){
    string str="";
    str+=s[i];
    str+=s[j];
    m[str]++;
    i++;j++;
  }
int max=-1;string res="";
  for(auto it=m.begin();it!=m.end();it++){
    if(max<it->second){
      max = it->second;
      res = it->first;
    }
  }

  cout<<res;
}
