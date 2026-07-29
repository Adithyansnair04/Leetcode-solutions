class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        std::sort(nums.begin(),nums.end());
        int left=0;
        int right=nums.size()-1;
        int count=0;
        while (right>left){
            int sum = nums[left]+nums[right];
            if(sum==k){
                right--;
                left++;
                count++;
            }
            else if(sum>k){
                right--;
            }
            else left++;
        }
    return count;

    }
};
