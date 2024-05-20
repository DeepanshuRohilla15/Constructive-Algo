class Solution
{
	public:
		long long int PowMod(long long int x,long long int n,long long int M)
		{
		    // Code here
		    long long int ans = 1;
		    while(n)
		    {
		        if(n&1)
		        {
		            ans = (ans * x)  % M;
		            n--;
		        }
		        x = (x*x)%M;
		        n/= 2;
		    }
		    return ans;
		}
		
};
