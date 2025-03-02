#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
    int n,ec=0,oc=0;
    cin>>n;
    int temp=0;
    for(int i=0;i<n;i++){
        cin>>temp;
        if(temp%2==0) ec++;
        else oc++;
    }
    if(oc%2==0) cout<<"YES\n";
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
 * The sum of odd numbers i.e the parity can only come out to be equal if
 * the number of odd numbers is even.
 * Else the parity will always be odd.
 */