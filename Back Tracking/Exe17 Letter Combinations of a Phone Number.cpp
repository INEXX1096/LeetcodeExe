//

class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if(digits.empty()) return {};
        
        unordered_map<char,string> m{
            {'2', "abc"},
            {'3', "def"},
            {'4', "ghi"},
            {'5', "jkl"},
            {'6', "mno"},
            {'7', "pqrs"},
            {'8', "tuv"},
            {'9', "wxyz"}
        };
        
        vector<string> res;
        string combination;
        backtrack(res, m, digits, 0, combination);
        return res;
    }
    
    void backtrack(vector<string>& res, const unordered_map<char,string>& m, const string& digits, int index, string& combination) {
        if(index == digits.size()) {
            res.push_back(combination);
            return;
        }
        
        const string& letters = m.at(digits[index]);
        for(const char& letter: letters) {
            combination.push_back(letter);
            backtrack(res, m, digits, index+1, combination);
            combination.pop_back();  // backtrack to the previous state
        }
    }
};
