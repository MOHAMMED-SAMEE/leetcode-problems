class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max;
        int res=0;
        int buyprice=prices[0];
        int n=prices.size();
        int profit=0;
        for(int i=1;i<n;i++){
            
            if(prices[i]>prices[i-1]){
                
                res=res+prices[i]-prices[i-1];

            }
        }
        return res;
    }
};