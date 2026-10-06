class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> numsp;
        vector<int> numsn;

        for(int i=0;i<n;i++){
            if(nums[i]>0){
                numsp.push_back(nums[i]);
            }
            else{
                numsn.push_back(nums[i]);
            }
        }

    int i=0,j=0;
    while(i+j<n){
        nums[i+j]=numsp[i];
        i++;
        nums[i+j]=numsn[j];
        j++;

    }

return nums;
    }
};



//optimized
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n); 
        int posIdx = 0;
        int negIdx = 1; 
        
        for (int i = 0; i < n; i++) {
            if (nums[i] > 0) {
                result[posIdx] = nums[i];
                posIdx += 2; // Move to the next even slot
            } else {
                result[negIdx] = nums[i];
                negIdx += 2; 
            }
        }
        
        return result;
    }
};
