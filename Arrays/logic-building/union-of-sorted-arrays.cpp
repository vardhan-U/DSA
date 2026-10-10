class Solution {
public:
    vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) {
        int i = 0;
        int j = 0;
        int n1 = nums1.size();
        int n2 = nums2.size();
        vector<int> nums;
        int k = 0;

        while (i<n1 && j<n2) {
            if (nums1[i]>nums2[j]) {
                if (k ==0||nums[k-1] != nums2[j]) {
                    nums.push_back(nums2[j]);
                    k++;
                }
                j++;
            }
            else if(nums1[i]< nums2[j]){
                if(k==0 || nums[k-1] != nums1[i]){
                    nums.push_back(nums1[i]);
                    k++;
                }
                i++;
            }
            else{
                if(k == 0 || nums[k-1] != nums1[i]){
                    nums.push_back(nums1[i]);
                    k++;
                }
                i++;
                j++;
            }
        }
        
        while(i < n1){

            if(k==0|| nums[k-1] != nums1[i]) {
                nums.push_back(nums1[i]);
                k++;
            }
            i++;
        }
        
        while(j<n2) {
            if(k==0|| nums[k-1] != nums2[j]) {
                nums.push_back(nums2[j]);
                k++;
            }
            j++;
        }

        return nums;
    }
};
