class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int max=0;
        int dig=0;
        for(int i=0;i<gain.size();i++){
            int dig=dig+gain[i];
            if(max<dig)
                max=dig;
            }
        return max;
    }
};
