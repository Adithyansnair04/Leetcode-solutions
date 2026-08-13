class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size()!=t.size())
            return 0;
        std::unordered_map<char,int>mp;
        for(int i=0;i<s.size();i++){
            char ch =s[i];
            if(mp.contains(ch)) mp[ch]++;
            else mp[ch]=1;
        }
        for(int i=0;i<s.size();i++){
            char ch =t[i];
            if(mp.contains(ch)){ mp[ch]--;
                if (mp[ch]==0)
                    mp.erase(ch);}
            else return false;
        }
    if (mp.empty())return true;
return false;
        
        
    }
};
