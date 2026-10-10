class Solution {
public:
    vector<vector<int>> pascalTriangleIII(int n) {
        vector<vector<int>> ans;
        for(int k =1;k<=n;k++){
            
        vector<int> coeff(k, 1);
        
        long long current_val = 1;
        for (int i = 1; i < k; i++) {
            current_val = current_val * (k - i) / i;
            coeff[i] = current_val;
        }
        
        ans.push_back(coeff);
        }
        return ans;
    }
};