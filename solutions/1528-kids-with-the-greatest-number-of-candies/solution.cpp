class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int num=candies.size();
        std::vector<bool>candy(num);
        int max = 0;
        for(int i=0;i<num;i++){
            max=std::max(max,candies[i]);
        }
        for(int i=0;i<num;i++){
            if(candies[i]+extraCandies>=max){
                candy[i]=true;
            }
            else{
                candy[i]=false;
            }
        }
    return candy;
    }
};
