#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
    int n,count=0;
    string s;
    cin>>n;
    cin>>s;
    for(int i=0;i<n;i++){
        if(s[i]!=s[n-1-i]) count+=2;
        else break;
    }
    count=n-count;
    count=max(0,count);
    cout<<count<<"\n";
}
int main(){
    int t;
    cin>>t;
    while (t--){
        solve();
    }
    
}

/**
 * DOCUMENTATION:
 * Check in a loop if the ends of the string are diffrent if yes then the string can be reduced further else
 * break.
 */