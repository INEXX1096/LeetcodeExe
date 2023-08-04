// 数组的操作：题目给出的是一个数组，你需要对数组进行遍历，计算等操作，所以你需要熟悉如何操作数组。

// 排序和双指针技术：题目中要求找到所有和为0的三元组，其中一个有效的方法是先对数组进行排序，然后使用双指针技术寻找可能的三元组。这需要你理解排序和双指针技术的原理，并能在实际问题中应用它们。

// 去重的处理：题目中要求找到的三元组必须是唯一的，这就需要你考虑如何处理重复的情况。在这个问题中，通过排序和比较相邻元素的方法可以有效地去除重复的三元组。

// 复杂度的考虑：虽然这个问题可以通过三层循环暴力求解，但是那样的时间复杂度会很高（O(n^3)）。通过使用排序和双指针技术，我们可以将时间复杂度降低到O(n^2)，这需要你对算法的复杂度有一定的理解。

class Solution{
public:
    vector<vector<int>> threeSum(vector<int> &nums){
        vector<vector<int>> result;
        if (nums.empty()) return result;

        sort(nums.begin(),nums.end());

        for(int i = 0; i < nums.size()-2; ++i){
            //跳过重复元素
            if(i > 0 && nums[i] == nums[i-1]) continue;
            int left = i + 1, right = nums.size() - 1;
            while(left < right){
                int sum = nums[i] + nums[left] + nums[right];
                if(sum < 0) ++left;
                else if(sum > 0){
                    --right;
                }else{
                    result.push_back({nums[i],nums[left],nums[right]});
                    while(left < right && nums[left] == nums[left + 1]) ++left;
                    while(left < right && nums[right] == nums[right - 1]) --right;
                    ++left;
                    --right;
                }
            }            
        }
        return result;
        
    }
};
