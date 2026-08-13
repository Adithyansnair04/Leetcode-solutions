class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>soln;
        std::stack<int>st;
        std::unordered_map<int,int>mp;
        st.push(nums2[0]);
        for(int i=1;i<nums2.size();i++){
            int curr = nums2[i];
            while (!st.empty() && curr>st.top()) {
                mp[st.top()]=curr; 
                st.pop();
            }
                
                  
                st.push(curr);   
             }
        while(!st.empty()){
            int num=st.top();
            st.pop();
            mp[num]=-1;
        }
        for(int i=0;i<nums1.size();i++)
            soln.push_back(mp[nums1[i]]);
    return soln;

    }
};
