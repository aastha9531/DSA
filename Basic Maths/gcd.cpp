/*
Leetcode Problem 1979: Find Greatest Common Divisor of Array
Given an integer array nums, return the greatest common divisor of the smallest number and largest number in the array.
Example :
Input: nums = [2,4,6,8]
Output: 2
Explanation: The smallest number in the array is 2 and the largest number is 8. The GCD of 2 and 8 is 2.
Time Complexity: O(n) where n is the number of elements in the input array. We traversed the array once to find the minimum and maximum elements, so the time complexity is O(n).
Space Complexity: O(1) as we are using only constant space to store the minimum and
*/

class Solution {
public:
    int findGCD(vector<int>& nums) {
        int mn= *min_element(nums.begin(),nums.end());
        int mx= *max_element(nums.begin(),nums.end());

        return __gcd(mn,mx);
    }
};