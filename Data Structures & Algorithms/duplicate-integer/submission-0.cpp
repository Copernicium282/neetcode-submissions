class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int>uniq;
        for(auto i : nums){
            uniq.insert(i);
        }
        if(uniq.size()!=nums.size()) return true;
        else return false;
    }
};