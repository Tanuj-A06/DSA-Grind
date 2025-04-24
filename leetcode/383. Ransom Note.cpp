class Solution {
    public:
        bool canConstruct(string ransomNote, string magazine) {
            bool ans;
            if(ransomNote.length()>magazine.length()) ans=false;
            else{
                ans=true;
                int rn[26];
                int mg[26];
                for(int i=0;i<ransomNote.length();i++){
                    rn[ransomNote[i]-'a']++;
                }
                for(int i=0;i<magazine.length();i++){
                    mg[magazine[i]-'a']++;
                }
                for(int i=0;i<26;i++){
                    if(rn[i]>mg[i]){
                        ans=false;
                        break;
                    }
                }
            }
            return ans;
        }
    };