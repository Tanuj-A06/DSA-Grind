#include <bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    cin>>s;
    int ss[26]={0};
    for(int i=0;i<s.length();i++){
        ss[s[i]-'A']++;
    }
    string ans="";
    for(int i=0;i<ss['T'-'A'];i++){
        ans+='T';
    }
    for(int i=0;i<ss['F'-'A'];i++){
        ans+='F';
    }
    for(int i=0;i<ss['N'-'A'];i++){
        ans+='N';
    }
    for(int i=0;i<s.length();i++){
        if(s[i]!='N' && s[i]!='F' && s[i]!='T') ans+=s[i];
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