class Solution {
public:
    vector<int> pascalTriangleII(int r) {
        vector<int>coeff;
        for(int j =1;j<=r;j++){
             int ans=1;
             int denom =1;
        for(int i=r-1;i>j-1;i--){
            ans = ans*i/denom;
            denom++;
    }
            coeff.push_back(ans);
    }
    return coeff;    
    }
};

//optimal
class Solution {
public:
    vector<int> pascalTriangleII(int r) {

        vector<int> coeff(r, 1);
        
        long long current_val = 1;
        for (int i = 1; i < r; i++) {
            current_val = current_val * (r - i) / i;
            coeff[i] = current_val;
        }
        
        return coeff;
    }
};
