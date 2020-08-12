#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;
  int in;

  map<int,int> m;
  vector<int> a(n);

  for(int i=0;i<n;i++){
    cin>>a[i];
    m[a[i]]=-1;
  }

  vector<int> v;
  for(int i=n-1;i>=0;i--){
    if(m[a[i]]==-1){
      m[a[i]]++;
      v.push_back(a[i]);
    }
  }
  int s=v.size();
  cout<<s<<endl;
  for(int i=s-1;i>=0;i--){
    cout<<v[i]<<" ";
  }
  return 0;
}
