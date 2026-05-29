/*
Leetcode Problem 231: Power of Two
Given an integer n, return true if it is a power of two. Otherwise, return false.
An integer n is a power of two, if there exists an integer x such that n == 2^x.
Example :       
Input: n = 1
Output: true
Explanation: 2^0 = 1
Time Complexity: O(log2(n)) where n is the input integer. We multiplied the power by 2 for every iteration, so the time complexity is O(log2(n)).
Space Complexity: O(1) as we are using only constant space to store the power variable
*/

class Solution {
public:
    bool isPowerOfTwo(int n) {
       if(n<=0)
       return false;

       long long power=1;
       while (power<n)
       {
        power*=2;
       }
       if (power==n)
       return true;

       return false;
    }
};