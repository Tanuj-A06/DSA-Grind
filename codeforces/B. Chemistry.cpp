#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    int a[26]={0};
    for(int i=0;i<n;i++){
        a[s[i]-'a']++;
    }
    int count=0;
    for(int i=0;i<26;i++){
        count+=a[i]%2;
    }
    if(count<=k+1) cout<<"YES\n";
    else cout<<"NO\n";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}