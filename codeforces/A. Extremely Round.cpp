#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
    int n;
    cin>>n;
    if(n<=10) cout<<n<<"\n";
    else{
        int count=10,temp=10;
        while(temp<n){
            temp*=10;
            if(temp<=n) count+=9;
            else{
                temp/=10;
                n/=temp;
                count+=n-1;
            }
        }
        cout<<count<<"\n";
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
 * Counting till n*10, then counting till n;
 * DONE!!
 */