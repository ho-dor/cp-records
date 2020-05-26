#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
#define mod 1000000007
#define pb push_back
#define pairi pair<int,int>
#define mapchar map<char,int>
#define mapint mpa<int,int>
#define vint vector<int>
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<string>v; string input;
        for(int i=0;i<n;i++){
            cin>>input;
            v.push_back(input);
        }
        string ans="YES";
        for(int i=0;i<n-1;i++){ int flag=0;
            for(int j=0;j<n-1;j++){
               if(v[i][j]=='1'){
                   if(v[i+1][j]!='1'&&v[i][j+1]!='1'){
                       ans="NO";flag=1;break;
                   }
               }
            }
            if(flag==1)
                break;
        }
        cout<<ans<<endl;
    }
}