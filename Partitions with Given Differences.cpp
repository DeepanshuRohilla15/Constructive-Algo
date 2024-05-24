class Solution {
  public:
    int countPartitions(int n, int d, vector<int>& arr) {
        const int MOD = 1e9 + 7;
        int totalSum = accumulate(arr.begin(), arr.end(), 0);

        // Check if it's possible to partition the array with the given difference
        if ((totalSum - d) % 2 != 0 || totalSum < d) {
            return 0;
        }

        int target = (totalSum - d) / 2;

        // DP array to store the number of subsets with a particular sum
        vector<int> dp(target + 1, 0);
        dp[0] = 1; // There's one way to achieve sum 0: by taking no elements

        // Iterate over all elements in the array
        for (int num : arr) {
            // Traverse the dp array backwards to avoid recomputing using the same element
            for (int j = target; j >= num; --j) {
                dp[j] = (dp[j] + dp[j - num]) % MOD;
            }
        }

        return dp[target];
    }
};
