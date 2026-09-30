class Solution {
public:
    int largestElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        return nums.back();
    }
};