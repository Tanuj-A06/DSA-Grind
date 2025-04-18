class Solution {
    public:
        int removeDuplicates(vector<int>& nums) {
            int count=nums.size();
            for(int i=1;i<nums.size();i++){
                if(nums[i]==nums[i-1]){
                    nums[i-1]=101;
                    count--;
                }
            }
            sort(nums.begin(),nums.end());
            return (nums ,count);
        }
    };