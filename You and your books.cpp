class Solution {
  public:
    /*You are requried to complete this method */
    long long max_Books(int arr[], int n, int k) {
        // Your code here
        long long sum=0;
        int i=0;
        while(i<n)
        {
            long long temp=0;
            if(arr[i]<=k)
            {
                while(i<n && arr[i]<=k)
                {
                    temp+=arr[i];
                    i++;
                }
                sum=max(sum,temp);    
            }
            i++;
            
        }
        return sum;
    }
};
