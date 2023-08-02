class Solution{
public:
    int myAtoi(string s){
        int len = s.length();
        double num = 0;
        int i = 0;

        //remove all the space 
        while (s[i] == ' ')++i;

        //determine the sign of the string 
        bool positive = s[i] == '+';
        bool negative = s[i] == '-';
        positive == true? ++i : i;
        negative == true? ++i : i;

        
        while(i < len && s[i] >= '0' && s[i] <= '9'){
            num = num *10 + (s[i] - '0');
            ++i;
        }
        num = negative? -num : num;
        num = (num > INT_MAX)? INT_MAX : num;
        num = (num < INT_MIN)? INT_MIN : num;
        return num;
    }
};

// The key idea is the ASCII 
//s[i] >= '0' && s[i] <= '9' if s[i] is a number, it will have a ASCII number of 48-57 which is exactly >= '0' and <= '9'
//s[i] - '0' is used to find the number, as an integer will have a number of 48-57, when devide by '0'(48) we will get the specific value we want
