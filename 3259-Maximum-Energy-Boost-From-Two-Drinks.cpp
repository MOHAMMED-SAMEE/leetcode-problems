class Solution {
public:
    long long maxEnergyBoost(vector<int>& energyDrinkA, vector<int>& energyDrinkB) {
        long dpA=0;
        long dpB=0;
        for(int i=0;i<energyDrinkA.size();i++){
            const long newdpA=max(dpB,dpA+energyDrinkA[i]);
            const long newdpB=max(dpA,dpB+energyDrinkB[i]);
            dpA=newdpA;
            dpB=newdpB;
        }
        return max(dpA,dpB);
    }
};