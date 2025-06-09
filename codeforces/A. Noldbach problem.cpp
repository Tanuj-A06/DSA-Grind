#include <bits/stdc++.h>
#define ll long long
using namespace std;
bool is_prime(int num){
    bool ans=true;
    for(int i=0;i<sqrt(num);i++){
        if(num%i==0) ans=false;
    }
    return ans;
}
void solve(int n,int k){
    int count=0;
    for(int i=k;i<=n;i++){
        if(i%2!=0 && i!=0){
            if(n%i==0) count++;
        }
        else continue;
    }
    if(count>=k){
        vector<int> a;
        a[0]=1;
        int j=1;
        for(int i=2;i<n;i++){
            if(is_prime(i)){
                a[j]=i;
                j++;
            }
        }

    }
    else cout<<"NO\n";
}
int main(){
    int n,k;
    cin>>n>>k;
    solve(n,k);
}
