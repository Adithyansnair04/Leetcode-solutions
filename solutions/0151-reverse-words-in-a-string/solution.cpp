class Solution {
public:
    string reverseWords(string s) {
        int i = 0; // write pointer
int n = s.size();

for (int j = 0; j < n; ++j) {
    if (s[j] != ' ') {
        
        if (i != 0) 
            s[i++] = ' ';
        

        while (j < n && s[j] != ' ') 
            s[i++] = s[j++];
        
    }
}

s.resize(i);
std::reverse(s.begin(),s.end());
int j=0;
for(int i=0;i<=s.size();i++){
    if(s[i]==' '||i == s.size()){
        std::reverse(s.begin() + j,s.begin()+i);
        j=i+1;

    }
}

return s;
    }
};
