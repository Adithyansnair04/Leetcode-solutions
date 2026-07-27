class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        std::vector<vector<int>>answer(2);
        std::unordered_set<int>mp1;
        std::unordered_set<int>mp2;
        for(int i=0;i<std::max(nums1.size(),nums2.size());i++){
            if(i<nums1.size()){
                mp1.insert(nums1[i]);
            }
            if(i<nums2.size()){
                mp2.insert(nums2[i]);
            }
        }

        std::vector<int> set1(mp1.begin(), mp1.end());
        std::vector<int> set2(mp2.begin(), mp2.end());

        for(int i=0;i<set1.size();i++){
            if(!mp2.contains(set1[i])){
                answer[0].push_back(set1[i]);
            }
        }
        for(int i=0;i<set2.size();i++){
            if(!mp1.contains(set2[i])){
                answer[1].push_back(set2[i]);
            }
        }
    return answer;
}
};
