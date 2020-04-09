#include<bits/stdc++.h>
using namespace std;

int main(){
  string str;
  getline(cin,str);
  int n = str.length();
  char ch;
  for(int i=n-2;i>=0;i--){
    if((str[i]>=97 && str[i]<=122) || (str[i]>=65&&str[i]<=90)){
      ch = str[i];
      break;
    }
  }
  switch(ch){
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'y':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'Y':
    case 'U': cout<<"YES"<<"\n";
    break;
    default: cout<<"NO"<<endl;
  }
  return 0;
}
