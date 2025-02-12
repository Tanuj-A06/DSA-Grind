#include <bits/stdc++.h>
#define ll long long
using namespace std;
bool is_prime(ll x){
    int c1=0;
    bool p=true;
    for(int i=3;i<=sqrt(x);i+=2){
        if(x%i==0) {
            c1=1;
            break;
        }
    }
    if(c1==1) p=false;
    return p;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        ll a,b,rem=0;
        cin>>a>>b;
        rem=(a+b)*(a-b);
        if((a-b)==1 && is_prime(a+b)) cout<<"YES\n";
        else cout<<"NO\n";
    }
}

/**
 * DOCUMENTATION:
 * The work in progress.
 * Checking for (a+b) and (a-b) insted of
 * a^2-b^2 to reduce time and space;
 * used i<x/2 to check if prime, time limit exceeding
 * checking with i<=sqrt(x) to reduce time-complexicity.
 *      TLE!!!
 * Checking for only odd values of i as even values not possible since if
 * a-b==1 this implies a+b=2b+1 thus its always odd.
 * 
 * COMPLETED
 */