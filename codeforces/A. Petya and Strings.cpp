#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1,s2;
    int ans=0;
    cin>>s1;
    cin>>s2;
    int a1[26]={0};
    int a2[26]={0};
    for(int i=0;i<s1.length();i++){
        s1[i]=tolower(s1[i]);
        s2[i]=tolower(s2[i]);
    }
    if (s1<s2) cout<<-1;
    else if (s1>s2) cout<<1;
    else cout<<0;
}