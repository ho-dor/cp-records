#include<bits/stdc++.h>

using namespace std;

#define ll  long long

typedef vector<int> vi;
typedef pair<int,int> pi;
typedef unordered_map<int,int> um;
typedef unordered_set<int> us;
typedef priority_queue<int> pq;
typedef deque<int> dq;
typedef queue<int> q;
typedef stack<int> st;

#define f first
#define s second
#define pb push_back
#define mp make_pair

#define rep(i,a,b) for (auto i = a; i < b; i++)

void c_p_c()
{
	
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

#define prime 3

ll createHash(string str, int n){

	ll result=0;

	for(int i=0;i<n;i++){

		result += (ll)str[i]*((ll)pow(prime,i));
	
	}

	return result;
}

ll recalculateHash(string str, string pat, ll oldHash, ll oldIndex, ll newIndex){

	ll newHash = oldHash - str[oldIndex];
	newHash /= prime;
	newHash += (ll)(str[newIndex]*((ll)pow(prime,pat.length()-1)));  

	return newHash;

}

bool checkString(string str1, ll index1, string str2){

	for(int i=0;i<str2.length();i++){

		if(str1[i+index1]!=str2[i]){
			return false;
		}

	}

	return true;

}

int main(){

	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	string str;
	string pat;

	cin>>str>>pat;

	ll patHashVal = createHash(pat,pat.length());
	ll strHashVal = createHash(str,pat.length());

	for(int i=0;i<str.length()-pat.length();i++){

		if(patHashVal == strHashVal && checkString(str,i, pat)){
			cout<<i<<" ";
		}
		else{
			if(i+pat.length()<str.length())
				strHashVal = recalculateHash(str,pat,strHashVal,i,i+pat.length());
		}
	}

	return 0;

	}

		