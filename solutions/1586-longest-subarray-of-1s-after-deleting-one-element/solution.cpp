class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int zero=0;
        int left=0;
        int right=0;
        int maxr=0;
        while(right<nums.size()){
            int count;
            if(nums[right]==1)
                right++;
            else if (nums[right]==0){
                zero++;
                right++;
                if(zero>1){
                    while (nums[left]!=0){
                        left++;
                    }
                    left++;
                    zero--;
                

                }}
        count =right-left-1;
        maxr=std::max(maxr,count);
        
        }
    return maxr;

    }
};
