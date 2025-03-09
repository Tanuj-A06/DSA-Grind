#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
    int n,temp=1,op=1;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<n;i++){
        if(i!=n-1 && s[i]==s[i+1]){
            temp++;
            op=max(temp,op);
        }
        else temp=1;
    }
    op=max(op,temp);
    cout<<op+1<<"\n";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}

/**
 * DOCUMENATION:
 * Counting the number of simmillar input in the string.
 * This tell how may distinct numbers are present in the array i.e the cost +1.
 */