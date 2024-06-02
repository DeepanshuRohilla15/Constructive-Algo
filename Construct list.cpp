class Solution {
  public:
    vector<int> constructList(int q, vector<vector<int>> &queries) {
        // code here
        vector<int> result = {0};  
    int cumulativeXOR = 0;  
    for (int i = 0; i < q; ++i) 
    {
        int type = queries[i][0];
        int value = queries[i][1];
        if (type == 0) 
        {
            result.push_back(value ^ cumulativeXOR); 
        }
        else if (type == 1) 
        {
            cumulativeXOR ^= value;
        }
    }
    for (int j = 0; j < result.size(); ++j) 
    {
        result[j] ^= cumulativeXOR;
    }
     sort(result.begin(), result.end());
        return result;
    }
};
