#include<bits/stdc++.h>
using namespace std;

#define ll  long long

void c_p_c()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

bool found(queue<int> q,int m,int rec){
	int p = pow(2,rec);
	
	cout<<"p : "<<p<<"\n";

	while(p--){

		if(q.front()==m){
			cout<<"returning... :"<<q.front()<<'\n';
			return true;
		}

		if(q.front()!=m){
			cout<<q.front()<<" ";
			q.push(q.front()-1);

			q.push(q.front()*2);
			q.pop();
		}
	}
	return false;
}

int bfs(int n,int m){
	queue<int> q;
	int count=1;
	q.push(n-1);
	q.push(n*2);

	while(1){

		if(found(q,m,count)){
			//cout<<q.front()<<" "<<m<<" "<<count<<'\n';
			return count;
		}
		cout<<q.front();
		count++;
	}
	return 0;
}

int main(){
	
	//c_p_c();

	int n,m;
	cin>>n>>m;

	if(m<n){
		cout<<(n-m);
		return 0;
	}

	if(m/n==2 && m%n==0){
		cout<<1;
		return 0;
	}

	int count=bfs(n,m);

	cout<<count;

	return 0;
	}

		