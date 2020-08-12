#include<bits/stdc++.h>

using namespace std;

int main(){
  vector<vector<int>> v(5);
int n; int row,col;
  for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
      cin>>n;
      if(n==1){
        row = i;col=j;
      }
      v[i].push_back(n);
    }
  }

  cout<<(abs(row-2) + abs(col-2))<<endl;
  return 0;
}
