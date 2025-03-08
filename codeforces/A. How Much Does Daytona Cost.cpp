#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
    int n,k;
    cin>>n>>k;
    int a[n];
    bool c=false;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==k) c=true;
    }
    if(c) cout<<"YES\n";
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
 * Just check if the number exists in the given array or not.
 */