class Solution {
public:
    int missingNumber(std::vector<int>& nums) {
        int n = nums.size();
        int expectedSum = n*(n + 1)/2;
        int Sum = accumulate(nums.begin(), nums.end(), 0);
        return expectedSum - Sum;
    }
};
