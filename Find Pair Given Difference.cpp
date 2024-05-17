class Solution {
  public:
    int findPair(int n, int x, vector<int> &arr) {
        // code here
        sort(arr.begin(), arr.end());
        
        for(int i=0; i<n; i++){
            
            int temp = x + arr[i];
            arr[i] = 0;
            int s = 0, e = n-1;
            
            while(s<=e){
                int mid = s + (e-s)/2;
                if(arr[mid] == temp) return 1;
                else if(arr[mid] > temp) e = mid - 1;
                else s = mid + 1;
            }
            arr[i] = temp - x;
        }
        return -1;
    }
};
