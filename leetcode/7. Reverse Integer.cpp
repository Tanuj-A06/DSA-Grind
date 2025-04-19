class Solution {
    public:
        int reverse(int x) {
            long long reversed=0;
            //long long y=abs(x);
            while(x!=0){
                reversed*=10;
                reversed+=x%10;
                x/=10;
            }
            // if(x<0) return (-1*reversed);
            if(reversed <INT_MIN || reversed > INT_MAX) return 0;
            return reversed;
            // if(x<0){
            //     long long reversed=0;
            //     int y=(-1)*x;
            //     while(y>0){
            //         reversed*=10;
            //         reversed=y%10;
            //         y/=10;
            //     }
            //     reversed*=-1;
            //     return reversed;
            // }
            // else {
            //     long long reversed=0;
            //     int y=x;
            //     while(y>0){
            //         reversed*=10;
            //         reversed+=y%10;
            //         y/=10;
            //     }
            //     return reversed;
            // }
        }
    };