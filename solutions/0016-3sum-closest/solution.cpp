class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int diff=INT_MAX;
        int sum=0;
        std::sort(nums.begin(), nums.end());
        for(int i=0;i<nums.size()-2;i++){
            int left=i+1;
            int right=nums.size()-1;
            while(right>left){
                if((nums[i]+nums[right]+nums[left])-target==0)
                    return nums[i]+nums[right]+nums[left];
                else if ((nums[i]+nums[right]+nums[left])<target){
                    if(diff>abs((nums[i]+nums[right]+nums[left])-target)){
                    diff=abs((nums[i]+nums[right]+nums[left])-target);
                    sum=(nums[i]+nums[right]+nums[left]);}
                    left++;
                }
                else{
                    if(diff>abs((nums[i]+nums[right]+nums[left])-target)){
                    diff=abs((nums[i]+nums[right]+nums[left])-target);
                    sum=(nums[i]+nums[right]+nums[left]);}
                    right--;
                }

            }
        
        }
    
    return sum; 
    }
};
