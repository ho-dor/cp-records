#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,v;
  cin>>n;
  int chest=0,biceps=0,back=0;
  for(int i=0;i<n;i++){
    cin>>v;
    switch((i+1)%3){
      case 1: chest+=v;
      break;
      case 2: biceps+=v;
      break;
      case 0: back+=v;
      break;
    }
  }

  if(chest>biceps && chest>back){
    cout<<"chest"<<"\n";
  }else if(biceps>back && biceps>chest){
    cout<<"biceps"<<"\n";
  }else if(back>biceps && back>chest){
    cout<<"back"<<"\n";
  }
  return 0;
}
