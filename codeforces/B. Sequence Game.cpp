#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
    int n,count=0;
    cin>>n;
    int b[n];
    for(int i=0;i<n;i++){
        cin>>b[i];
        if(i!=0 && b[i]<b[i-1]) count++;
    }
    cout<<n+count<<"\n";
    cout<<b[0]<<" ";
    for(int i=1;i<n;i++){
        if(b[i]<b[i-1]) cout<<"1 "<<b[i]<<" ";
        else cout<<b[i]<<" ";
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
 * Check if the number is lesser than the one before it and then insert '1' between
 * them.
 */