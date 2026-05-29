/*
Leetcode Problem 3300: Minimum Number of Operations to Make Array Equal
Given an array of integers, return the minimum number of operations required to make all elements equal.
Example :
Input: nums = [1,2,3]
Output: 2
Explanation: Two operations are required to make all elements equal.
Time Complexity: O(n) where n is the number of elements in the input array. We traversed the array once to calculate the sum of digits for each element, and then we found the minimum element in the array, so the time complexity is O(n).
Space Complexity: O(1) as we are using only constant space to store the sum variable
*/

class Solution {
public:
    int minElement(vector<int>& nums) {
        for(int i=0;i<nums.size();i++)
        {
            int sum=0;
            int num= nums[i];
            while(nums[i]>0)
            {
             int ld=nums[i]%10;
             nums[i]/=10;
             sum+=ld;
            }
            nums[i]=sum;
        }
        return *min_element(nums.begin(),nums.end());
    }
};