#include<bits/stdc++.h>
using namespace std;

int32_t main(){
  int n,m;
  cin>>n>>m;
  vector<long long> dorm(n);
  vector<long long> room(m);

  for(int i=0;i<n;i++){
    cin>>dorm[i];
  }

  for(int i=0;i<m;i++){
    cin>>room[i];
  }
  vector<long long> cumulative(n);
  cumulative[0]=dorm[0];
  for(int i=1;i<n;i++){
    cumulative[i] = cumulative[i-1]+dorm[i];
  }

  int i=0,j=0;int sum=0;
  while(m--){
    if(cumulative[i]>room[j]){
        if(i>0)
            cout<<i+1<<" "<<((room[j]-cumulative[i-1]))<<endl;
        else
            cout<<i+1<<" "<<((room[j]))<<endl;
      j++;
    }else if(cumulative[i]==room[j]){
      cout<<i+1<<" "<<dorm[i]<<endl;
      j++;
    }else{
      i++;
      m++;
    }
  }
  return 0;
}
