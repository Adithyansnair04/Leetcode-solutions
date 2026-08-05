class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        std::unordered_set<int>st;
        int left=0;
        int maxr=0;
        for(int right=0;right<s.size();right++){
            if(!st.contains(s[right]))
                st.insert(s[right]);
            else 
            {
                while(st.contains(s[right])){
                    st.erase(s[left]);
                    left++;
                    }st.insert(s[right]);
            }
            maxr=std::max(maxr,right-left+1);
        }
    return maxr;
    }
};
