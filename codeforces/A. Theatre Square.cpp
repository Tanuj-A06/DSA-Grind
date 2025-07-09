#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll n,m,a,ans;
    cin>>n>>m>>a;
    ans=ceil((double)n/a)*ceil((double)m/a);
    cout<<ans<<endl;
    return 0;
}