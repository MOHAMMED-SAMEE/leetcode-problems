class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int n=blocks.size();
        int count=0;
        int maxi=0;
        for(int i=0;i<n;i++){
            if(blocks[i]=='B'){
                count++;
            }
            if(i>=k && blocks[i-k]=='B' ){
                count--;
            }
            maxi=max(count,maxi);
        }
        return k-maxi;
    }
};