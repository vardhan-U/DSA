class Solution {
public:
    vector<int> leaders(vector<int>& nums) {
        int n = nums.size();
        vector<int> list;
        list.push_back(nums[n-1]);
        if(n==1){
            return list;}
        int greatest=nums[n-1];
        for(int i = n-2;i>=0;i--){
            if(nums[i]>greatest){
                list.push_back(nums[i]);
                greatest = nums[i];
            }
}
reverse(list.begin(),list.end());
    return list;
        }
    
};
