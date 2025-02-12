#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int n,a,b,sum=0;
    cin>>n;
    cin>>a;
    cin>>b;
    sum+=a+b;
    if(sum==n) cout<<"YES\n1 1";
    else{
        ll x=-1,y;
        for(y=0;y<n;y++){
            if((n-(y*b))%a==0 && n-(y*b)>=0){
                x=(n-(y*b))/a;
                break;
            }
        }
        if(x==-1) cout<<"NO\n";
        else cout<<"YES\n"<<x<<" "<<y;
    }
}


/**
 * DOCUMENTATION:
 * Code optimal for possible multiples of cost of 1 product.
 * 
 * INPROGRESS.
 * Thought1:
 * fixing x and permuting over y(Implementation in progress).
 * setting x=-1 and then incrementing the value of y till n
 * if n - yth multiple of b is divisible by a 
 * then perfect combo formed.
 * else combination not possible.
 * 
 * Sample test cases passing checking for final result.
 * Error in n%a and b%n case altered the conditions.
 * DONE!!!!
 */