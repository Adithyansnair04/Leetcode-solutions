class Solution {
public:
    int fib(int n) {
        std::vector<int>memo(n+1,-1);
        return helper(n,memo);
    }
    private:
    int helper(int n, std::vector<int>& memo){
        if(n<2)
            return n;
        else if(memo[n]!=-1)return memo[n];
        else return memo[n]=helper(n-1,memo)+helper(n-2,memo);
    }
};
