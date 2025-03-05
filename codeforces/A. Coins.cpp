#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
    ll k,n;
    cin>>n>>k;
    if(n%2==0 || n%k==0 || (n-k)%2==0) cout<<"YES\n";
    else cout<<"NO\n";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}

/**
 * DOCUMENTATION:
 * Checking if n%2==0 or n%k==0 or (n-k)%2==0
 */