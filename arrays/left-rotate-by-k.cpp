class Solution {
public:
    void rotateArray(vector<int>& nums, int k) {
        k=k%(nums.size());
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k,nums.end());
        reverse(nums.begin(),nums.end());
        }
    
};