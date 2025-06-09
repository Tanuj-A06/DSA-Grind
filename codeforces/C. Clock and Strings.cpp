#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
    int a,b,c,d,amax,amin,bmax,bmin;
    cin>>a>>b>>c>>d;
    amax=max(a,b);
    amin=min(a,b);
    bmax=max(c,d);
    bmin=min(a,d);
    if((bmax>amax && bmax>amin) && (bmin>amin && bmin<amax)) cout<<"YES\n";
    else cout<<"NO\n";
}
int main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
}