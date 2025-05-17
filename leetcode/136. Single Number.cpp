class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(i==nums.size()-1 || (nums[i]!=nums[i+1] && (i==0 || nums[i]!=nums[i-1]))){
                ans=nums[i];
                break;
            }
        }
        return ans;
    }
};