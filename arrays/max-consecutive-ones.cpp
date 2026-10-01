class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int biggest =0;
        int current = 0;
        for(int i =0;i<n;i++){
            if(nums[i]==1){
                current++;
            }
            else{
                if(biggest<current){
                    biggest = current;
                    }
                current = 0;
        }
    }
        if(biggest<current){
            return current;
                    }
    return biggest;
    }
};