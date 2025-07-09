#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int ans=0;
    int a[5][5];
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(a[i][j]==1){
                ans+=abs(2-i);
                ans+=abs(2-j);
                break;
            }
        }
    }
    cout<<ans<<endl;
}