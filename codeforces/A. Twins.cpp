#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,total_sum=0;cin>>n;
    int a[n];
    int sum[n]={0};
    for(int i=0;i<n;++i){
        cin>>a[i];
        total_sum+=a[i];
    }
    sort(a,a+n,greater<>());
    sum[0]=a[0];
    for(int i=1;i<n;i++){
        sum[i]=a[i]+sum[i-1];
    }
    int j=0;
    for(int i=0;i<n;i++){
        if(sum[i]>total_sum-sum[i]) break;
        else j++;
    }
    cout<<j+1;
}
int main(){
    solve();
}