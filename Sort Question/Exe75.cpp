#include <iostream>
#include <vector>

using namespace std;

//暴力解法
class Solution
{
	void sortColors(vector<int>& nums) {
		//create four vector to save the number of 1's, 2's, 0's and the final result
		vector<int> sample1;
        vector<int> sample2;
        vector<int> sample3;
        vector<int> numsample;
		
		for(int ptr = 0; ptr <nums.size(); ++ptr){
            if(nums[ptr] == 0){
                sample1.push_back(0);
            }else if (nums[ptr] == 1){
                sample2.push_back(1);
            }else{
                sample3.push_back(2);
            }
        }
        numsample.insert(numsample.end(),sample1.begin(),sample1.end());
        numsample.insert(numsample.end(),sample2.begin(),sample2.end());
        numsample.insert(numsample.end(),sample3.begin(),sample3.end());
        nums = numsample;
	
	}
};


//three pointer method
//还没完成
class Solution
{
	void sortColors(vector<int>& nums){
		int end = nums.size()-1, start = 0, current = 0;
		
		for(int n:nums){
			if(nums[current] == 2){
				if(nums[end] !=)
				nums[start] = nums[end];
				nums[end] = 2;
				end--;
			
			}else if(nums[current] == 0){
				++start;
				++current;
			
			}else if(nums[current] ==)
		
		}
		
	}
};
