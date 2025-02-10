class Solution {
public:
    int minChanges(int n, int k) {
        if((n&k)!=k) return -1;
        string ns=bitset<32>(n).to_string();
        string ks=bitset<32>(k).to_string();
        int c=0;
        for(int i=0;i<ns.size();i++){
            c+=ns[i]-'0';
        }
        for(int i=0;i<ks.size();i++){
            c-=ks[i]-'0';
        }
        return c;
    }
};