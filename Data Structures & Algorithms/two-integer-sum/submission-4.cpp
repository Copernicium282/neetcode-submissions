class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> check; 

        for(int i = 0; i < nums.size(); i++){
            int y = target-nums[i];
            if(check.contains(y)){
                return {check[y], i}; 
            }
            check[nums[i]] = i; 

        }
        return {};
    }
};
