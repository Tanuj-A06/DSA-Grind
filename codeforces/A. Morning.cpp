#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int a,b,c,d;
    a=n/1000;
    b=(n%1000)/100;
    c=((n%1000)%100)/10;
    d=n%10;
    if(a==0) a=10;
    if(b==0) b=10;
    if(c==0) c=10;
    if(d==0) d=10;
    int ans=0;
    ans+=(abs(a)+abs(b-a)+abs(c-b)+abs(d-c)+3);
    cout<<ans<<"\n";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}