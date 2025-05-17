class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int ans=0,buffer=INT_MIN;
        for(int i=1;i<nums.size();i++){
            if(i==nums.size()-1){
                if(nums[i]>nums[i-1]){
                    if(nums[i]>buffer){
                        ans=i;
                        buffer=nums[i];
                    }
                }
            }
            else{
                if(nums[i]>nums[i-1] && nums[i]>nums[i+1]){
                    if(nums[i]>buffer){
                        ans=i;
                        buffer=nums[i];
                    }
                }
            }
        }
        return ans;
    }
};