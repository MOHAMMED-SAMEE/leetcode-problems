class Solution {
public:
    bool isPalindrome(string s) {
        string m;
        for(int i=0;i<s.size();i++){
            m+=tolower(s[i]);
        }
        string r;
        string n;
        for(int i=0;i<m.size();i++){
            if(m[i]>='a' && m[i]<='z' || m[i]>='0' && m[i]<='9'){
                n+=m[i];
            }
        }
        for(int i=n.size()-1;i>=0;i--){
            r+=n[i];
        }

    
        if(n==r){
            return true;
        }
        else{
            return false;
        }
    }
};