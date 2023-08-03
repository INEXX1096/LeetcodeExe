// Typical two pointer question 
// The capacity is determined by the lower height of the bar 

class Solution{
public:
    int maxArea(vector<int> &height) {
        int left = 0, right = height.size() - 1;
        int maxCap = 0;

        while(left < right){
            int h = min(height[left], height[right]);
            maxCap = max(maxCap, h *(right - left));

            if(height[left] < height[right]) ++ left;
            else --right;
        }
        return maxCap;
    }
};
