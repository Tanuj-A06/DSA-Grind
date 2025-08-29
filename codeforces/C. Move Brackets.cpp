#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int count=0;
    int ans=INT_MAX;
    for(int i=0;i<n;i++){
        if(s[i]=='(') count++;
        else count--;
        ans=min(ans,count);
    }
    cout<<-ans<<"\n";
    // stack<char> st;
    // for(int i=0;i<n;i++){
    //     if(st.empty()) st.push(s[i]);
    //     else if(s[i]=='('){
    //         if(st.top()=='(') st.push('(');
    //         else st.pop();
    //     }
    //     else{
    //         if(st.top()==')') st.push(')');
    //         else st.pop();
    //     }
    // }
    // cout<<st.size()<<"\n";
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}