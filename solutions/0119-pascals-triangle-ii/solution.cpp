class Solution {
public:
    vector<int> getRow(int rowIndex) {
        std::vector<int>tri(rowIndex+1,0);
        tri[0]=1;
        for(int i=1;i<=rowIndex;i++){
            for(int j=i;j>0;j--){
                tri[j]+=tri[j-1];
            }
        
        }

return tri;
    }
};
