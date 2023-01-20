class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> map;
        vector<int> res(2, 0);
        for(int i = 0; i < nums.size(); i++)
            map[nums[i]] = i;

        for(int i = 0; i < nums.size(); i++){
            int complement = target - nums[i];
            if(map.count(complement) && map[complement] != i){
                res.push_back(i);
                res.push_back(map[complement]);
                break;
            }
        }

        return res;
    }
};