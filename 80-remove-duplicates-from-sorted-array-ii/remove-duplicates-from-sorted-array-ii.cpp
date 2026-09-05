class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int left=0;
        int right=2;
        while(right<nums.size()){
            if(nums[left]==nums[right]){
                nums.erase(nums.begin() + right);
            }
            else {
                right++;
                left++;
            }
        
        }
    return nums.size();
    }
};
