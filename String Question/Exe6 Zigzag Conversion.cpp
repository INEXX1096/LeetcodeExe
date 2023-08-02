class Solution {
public:
    string convert(string s, int numRows){
        if (numRows <= 1) return s;
        // Create a vector which has a number of elements equals to the number of rows 
        vector<string> v(numRows,"");

        int j = 0; int dir = -1;
        for (int i = 0; i < s.length(); ++ i){
            if(j == numRows-1 || j == 0) dir *= -1;
            v[j] += s[i];

            if(dir == 1) ++j;
            else --j;
        }

        string res;
        for(auto &it : v) res += it;

        return res;
        
    }
};
// Variable dir is important to determine the direction of the pointer
// The size of v is equals to the number of rows which means when numRows = 3, v has v[0], v[1] and v[2]
// For string PAYPALISHIRING, v[0] has PAHN, v[1] has APLSIIG, and v[2] has YIR
