class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string pre = "";
        bool fix = false;
        if(strs.empty()) return pre;
        int len = strs[0].length();
        if(strs.size() == 1) return strs[0];
        for(int i=0; i<strs.size(); i++){
            if(len > strs[i].length()) len = strs[i].length();
        }
        for(int i=0; i<len; i++){
            fix=true;
            for(int j=0; j<strs.size(); j++){
                if(strs[0][i] != strs[j][i]){
                    fix=false;
                    break;
                }
            }
            if(fix==true) pre += strs[0][i];
            else break;
        }
        return pre;
    }
};