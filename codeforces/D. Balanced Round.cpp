#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
    int n,k;
    cin>>n>>k;
    int a[n];
    bool z=false;
    if(n>1) z=true;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    int count=INT_MIN,temp=1;
    for(int i=0;i<n;i++){
        if(i!=n-1 && a[i+1]-a[i]<=k){
            temp++;
            count=max(count,temp);
        }
        else temp=1;
    }
    count=max(count,temp);
    if(z) cout<<n-count<<endl;
    else cout<<0<<endl;
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
 * Take the input and sort to get the optimal solution.
 * line 15-21 computing the max length of a balenced array i.e (a[i+1]-a[i]<=k) store that max in count
 * if after getting a max next one is not balanced then reset counting variable(temp) without affecting
 * the stored max.
 * 
 * Line 22:
 * if the 'if' statements in for loop not satisfied at all (edge case when n=2) then for precautionary
 * basis to avoid integer overflow.
 */