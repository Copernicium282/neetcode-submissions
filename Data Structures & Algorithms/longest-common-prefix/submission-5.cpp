class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string pre = "";
        bool fix = false;
        if(strs.empty()) return pre;
        if(strs.size() == 1) return strs[0];
        for(int i=0; i<strs[0].length(); i++){
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