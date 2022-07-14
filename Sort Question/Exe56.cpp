#include <iostream>

using namespace std;

class Solution
{
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        //sort the input array
        sort.(intervals.begin(),intervals.end());
        
        //创建一个新的vector 容器存储合并后的interval 数组
        vector<vector<int>> merged;
        for(auto interval:intervals) {
            //如果merged 容器是空的或者 merged 容器末尾元素的interval 最大值小于新interval 的最小值。则加上这个新的interval
            if(merged.empty() || merged.back()[1] < interval[0]) {
                merged.push_back(interval);
            }else {
             //else 容器不为空或者 merged 容器末尾元素的interval 最大值大于新interval 的最小值。则比较新interval 最大值和旧interval 的最大值，并返回其中的较大值
                merged.back()[1] = max(merged.back()[1],interval[1]);
            }
        }
        return merged;
    }
};
