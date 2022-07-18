// website link
//https://leetcode.com/problems/remove-element/

#include <iostream>

using namespace std;
 
class Solution
{
public:
   int removeElement(vector<int>& nums, int val) {
	   //创建快慢指针(快指针在for loop 中创建)
	   int slow = 0;
	   
	   for(int fast = 0; fast < nums.size(); ++fast) {
		   if(nums[fast] != val) {
			   ++slow;
			   nums[slow] = nums[fast];
			   
		   }
	   }
	   return slow+1;
   }

};
