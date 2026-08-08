class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        map<int, int> A;
        for(int i=0; i<nums.size(); i++){
            A[nums[i]] = i;
        }
        for(int i=0; i<nums.size(); i++){
            auto check = A.find(target-nums[i]);
            if(A[target-nums[i]] != check->second){
                continue;
            }
            if(nums[i] + check->first == target && i != check->second){
                int a = i<check->second ? i : check->second;
                int b = i>check->second ? i : check->second;
                ans.push_back(a);
                ans.push_back(b);
                break;
            }
        }
        return ans;
    }
};
