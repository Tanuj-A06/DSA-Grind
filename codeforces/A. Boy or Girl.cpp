#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    long long a[26]={0};
    for(int i=0;i<s.length();i++){
        a[s[i]-'a']=1;
    }
    long long ans=0;
    for(int i=0;i<26;i++){
        // if(a[i]>0) ans++;
        ans+=a[i];
    }
    if(ans%2==0) cout<<"CHAT WITH HER!\n";
    else cout<<"IGNORE HIM!\n";
}