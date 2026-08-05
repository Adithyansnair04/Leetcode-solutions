class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        std::unordered_map<char,int>mp,window;
        int left=0;
        int right=0;
        if(s1.size()>s2.size())return false;
        for(right=0;right<s1.size();right++){
            window[s2[right]]++;
            mp[s1[right]]++;}
        if(mp==window)
            return true;
        while(right<s2.size()){
            window[s2[left]]--;
            if(window[s2[left]]==0)
             window.erase(s2[left]);
            left++;
            window[s2[right]]++;
            right++;
            if(mp==window)
            return true;}
        
        
return false;
        
    }
};
