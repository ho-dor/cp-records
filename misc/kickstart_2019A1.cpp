#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;int k=0;
    while(t--){
        k++;
        int n,p;
        cin>>n>>p;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());int sum=0;
        for(int i=0;i<p;i++){
            sum+=v[p-1]-v[i];
        }
        cout<<"Case #"<<k<<": "<<sum<<endl;
    }
    return 0;
}
