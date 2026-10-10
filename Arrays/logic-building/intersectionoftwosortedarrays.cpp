class Solution {
public:
    vector<int> intersectionArray(vector<int>& nums1, vector<int>& nums2) {
        vector<int>nums;
        int n1 = nums1.size();
        int n2 = nums2.size();

        int i =0,j=0;
        while(i<n1&&j<n2){
            if(nums1[i]==nums2[j]){
                nums.push_back(nums1[i]);
                i++;
                j++;
            }
            else if(nums1[i]>nums2[j]){
                j++;
            }
            else{
                i++;
            }}
         return nums;
        
        }
   
    
};
