class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum=0;
        if(k>nums.size())
            return 0;
        for(int i=0;i<k;i++)
            sum+=nums[i];
        double maxr=sum;
        for (int i=k;i<nums.size();i++){
            int right = i;
            int left=i-k;
            sum+=nums[right];
            sum-=nums[left];
            maxr=std::max(sum,maxr);
        }
    return maxr/k;

}

};
