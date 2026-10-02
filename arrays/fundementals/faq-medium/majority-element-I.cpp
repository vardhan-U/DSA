class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=1,cand =nums[0];
        int n = nums.size();
        for(int i=1;i<n;i++){
            if(cand == nums[i]){
                
                count++;
            }
            else if(cand!=nums[i]&&count!=0){
                count--;
            }
            else{
                cand=nums[i];
                count++;
            }
        }
        return cand;
    }
};