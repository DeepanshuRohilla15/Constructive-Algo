class Solution {
public:

    int solve(int level, int currXor, vector<int>& nums)
    {
        if(level == nums.size())
        {
            return currXor;
        }

        int include = solve(level+1, currXor^nums[level], nums);
        int exclude = solve(level+1, currXor, nums);

        return include + exclude;
    }

    int subsetXORSum(vector<int>& nums) {
        return solve(0, 0, nums);
    }
};
