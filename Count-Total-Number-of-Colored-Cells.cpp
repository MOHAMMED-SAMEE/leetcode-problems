class Solution {
public:
    long long coloredCells(int n) {
        long long m=0;
        if(n==1) return 1;
        return 2LL*n*(n-1)+1;
    }
};