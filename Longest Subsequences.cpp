class Solution {
  public:
    int helper(int n , vector<int> & a , int prev){
        if(n == 0) return 0 ; 
        
        //pick 
        int pick = 0 ; 
        if(prev == -1 || abs(a[n-1] - prev) == 1)
            pick = 1 + helper(n-1 , a  , a[n-1]) ; 
        
        //not pick
        int notPick =  helper(n - 1 , a , prev) ;
        
        return max(pick , notPick) ; 
    }
    int longestSubseq(int n, vector<int> &a) {
        return helper(n , a , -1) ;
    }
};
