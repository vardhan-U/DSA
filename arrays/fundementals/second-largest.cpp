class Solution { 
public: 
    int secondLargestElement(std::vector<int>& nums) {
    int n = nums.size();    
    if(n<2){
        return -1; 
    }
    int first = INT_MIN;
    int second = INT_MIN;
    for(int i= 0;i< n;i++){
            if(nums[i] > first){
                second = first;
                first = nums[i];
            }
          
            else if(nums[i] > second && nums[i] < first){
                second = nums[i];
            }
        }
        return(second==INT_MIN)?-1:second;
    } 
};
