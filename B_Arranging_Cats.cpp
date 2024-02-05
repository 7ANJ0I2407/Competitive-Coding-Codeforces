#include<iostream>
// Author : Shuchita Singh
#define vi vector<int>
#define vvi vector<vi>
#define pb push_back
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define mod 1000000007
typedef long long ll;


using namespace std;

void solve(){
	int n; cin>>n;	// the number of boxes
	string s; cin>>s;
	string f; cin>>f;

	int a=0, b=0;
	for(int i=0; i<n; i++){
		if(s[i]==f[i])
			continue;
		if(s[i]=='1')
			a++;
		if(f[i]=='1')
			b++;
	}
	cout<< max(a, b)<<endl;
}

signed main(){
	fast;
	int t; cin>>t; while(t--)
	solve();
}