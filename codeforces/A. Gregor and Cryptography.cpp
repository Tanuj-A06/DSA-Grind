#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll p;
        cin>>p;
        cout<<(p-1)/2<<" "<<p-1<<"\n";
    }
}

/**
 * DOCUMENTATION:
 * the remainder for a pertcular number(x) repeats for any another number
 * which is less than the number itself twice. 
 * Once for itself (n) other for n*2;
 * 
 * COMPLETED!!
 */