// An integer is a palindrome when it reads the same forward and backward.

class Solution{
public:
    bool isPalindrome(int x){
        if(x < 0) return false;

        int ini = x;
        int res = 0;

        while(x > 0){
            // judge whether the memory overflow 
            if(res > INT_MAX/10 || (res == INT_MAX/10 && x % 10 > INT_MAX % 10)) return false;
            res = res*10 + x%10;
            x /= 10;
        }
        return (res == ini);
    }
};

// the same method as Exe7
