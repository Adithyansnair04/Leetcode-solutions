class Solution {
public:
    string minWindow(string s, string t) {
        if (t.empty() || s.size() < t.size()) return "";
        std::unordered_map<char,int>mpt;
        for(int i=0;i<t.size();i++)
            mpt[t[i]]++;
        std::unordered_map<char,int>mps;
        int need=mpt.size();
        int formed =0;
        int l=0;
        int length=INT_MAX;
        int strt=0;
        for(int r=0;r<s.size();r++){
            mps[s[r]]++;
            if(mpt.count(s[r]) && mps[s[r]]==mpt[s[r]]){
                               
                formed++;
            }
            while(need==formed){
                if(length>r-l+1){
                    length=r-l+1;
                    strt=l;
                }
                mps[s[l]]--;
                if(mpt.count(s[l]) && mps[s[l]]<mpt[s[l]])
                    formed--;
            l++;
            }

        }
        return (length == INT_MAX) ? "" : s.substr(strt, length);
    }
};
