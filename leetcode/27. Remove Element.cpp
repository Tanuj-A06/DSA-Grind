class Solution {
    public:
        int removeElement(vector<int>& nums, int val) {
            int count=nums.size();
            for(int i=0;i<nums.size();i++){
                if(nums[i]==val){
                    count--;
                    nums[i]=55;
                }
            }
            sort(nums.begin(),nums.end());
            return (nums,count);
        }
    };