class Solution {
public:
    int tribonacci(int n) {
        std::vector<int>memo(n+1,-1);
        return helper(n,memo);
    }
private:
    int helper(int n,std::vector<int>&memo)
    {
        if(n<2)return n;
        else if(n==2)return 1;
        
        if(memo[n]!=-1)return memo[n];
        else return memo[n]=helper(n-1,memo)+helper(n-2,memo)+helper(n-3,memo);
    }
};
