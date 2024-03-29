// Boundary Handling of the string 

class Solution{
public:
    int romanToInt(string s){
        // Create a hash table to store the key-value set 
        unordered_map<char, int> m;
        m['I'] = 1;
        m['V'] = 5;
        m['X'] = 10;
        m['L'] = 50;
        m['C'] = 100;
        m['D'] = 500;
        m['M'] = 1000;

        int sum = 0;
        for(int i = 0; i < s.length() - 1; ++i){
            if(m[s[i]] < m[s[i+1]]) sum -= m[s[i]];
            else sum += m[s[i]];
        }
        sum += m[s.back()];
        return sum;
        
    }
};
