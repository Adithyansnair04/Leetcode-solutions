class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i=0,j=0;
        int n1= word1.size(),n2=word2.size();
        string soln;

        while (i<n1 && j<n2){
            soln.push_back(word1[i++]);
            soln.push_back(word2[j++]);
        }
        while  (i<n1){  soln.push_back(word1[i++]);
        }
        while  (j<n2){  soln.push_back(word2[j++]);
        }
    return soln;
    }
};
