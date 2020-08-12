#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,k;
  cin>>n>>k;
  vector<int> a(n);
  for(int i=0;i<n;i++){
    cin>>a[i];
  }

  map<int,int> m;

  for(int i=0;i<n;i++){
    m[a[i]]=i+1;
  }
int count=0;
  for(auto it=m.begin();it!=m.end();it++){
    if(it->second > 0){
      count++;
    }
  }

  if(count>=k){
    cout<<"YES"<<endl;
  }else{
    cout<<"NO"<<endl;
    return 0;
  }

  for(auto it=m.begin();it!=m.end(),k>0;it++){
    cout<<it->second<<" ";
    k--;
  }
  return 0;
}
