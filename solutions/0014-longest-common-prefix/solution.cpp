class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string lcp=strs[0];
        for(int i=1;i<strs.size();i++){
            while (strs[i].find(lcp)!=0)
                lcp=lcp.substr(0,lcp.size()-1);
                if(lcp.empty())return"";
        }

    return lcp;
    }
};
