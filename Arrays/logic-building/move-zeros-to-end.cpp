class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int* r = &nums[0];
        int* f = &nums[0] +1;
        int n =nums.size();
        while(f<=&nums[n-1]){
        if(*r==0&&*f!=0){
            *r=*f;
            *f=0;
            f++;
            r++;
        }
        else if(*r==0&&*f==0){
            f++;
        }
        
        else{
            r++;
            f++;
        }
       
    }}
};

//more optimal
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        if (n <= 1) return; // Guard clause against empty or 1-element arrays

        int writer = 0; // Tracks where the next non-zero should go

        // The 'reader' pointer scans through every single element
        for (int reader = 0; reader < n; reader++) {
            if (nums[reader] != 0) {
                // If the reader finds a non-zero, copy it to the writer position
                nums[writer] = nums[reader];
                writer++; // Move the writer forward
            }
        }

        // Fill the rest of the array with zeroes
        while (writer < n) {
            nums[writer] = 0;
            writer++;
        }
    }
};
