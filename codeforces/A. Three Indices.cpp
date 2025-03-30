#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
    int n;
    bool z=true;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=1;i<n-1;i++){
        if(a[i]>a[i-1] && a[i]>a[i+1]){
            cout<<"YES\n"<<i<<" "<<i+1<<" "<<i+2<<"\n";
            z=false;
            break;
        }
    }
    if(z) cout<<"NO\n";
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
 * Just check for a[i]>a[i-1] && a[i]>a[i+1]
 */