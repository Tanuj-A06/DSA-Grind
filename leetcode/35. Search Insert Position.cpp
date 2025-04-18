class Solution {
    public:
        int searchInsert(vector<int>& nums, int target) {
            int ans=0;
            if(nums[nums.size()-1]<target) ans=nums.size();
            else{
                for(int i=0;i<nums.size()-1;i++){
                    if(nums[i]<target && nums[i+1]>=target) ans=i+1;
                }
            }
            return ans;
        }
    };