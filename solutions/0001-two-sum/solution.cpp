class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>un_map;
        for(int i=0;i<nums.size();i++){
            int complement = target - nums[i];
            if(un_map.count(complement)){
                return {un_map[complement],i};    
            }
            un_map[nums[i]] = i; 
        }
    return{};
    }
};
