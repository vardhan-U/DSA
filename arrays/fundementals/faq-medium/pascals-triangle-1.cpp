class Solution {
public:
    int pascalTriangleI(int r, int c) {
 int ans=1;
        int denom =1;
    for(int i=r-1;i>c-1;i--){
        ans = ans*i/denom;
        denom++;
    }
    return ans;}
};
