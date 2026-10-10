class Solution {
public:
    int linearSearch(vector<int>& nums, int target) {
        
        int n = nums.size();
        for(int j=0;j<n;j++){
            if(nums[j]==target){
                return j;
            }

        }
        return -1;
    }
};