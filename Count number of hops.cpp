
class Solution
{
    public:
   int mod=1e9+7;
   long long solve(int n,vector<long long>&dp){
       if(n==0)
       return 1;
       if(n<0)
       return 0;
       if(dp[n]!=-1){
           return dp[n];
       }
       long long one=solve(n-1,dp);
       long long two=solve(n-2,dp);
       long long three=solve(n-3,dp);
       return dp[n]=(one+two+three)%mod;
   }
    long long countWays(int n)
    {
        vector<long long> dp(n+1,-1);
        return solve(n,dp);
        
    }
};
