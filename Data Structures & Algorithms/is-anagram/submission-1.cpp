class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()){
            return false;
        }

        unordered_map<int, int> A;
        for(int i=0; i<s.length(); i++){
            A[s[i]] += 1;
            A[t[i]] -= 1;
        }
        
        for(auto it : A){
            if(it.second != 0){
                return false;
            }
        }
        return true;
    }
};
