/*
Leetcode Problem 7: Reverse Integer
Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.
Example :
Input: x = 123
Output: 321
Time Complexity: O(log10(n)) where n is the input integer. We divided the input by 10 for every iteration, so the time complexity is O(log10(n)).
Space Complexity: O(1) as we are using only constant space to store the reversed number
*/

class Solution {
public:
    int reverse(int x) {
        long rev=0;
        while (x!=0)
        {
            int ld = x%10;
            x/=10;
            rev= rev*10+ld;
        }
        if (rev>INT_MAX || rev<INT_MIN)
        return 0;

        return rev;
    }
};