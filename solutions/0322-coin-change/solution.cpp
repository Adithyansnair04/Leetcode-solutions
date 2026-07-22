class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int n= coins.size();
        std::vector<int>dp(amount+1,amount+1);
        dp[0]=0;
        for(int i=0;i<n;i++){
            int coin=coins[i];
             for(int j=coin;j<=amount;j++){
                dp[j]=min(dp[j],1+dp[j-coin]);
             }
        }
    if (dp[amount]>amount) return -1;
    return dp[amount];

        }

    
};
