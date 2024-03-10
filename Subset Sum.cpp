void solve(int ind, vector<int> &num, vector<int> &ans, int sum)
{
	// base case
	if(ind == num.size())
	{
		ans.push_back(sum);
		return;
	}
	solve(ind + 1, num, ans, sum + num[ind]);
	solve(ind + 1, num, ans, sum);
}

vector<int> subsetSum(vector<int> &num){
	// Write your code here.
	vector<int> ans;
	int sum = 0;
	solve(0, num, ans, sum);
	sort(ans.begin(), ans.end());
	return ans;	
}
