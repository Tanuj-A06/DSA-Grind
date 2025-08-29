// #include<bits/stdc++.h>
// using namespace std;
// void solve(){
//     int n,k;
//     cin>>n>>k;
//     int a[n];
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     int ans=INT_MAX;
//     if(k==4){
//         int even=0;
//         for(int i=0;i<n;i++){
//             if(a[i]%2!=0){
//                 if(((a[i]+1)%4!=0)) ans=min(ans,2);
//                 else{
//                     ans=min(ans,1);
//                 }
//             }
//             else{
//                 even++;
//             }
//         }
//         if(even>=2) ans=0;
//     }
//     else{
//         for(int i=0;i<n;i++){
//             if(a[i]<k){
//                 ans=min(ans,k-a[i]);
//             }
//             else if(a[i]%k==0) ans=0;
//             else ans=min(ans,(k-(a[i]%k)));
//         }
//     }
//     cout<<ans<<"\n";
// }
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         solve();
//     }
// }

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,k;
    cin>>n>>k;
    int a[n];
    int ans=INT_MAX;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]%k==0) ans=0;
        ans=min(ans,(k-a[i]%k));
    }
    if(k==4){
        int count=0;
        bool flag=false;
        for(int i=0;i<n;i++){
            if(a[i]%2==0) count++;
            if(a[i]%4==0) ans=0;
            if(count>=2) flag=true;
        }
        if(flag) ans=min(ans,0);
        else{
            if(count<2){
                ans=min(ans,2-count);
            }
        }
    }
    cout<<ans<<"\n";
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}