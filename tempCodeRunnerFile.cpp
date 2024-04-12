#include<iostream>
#include<vector>
#include<map>
#include<unordered_map>
#include<set>
#include<unordered_set>
#include <deque>
//#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define pp pop_back
#define ll long long
#define ld long double
#define int long long
#define pair pair<int,int>
typedef vector<ll> vi;
#define forall(i,n,x) for(int i=0; i<n; i+=x)
#define all(x) x.begin(), x.end()

int rec(int i,int j,int ind,int n,vector<string> & vec,string &str){
    if(ind == n)return 1;
    if(vec[i][j] != str[ind])return 0;

    int ans = 0;
    rep(k,0,2){
        int newX = i + dx[k];
        int newY = j + dy[k];
        if(newX >=0 and newX < 2 and newY >=0 and newY < n){
            ans += rec(newX,newY,ind+1,n,vec,str);
        }
    }

    return ans;
}

void solve()
{
    int n;
    cin>>n;

    vector<string> vec(2);
    for(auto &val:vec){
        cin>>val;
    }



    int ind = n-1;
    for(int i = 0;i < n; i++){
        if(vec[1][i] == '0'){
            ind = i;
            break;
        }
    }

    string ans;
    for(int i = 0;i <= ind; i++){
        ans.pb(vec[0][i]);
    }
    for(int i = ind; i < n; i++){
        ans.pb(vec[1][i]);
    }

    string str = ans;
    cout<<ans<<endl;
    cout<<rec(0,0,0,n+1,vec,str)<<endl;

}

signed main()
{
ios::sync_with_stdio(false);
cout.tie(0); cin.tie(0);
int t = 1;
cin >> t;
while(t--)
{
solve();
}

return 0;
}
int n;
    cin>>n;

    vector<string> vec(2);
    for(auto &val:vec){
        cin>>val;
    }



    int ind = n-1;
    for(int i = 0;i < n; i++){
        if(vec[1][i] == '0'){
            ind = i;
            break;
        }
    }

    string ans;
    for(int i = 0;i <= ind; i++){
        ans.pb(vec[0][i]);
    }
    for(int i = ind; i < n; i++){
        ans.pb(vec[1][i]);
    }

    string str = ans;
    cout<<ans<<endl;
    cout<<rec(0,0,0,n+1,vec,str)<<endl;
int rec(int i,int j,int ind,int n,vector<string> & vec,string &str){
    if(ind == n)return 1;
    if(vec[i][j] != str[ind])return 0;

    int ans = 0;
    rep(k,0,2){
        int newX = i + dx[k];
        int newY = j + dy[k];
        if(newX >=0 and newX < 2 and newY >=0 and newY < n){
            ans += rec(newX,newY,ind+1,n,vec,str);
        }
    }

    return ans;
}