#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
    int n;
    cin>>n;
    ll a[n];
    int min=INT_MAX;
    ll sum=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]<min) min=a[i];
    }
    for(int i=0;i<n;i++){
        sum+=(a[i]-min);
    }
    cout<<sum<<"\n";
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
 * Formulated the logic checking if solution accepted in 1st try.
 * DONE!!!!!!
 * 
 * COMPLETED.
 */