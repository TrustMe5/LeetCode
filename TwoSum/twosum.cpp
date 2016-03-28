/*************************************************************************
	> File Name: twosum.cpp
	> Author: 
	> Mail: 
	> Created Time: 2016年03月28日 星期一 18时31分06秒
 ************************************************************************/

#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>v;
       int i,j;
       for(i=0;i<nums.size()-1;i++)
       {
           for(j=i+1;j<nums.size();j++)
           {
               if(nums[i]+nums[j]==target)
               {
                   v.push_back(i);
                   v.push_back(j);
                   return v;
               }
           }
       }
       return v;
       
    }
};
