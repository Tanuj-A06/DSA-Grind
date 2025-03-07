#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
    int n,count=0;
    cin>>n;
    ll a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(i!=n-1 && (a[i]%2 == a[i+1]%2)) count++;
    }
    cout<<count<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}

/**
 * DOCUMENTATION:
 * Check the parity of adjacent elements on an array and count if parity is equal, print the final count.
 */