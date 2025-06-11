#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
    int n;
    cin>>n;
    string a,b;
    cin>>a;
    cin>>b;
    bool ans=true;
    for(int i=0;i<n;i++){
        if(a[i]=='B' || a[i]=='G') a[i]='S';
        if(b[i]=='B' || b[i]=='G') b[i]='S';
        if(a[i]!=b[i]) ans=false;
    }
    if(ans) cout<<"YES\n";
    else cout<<"NO\n";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}