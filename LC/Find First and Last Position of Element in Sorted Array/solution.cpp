class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int low = 0;
        int high = n - 1;
        int mid = 0;
        int lower = -1, upper = -1;
        // lower bound
        while(low<=high){
            mid = low + (high - low) /2;
            if (nums[mid] == target){
                lower = mid;
                upper = mid;
                high = mid - 1;
            }else if (nums[mid] < target){
                low = mid + 1;
            }else{
                high = mid - 1;
            }
        }
        low = 0;
        high = n - 1;
        mid = 0;
        // Upper bound
        while(low<=high){
            mid = low + (high - low) /2;
            if (nums[mid] == target){
                upper = mid;
                low = mid + 1;
            }else if (nums[mid] < target){
                low = mid + 1;
            }else{
                high = mid - 1;
            }
        }
        
        return {lower, upper};
    }
};