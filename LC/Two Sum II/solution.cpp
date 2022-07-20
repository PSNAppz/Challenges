#include <bits/stdc++.h> 
using namespace std; 

class Solution {
public:
    int binarySearch(vector<int> &n, int y, int current) {
        int low=0;
        int high = n.size() - 1;
        int mid=0;
        
        while(low <= high){
            mid = low + (high - low)/2;
            if(n[mid] == y && mid != current){
                return mid;
            }else if(n[mid] > y){
                high = mid - 1;
            }else{
                low = mid + 1;
            }
        }
        return -1;
    }
    
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        int result = -1;
        for(int i=0; i<n; i++){
            int y = target - nums[i];
            result = binarySearch(nums, y, i);
            if(result != -1){
                return {i + 1, result + 1};
            }
        }
        return {-1, -1};
    }
};