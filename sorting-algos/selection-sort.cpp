class Solution {
public:
    vector<int> selectionSort(vector<int>& nums) {
        int n=nums.size();
        for(int i =0;i<n-1;i++){
            int smallest_ind= i+1;
            for(int j =i+1;j<n;j++){
                
                if(nums[smallest_ind]>nums[j]){
                    smallest_ind = j;
                }

                 }
            if(nums[i]>nums[smallest_ind]){
                int temp = nums[i];
                nums[i]=nums[smallest_ind]; 
                nums[smallest_ind]=temp;
            }
            }
            return nums;
        } 
};