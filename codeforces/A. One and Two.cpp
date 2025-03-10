#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
    int n,c=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==2) c++;
    }
    if(c%2==0){
        c/=2;
        int temp=0,cc=0;
        for(int i=0;i<n;i++){
            temp++;
            if(a[i]==2) cc++;
            if(cc==c) break;
        }
        cout<<temp<<"\n";
    }
    else cout<<"-1\n";
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
 * 1st checking if the solution is possible or not i.e even number of 2s.(8 - 10)
 * If count of 2 is even then checking for the least place after this situation is acheived.(13 - 20)
 */