class Solution {
    public:
        int firstUniqChar(string s) {
            int ans=-1;
            int ss[26];
            for(int i=0;i<s.length();i++){
                ss[s[i]-'a']++;
            }
            for(int i=0;i<s.length();i++){
                if(ss[s[i]-'a']==1){
                    ans=i;
                    break;
                }
            }
            return ans;
        }
    };