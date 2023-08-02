class Solution{
public:
    int reverse(int x){
        int r = 0;
        while(x){
            if(r > INT_MAX/10 || r < INT_MIN/10) return 0;
            r = r*10 + x%10;
            x = x/10;
        }
        return r;
            
    }

};

// The reason why it does not use the two pointer method is because the two pointer method often used as string or array
// In this case, for a int type variable, we cannot access the specific position directly. Therefore we use this method 
