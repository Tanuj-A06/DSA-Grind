#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
    int n,q;
    cin>>n>>q;
    ll a[n];
    ll sum=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    ll presum[n+1];
    for(int i=1;i<=n;i++){
        presum[i]=presum[i-1]+a[i-1];
    }
    while(q--){
        int l,r,k;
        cin>>l>>r>>k;
        ll tsum=sum + presum[l-1] - presum[r] + k*(r-l+1);
        if(tsum%2==0) cout<<"NO\n";
        else cout<<"YES\n";
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
 * DOCUMENATION:
 * Tried brute force solution TLE on case 6 and 7 refrence(CF submission no:310280205)
 * 
 * Find sum of the array, find sum till i'th term in presum.
 * Find total sum in each query by the following method:
 *      Total_sum=sum - sum_to_remove + sum_to_add
 * Where,
 * 
 *      sum_to_remove = presum[r] - presum[l-1]
 *      sum_to_add = k*(r-l+1)
 */