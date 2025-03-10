#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
    int n;
    cin>>n;
    ll a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==1) a[i]++;
    }
    for(int i=0;i<n;i++){
        if(a[i+1]%a[i]==0) a[i+1]++;
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<"\n";
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
 * While taking input check if the input is '1' if true increment by 1 immediatly.
 * check in array length 'n' if a[i+1]%a[i]==0 if true increment a[i+1] by 1.
 */