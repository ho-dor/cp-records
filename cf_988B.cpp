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

