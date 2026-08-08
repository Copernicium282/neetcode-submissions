class Solution {
public:
    bool isAnagram(string s, string t) {
        int A[26] = {0}, B[26] = {0};
        for(int i=0; i<s.length(); i++){
            A[static_cast<int>(s[i] - 'a')] += 1;
        }
        for(int i=0; i<t.length(); i++){
            B[static_cast<int>(t[i] - 'a')] += 1;
        }
        for(int i=0; i<26; i++){
            if(A[i] != B[i]){
                return false;
            }
        }
        return true;
    }
};
