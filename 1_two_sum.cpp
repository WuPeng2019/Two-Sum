/*
Given an array of integers, return indices of the two numbers 
such that they add up to a specific target.
You may assume that each input would have exactly one solution,
and you may not use the same element twice.

给定一个整数数组 nums 和一个目标值 target，请你在该数组中找出和为目标值的那 
两个整数，并返回他们的数组下标。
你可以假设每种输入只会对应一个答案。但是，你不能重复利用这个数组中同样的元素。

给定nums = [2, 7, 11, 15], target = 9
因为nums[0] + nums[1] = 2 + 7 = 9
所以返回 [0, 1]
*/

#include<iostream>
#include<vector>

using namespace std;

class Solution{
public:
    vector<int> twoSum(vector<int>& nums,int target){
        vector<int> ivec;
        //for(vector<int>::iterator it = nums.begin(); it != nums.end(); ++it){}
        for(size_t i = 0; i < nums.size()-1; i++)
        {
            for(size_t j = i+1; j < nums.size(); j++)
            {
                if(nums[i]+nums[j]==target)
                {
                    ivec.push_back(i);
                    ivec.push_back(j);
                }
            }
        }
        return ivec;
    }
};

int mian()
{
    return 0;
}