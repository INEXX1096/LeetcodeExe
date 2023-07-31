
// Given a string s, find the length of the longest substring without repeating characters.
// Sliding window method 

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // Create two pointer index called first and end 
        int start = 0, end = 0, max_len = 0;
        unordered_set<char> char_set;

        while(end < s.length()){
            if(char_set.find(s[end]) == char_set.end()){
                char_set.insert(s[end]);
                end++;
                max_len = max(max_len, end - start);
            }else{
                char_set.erase(s[start]);
                start++;
            }
        }
        return max_len;


    }
};
