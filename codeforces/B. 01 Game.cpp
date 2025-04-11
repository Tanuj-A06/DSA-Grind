#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
    string s;
    cin>>s;
    int one=0,zero=0,op=INT_MAX;
    for(int i=0;i<s.length();i++){
        if(s[i]=='0') zero++;
        else one++;
    }
    op=min(one,zero);
    if(op%2==0) cout<<"NET\n";
    else cout<<"DA\n";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}