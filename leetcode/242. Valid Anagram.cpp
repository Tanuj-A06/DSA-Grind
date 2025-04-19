class Solution {
    public:
        bool isAnagram(string s, string t) {
            bool ans=true;
            if(s.length()!=t.length()) ans=false;
            else{
                int ss[26];
                int tt[26];
                for(int i=0;i<s.length();i++){
                    ss[s[i]-'a']++;
                }
                for(int i=0;i<t.length();i++){
                    tt[t[i]-'a']++;
                }
                for(int i=0;i<26;i++){
                    if(ss[i]!=tt[i]){
                        ans=false;
                        break;
                    }
                }
            }
            return ans;
        }
    };