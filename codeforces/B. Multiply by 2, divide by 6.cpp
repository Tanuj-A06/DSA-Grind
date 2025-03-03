#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
    ll n,count=0;
    cin>>n;
    while(n>1){
        if(n%6==0){
            n/=6;
            count++;
        }
        else if(n%6!=0 && n%3==0){
            n*=2;
            count++;
        }
        else{
            cout<<"-1\n";
            return;
        }
    }
    cout<<count<<"\n";
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
 * n*2 operation is only fruitfull if the number is divisible by 3.
 * Else the remainder can never by 1
 */