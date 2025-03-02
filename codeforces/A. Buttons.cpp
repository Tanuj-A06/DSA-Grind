#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
    ll a,b,c;
    cin>>a>>b>>c;
    if(a>b) cout<<"First\n";
    else if(b>a) cout<<"Second\n";
    else{
        if(c>1 && c%2==0) cout<<"Second\n";
        else cout<<"First\n";
    }
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
 * Code redablity and self explinatory.
 */