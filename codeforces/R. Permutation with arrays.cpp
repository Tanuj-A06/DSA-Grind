#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
    ll n;cin>>n;
    ll a[n];
    ll b[n];
    ll ans[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    sort(a,a+n);
    sort(b,b+n);
    for(int i=0;i<n;i++){
        if(a[i]!=b[i]){
            cout<<"no";
            return;
        }
    }
    cout<<"yes";
}
int main(){
    solve();
    return 0;
}