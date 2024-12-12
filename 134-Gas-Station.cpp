class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int init_cost=0;
        int init_gas=0;
        int total=0;int res=0;
        for(int i=0;i<gas.size();i++){
            init_cost+=cost[i];
            init_gas+=gas[i];
        }
        if(init_cost>init_gas){
            return -1;
        }
        else{
            for(int i=0;i<gas.size();i++){
                total+=gas[i]-cost[i];
                if(total<0){
                    total=0;
                    res=i+1;
                }

            }
        }
        return res;

        
    }
};