#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
    int x,k;
    cin>>x>>k;
    if(x%k!=0) cout<<"1\n"<<x<<"\n";
    else cout<<"2\n"<<x-1<<" "<<"1\n";
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
 * If x%k != 0 then directly jupt to x.
 * else jump to x-1 then jump by 1!!
 */