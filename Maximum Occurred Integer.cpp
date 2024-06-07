class Solution {
  public:
    // l and r are input array
    // maxx : maximum in r[]
    // n: size of array
    // arr[] : declared globally with size equal to maximum in l[] and r[]
    // Function to find the maximum occurred integer in all ranges.
    int maxOccured(int n, int l[], int r[], int maxx) {

        // Your code here
        vector<string> s(maxx+1);
        for(int i=0 ; i<n ; i++)
        {
            s[l[i]] = "0" + s[l[i]];
            s[r[i]] += "1";
        }
        pair<int,int> result {0,0};
        int open=0;
        
        for(int i=0 ; i<maxx+1 ; i++)
        {
            int size = s[i].size();
            if(size)
            {
                if (s[i][size-1] == '0')
                {
                    open += size;
                    if(result.second < open) result = {i,open};
                }
                else if (s[i][0] == '1')
                {
                    open -= size;
                }
                else
                {
                    int j = 0;
                    for( j=0 ; j<size ; j++) if (s[i][j] == '1') break;
                    open += j;

                    if(result.second < open) result = {i,open};
                    open -= (size-j);
                }
            }
        }

        return result.first;
    }
};
