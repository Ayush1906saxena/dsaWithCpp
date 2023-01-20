class Solution {
public:
    string arr[] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    
    vector<string> letterCombinations(string digits) {
        vector<string> res;

        if(digits == null || digits.length() == 0)
            return res;

        dfs(digits, 0, "", res);

        return res;
    }

    void dfs(string digits, int i, string str, &vector<string> res){
        if(i >= digits.length()){
            res.push_back(str);
            return;
        }

        string curr = arr[digits[i] - '0'];
        for(char c : curr){
            str += c;
            dfs(digits, i+1, str);
            str.pop_back();
        }
    }
};