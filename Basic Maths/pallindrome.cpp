/*Leetcode Problem 9: Palindrome Number
Given an integer x, return true if x is a palindrome, and false otherwise.
Example :
Input: x = 121
Output: true
Explanation: 121 reads as 121 from left to right and from right to left.
Time Complexity: O(log10(n)) where n is the input integer. We divided the input by 10 for every iteration, so the time complexity is O(log10(n)).
Space Complexity: O(1) as we are using only constant space to store the reversed number
*/

class Solution {
public:
    bool isPalindrome(int x) {
        long rev=0;
        int num=x;
        while (x>0)
        {
            int ld= x%10;
            x/=10;
            rev=rev*10+ld;
                
        }
        if (num==rev)
        return true;
return false;
    }
};