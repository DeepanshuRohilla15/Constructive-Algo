class Solution {
public:
    int findClosest(int n, int k, int arr[]) {
        int low = 0, high = n - 1;
        int closest = arr[0];
        
        while (low <= high) {
            int mid = low + (high - low) / 2;
            
            // Update the closest value if necessary
            if (abs(arr[mid] - k) < abs(closest - k) || 
                (abs(arr[mid] - k) == abs(closest - k) && arr[mid] > closest)) {
                closest = arr[mid];
            }
            
            if (arr[mid] < k) {
                low = mid + 1;
            } else if (arr[mid] > k) {
                high = mid - 1;
            } else {
                return arr[mid]; // arr[mid] is exactly equal to k
            }
        }
        
        return closest;
    }
};
