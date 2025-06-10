#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n,x;
    cin>>n>>x;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int first_one,last_one;
    for(int i=0;i<n;i++){
        if(a[i]==1){
            first_one=i;
            break;
        }
    }
    for(int i=n-1;i>=0;i--){
        if(a[i]==1){
            last_one=i;
            break;
        }
    }
    if(last_one-first_one+1>x) cout<<"NO\n";
    else cout<<"YES\n";
}
int main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}