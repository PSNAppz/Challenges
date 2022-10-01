// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int binarySearch(int n){
        int low = 1;
        int high = n;
        int mid = 0;
        int first_bad = -1;
        while(low <=high){
            mid = low + (high - low) / 2;
            if (isBadVersion(mid)){
                first_bad = mid;
                high = mid - 1;
            }else
                low = mid + 1;
            }
        
        return first_bad;
    }
    
    int firstBadVersion(int n) {
        return binarySearch(n);
    }
};