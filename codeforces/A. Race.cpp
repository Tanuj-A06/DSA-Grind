#include <bits/stdc++.h>
using namespace std;
void solve(){
    int a,x,y;
    cin>>a>>x>>y;
    int ma=max(x,y);
    int mi=min(x,y);
    if(a<mi || a>ma) cout<<"YES\n";
    else cout<<"NO\n";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}