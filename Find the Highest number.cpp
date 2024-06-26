class Solution {
public:
    int findPeakElement(vector<int>& a) 
    {
        // Code here.
        int l=0, r=a.size()-1;
        int ans=0;
        
        while(l<=r){
            int mid = (l+r)/2;
            
            ans = max(ans, a[mid]);
            
            if(a[mid]>a[r]){
                r=mid-1;
            } else{
                l=mid+1;
            }
        }
        
        return ans;
    }
};
