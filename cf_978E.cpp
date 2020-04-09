#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,w;
  cin>>n>>w;
  vector<long long> num(n);
  for(int i=0;i<n;i++){
    cin>>num[i];
  }
  int k = 0,Max = 0;
      for(int i=0;i<n;i++) {
          if(num[i] < 0) {
              if(k - (-num[i]) < 0) {
                  Max += (-num[i]) - k;
                  k = 0;
              } else {
                  k += num[i];
              }
          } else {
              k += num[i];
              Max = max(Max,k);
          }
      }
      if(Max > w)
          printf("0");
      else
          printf("%d",w-Max+1);
      return 0;
}
