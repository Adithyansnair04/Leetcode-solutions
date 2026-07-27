class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        int s1=str1.length();
        int s2=str2.length();
        if(str1+str2!=str2+str1)return "";
        std::string out;
        out.reserve(std::min(s1,s2));
        for(int i=0;i<std::min(s1,s2);i++){
            if(str1[i]==str2[i]){
                out+=str1[i];
            }
            else return "";


        }
        for(int i=out.length();i>0;i--){
            if (s1%i!=0||s2%i!=0)continue;
            return out.substr(0, i);
        }

    return "";
    }
};
