#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int n,op=INT_MAX;
    cin>>n;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        op=min(op,(abs(temp)));
    }
    cout<<op<<"\n";
}

/**
 * DOCUMENTATION:
 * Find the min distance from zero for both -ve as well as +ve numbers.
 */