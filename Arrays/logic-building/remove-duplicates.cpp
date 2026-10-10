class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) {
            return 0;
        }
        int r = 0; 

        for (int f=1;f<nums.size();f++){
            if(nums[f]!=nums[r]){
                r++;
                nums[r] = nums[f];
            }
        }
        return r + 1;
    }

};