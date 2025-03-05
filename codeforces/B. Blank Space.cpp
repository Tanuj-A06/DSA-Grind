#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
    int n,space=INT_MIN,temp=1;
    bool z=false;
    cin>>n;
    ll a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==0) z=true;
    }
    for(int i=0;i<n;i++){
        if(a[i]==0){
            if(a[i+1]==0) temp++;
            else temp=1;
        }
        space=max(space,temp);
    }
    if(z) cout<<space<<"\n";
    else cout<<"0\n";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}