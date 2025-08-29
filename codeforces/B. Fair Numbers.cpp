#include <bits/stdc++.h>
using namespace std;

bool isfair(long long x){
    long long tmp=x;
    while(tmp>0){
        if(tmp%10!=0 && (x%(tmp%10)!=0)) return false;
        tmp/=10;
    }
    return true;
}

void solve(){
    long long n,x;
    cin>>n;
    while(!isfair(n)){
        n++;
    }
    cout<<n<<"\n";
    // int arr[10]={0};
    // while(x>0){
    //     arr[x%10]++;
    //     x/=10;
    // }
    // bool flag=true;
    // while(flag){
    //     bool tmp=false;
    //     for(int i=0;i<10;i++){
    //         if(arr[i]>0 && x%arr[i]!=0){
    //             tmp=true;
    //         }
    //     }
    //     if(!tmp) x++;
    //     else flag=false;
    // }
    // cout<<x<<"\n";
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}