#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,pc=0;
    cin>>n;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        for(int j=0;j<s.length();j++){
            if(s[j]=='+') pc++;
            else if(s[j]=='-') pc--;
        }
    }
    cout<<(pc/2)<<endl;
}