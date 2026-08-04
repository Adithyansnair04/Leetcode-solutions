class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        std::unordered_map<int,int>mp;
        int maxl=0;
        int left =0;
        for(int right=0;right<fruits.size();right++){
            mp[fruits[right]]++;
            while(mp.size()>2){
                mp[fruits[left]]--;
                  if (mp[fruits[left]] == 0)
                    mp.erase(fruits[left]);
                 left++;
        }
        maxl=max(maxl,right-left+1);
            }
    return maxl;
        }
    
        
            
        
    
};
