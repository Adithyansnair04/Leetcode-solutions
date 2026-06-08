class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        std::sort(nums.begin(), nums.end());
        std::vector<std::vector<int>> soln;
        for (int i=0;i<nums.size();i++){
            if (i > 0 && nums[i] == nums[i-1]) continue; 
            int right=nums.size()-1,left=i+1;
           while(left<right){
            int result=nums[i]+nums[right]+nums[left];
            if (result==0){
                soln.push_back({nums[i],nums[left],nums[right]});
                while (left < right && nums[left] == nums[left+1]) left++;
                while (left < right && nums[right] == nums[right-1]) right--;
                left++;
                right--;}
            else if(result<0)
                left++;
            else 
                right--;}
            
            

        }
return(soln);
    }
    
};
