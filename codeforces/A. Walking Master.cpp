#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
    ll x1,x2,y1,y2,op=0;
    cin>>x1>>y1>>x2>>y2;
    if(y2<y1){
        cout<<"-1\n";
    }
    else{
        op+=abs(y2-y1);
        x1+=op;
        if(x1<x2){
            cout<<"-1\n";
        }
        else{
            op+=abs(x2-x1);
            cout<<op<<"\n";
        }
    }
    
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
 * Check if 'y' is within rechable range.
 * After checking y check if x is in rechable range i.e x2>x1.
 */