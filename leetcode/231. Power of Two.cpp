class Solution {
    public:
        bool isPowerOfTwo(int n) {
            bool ans;
            if(n<=0) ans=false;
            else if(n==1 || n%2==0){
                while(n%2==0){
                    n/=2;
                }
                if(n==1) ans=true;
                else ans=false;
            }
            return ans;
        }
    };