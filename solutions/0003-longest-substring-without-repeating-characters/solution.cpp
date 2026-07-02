class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        std::unordered_map<char,int> hashmap;
        int max=0;
        int left=0;
        for (int right=0;right<s.size();right++){
            int curr=s[right];
            if(hashmap.find(curr)!=hashmap.end()&&hashmap[curr] >= left){
                left=hashmap[curr]+1;
            }
            hashmap[curr]=right;
            max=std::max(max,right-left+1);
        }
    return max;

    }
};
