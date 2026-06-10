class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int price=INT_MAX;
        int profit=0;
        for(int i =0; i<prices.size();i++){
            if(price>prices[i]){
                price=prices[i];
            }
            else if(prices[i]-price>profit){
                profit=prices[i]-price;
            }

        }
        return profit;

    }
};
