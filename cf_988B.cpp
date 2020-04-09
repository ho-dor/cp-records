#include<bits/stdc++.h>
using namespace std;

bool compare(string,string);
bool isSubstr(string,string);

int main(){
  int n;
  cin>>n;
  vector<string> v(n);

  for(int i=0;i<n;i++){
    cin>>v[i];
  }

  /*if(n==1){
    cout<<"NO"<<endl;
    return 0;
  }*/

  sort(v.begin(),v.end(),compare);

  for(int i=0;i<n-1;i++)
  {
    if(v[i+1].find(v[i])==string::npos)
    {
      cout<<"NO";
      return 0;
    }
  }

  cout<<"YES"<<endl;
  for(int i=0;i<n;i++){
    cout<<v[i]<<endl;
  }
  return 0;
}

bool compare(string a,string b){
  return a.length()<b.length();
}

bool isSubstr(string s1,string s2){
int n1 = s1.length();
int n2 = s2.length();
if(n1==n2)
  return true;

for(int i=0;i<(n2-n1+1);i++){
  if(s1 == s2.substr(i,n1))
      return true;
}
return false;
}
