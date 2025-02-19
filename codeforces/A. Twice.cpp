#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n,count=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        bool d=false;
        for(int j=1+i;j<n;j++){
            if(a[i]==a[j]){
                if(!d && a[i]!=0){
                    count++;
                    a[j]=0;
                    d=true;
                }
            }
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
 * initialized d=flase to avoid repetition since i and j must be chosen only once.
 * after checking for ai==aj made aj==0 so it cant be resued and twerked the conditions to avoid repetition in countings.
 */
