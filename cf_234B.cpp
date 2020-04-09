#include<bits/stdc++.h>
using namespace std;

bool comp(pair<int,int> a,pair<int,int> b){
  return a.first>b.first;
}

int main(){
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  int n,k,num;
  scanf("%d%d",&n,&k);
  vector<pair<int,int>> v(n);
  for(int i=0;i<n;i++){
    scanf("%d",&num);
    v[i] = make_pair(num,i+1);
  }

  sort(v.begin(),v.end(),comp);
  cout<<v[k-1].first<<endl;

  for(int i=k-1;i>=0;i--){
    cout<<v[i].second<<" ";
  }


  return 0;
}
