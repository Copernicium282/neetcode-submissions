class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string pre = "";
        if(strs.empty()) return pre;
        if(strs.size() == 1) return strs[0];
        for(int i=0; i<strs[0].length(); i++){
            for(int j=0; j<strs.size(); j++){
                if(strs[0][i] != strs[j][i]){
                    return pre;
                }
            }
            pre += strs[0][i];
        }
        return pre;
    }
};