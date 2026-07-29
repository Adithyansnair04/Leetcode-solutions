class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum=0;
        for(int i=0;i<k;i++)
            sum+=nums[i];
        int maxl=sum;
        for (int i=k;i<nums.size();i++)
        {
            sum+=nums[i]-nums[i-k];
            maxl=std::max(maxl,sum);
        }

return static_cast<double>(maxl) / k;}

};
