class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string pre = "";
        int len = strs[0].length(), size = strs.size();
        if(strs.empty()) return pre;
        if(size == 1) return strs[0];
        for(int i=0; i<len; i++){
            for(int j=0; j<size; j++){
                if(strs[0][i] != strs[j][i]){
                    return pre;
                }
            }
            pre += strs[0][i];
        }
        return pre;
    }
};