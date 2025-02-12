#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int n,sum1=0,sum2=0;
    cin>>n;
    int a[2*n];
    for(int i=0;i<2*n;i++){
        cin>>a[i];
    }
    sort(a,a+2*n);
    for(int i=0;i<2*n;i++){
        if(i<n) sum1+=a[i];
        else sum2+=a[i];
    }
    if(sum1!=sum2){
        for(int i=0;i<2*n;i++){
            cout<<a[i]<<" ";
        }
        cout<<"\n";
    }
    else cout<<"-1\n";
}

/**
 * DOCUMENTATION:
 * Found the sum from 0 to n and then from n to 2n
 * comparing the results and try to switch places of a single
 * digit to get the output.(Didnt work)
 * 
 * Now sorting the array and then compairing the sum as
 * its imposible to have equal sum if the array dosent contain
 * equal elements.
 * 
 * DONE!!!!
 */