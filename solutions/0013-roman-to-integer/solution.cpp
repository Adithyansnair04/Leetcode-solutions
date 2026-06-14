class Solution {
public:
    int romanToInt(string s) {
        std::unordered_map<char,int>table ={
            {'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}
        };
    int total=table[s[s.size()-1]];
        for(int i=s.size()-1;i>0;i--){
            if(table[s[i-1]]>=table[s[i]]){
                total+=table[s[i-1]];
            }
            else{
                total-=table[s[i-1]];
            }
        }
    return total;
    }
};
