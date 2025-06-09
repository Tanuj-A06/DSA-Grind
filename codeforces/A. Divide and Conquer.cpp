#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
    int n,odd=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]%2!=0) odd+=a[i];
    }
    int ans=INT_MAX;
    if(!(odd&1)) cout<<"0\n";
    else{
        for(int i=0;i<n;i++){
            if(a[i]%2==0){
                int count=0;
                while(a[i]%2==0){
                    a[i]/=2;
                    count++;
                }
                ans=min(ans,count);
            }
            else{
                int count=0;
                while(a[i]%2!=0){
                    a[i]/=2;
                    count++;
                }
                ans=min(ans,count);
            }
        }
        cout<<ans<<"\n";
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}