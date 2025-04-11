#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
    ll n,k,x;
    cin>>n>>k>>x;
    ll min_sum,max_sum;
    min_sum=(k*(k+1))/2;
    max_sum=((n*(n+1))/2) - (((n-k)*(n-k+1))/2);
    if(x>=min_sum && x<=max_sum) cout<<"YES\n";
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
 * The desired sum must lie between the sum of n numbers from either right hand side or left hand side.
 * if the condition is not satisfied the test case is not possible.
 */