#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class Solution
{
public:
	static bool cmp(int a, int b){
		return to_string(a) + to_string(b) > to_string(a) + to_string(b);
	}
	
	 string largestNumber(vector<int>& nums){
		 //创建一个新的string 来存储
		 string str;
		 
		 sort(nums.begin(),nums.end(),cmp);
		 for(int i = 0, i < nums.size(),++i) {
			 str += to_string(nums[i]);
		 }
		 //判断是否vector 所有的数都为0，是则返回0，否则返回str
		 return str == '0'? "0":str;
	 }

};
