class Solution {
    public:
        int mySqrt(int x) {
            long long i=1;
            while(i*i<=x){
                i++;
            }
            return i-1;
            // long long ans;
            // if(x==0 || x==1) ans=x;
            // else{
            //     for(long long i=1;i<=x/2;i++){
            //         if(i*i==x || (i*i<=x && (i+1)*(i+1)>x)){
            //             ans=i;
            //             break;
            //         }
            //     }
            // }
            // // for(long long i=0;i<=x/2;i++){
            // //     if(x==0 || x==1) ans=x;
            // //     else if(i*i==x || (i*i<x && (i+1)*(i+1)>x)){
            // //         ans=i;
            // //         break;
            // //     }
            // // }
            // return ans;
        }
    };