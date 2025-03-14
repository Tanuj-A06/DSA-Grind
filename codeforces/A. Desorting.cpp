#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
    int n;
    cin>>n;
    ll a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    ll op=INT_MAX;
    for(int i=0;i<n-1;i++){
        if(a[i]<=a[i+1]){
            ll temp=((a[i+1]-a[i])/2)+1;
            op=min(op,temp);
        }
        else op=0;
    }
    cout<<op<<"\n";
    // if(a[n-1]==a[n-2]) op=1;
    // else if(a[n-1]<a[n-2]) op=0;
    // else op=((a[n-1]-a[n-2])/2) +1;
    // cout<<op<<"\n";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}