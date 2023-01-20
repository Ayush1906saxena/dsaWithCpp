class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        if(n == 0)
            return 0;

        int i = 0, j = 0;
        int res = INT_MIN;
        unordered_map<char, int> map;

        while(j < n){
            map[s[j]]++;

            if(map.size() == (j-i+1))
                res = max(res, (j-i+1));
            else{
                while(map.size() < (j-i+1)){
                    if(map.count[s[i]]){
                        int val = map[s[i]];
                        if(val == 1)
                            map.erase(s[i]);
                        else map[s[i]]--;
                    }
                    i++;
                }
            }
            j++;
        }

        return res;
    }
};