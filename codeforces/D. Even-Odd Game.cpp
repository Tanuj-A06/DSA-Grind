#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
    int n,buffer=0;
    ll alice=0,bob=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    for(int i=n-1;i>=0;i--){
        if(buffer==0){
            if(a[i]%2==0){
                alice+=a[i];
            }
            buffer=1;
        }
        else{
            if(a[i]%2!=0){
                bob+=a[i];
            }
            buffer=0;
        }
    }
    if(alice>bob) cout<<"Alice\n";
    else if(alice<bob) cout<<"Bob\n";
    else cout<<"Tie\n";
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
 * For the results to be optimal, we need to sort the array and the players must
 * choose in such a way that their winning chances are maximum.
 * Such is only possible if they start to pick from the largest available numbers.
 * If largest available no. is not increasing their score,then thus by picking it the
 * player reduces the total score of opponent too inturn increasing the chances of their winning.
 * 
 * Done!!
 */