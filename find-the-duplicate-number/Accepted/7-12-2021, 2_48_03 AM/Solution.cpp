// https://leetcode.com/problems/find-the-duplicate-number

class Solution {
public:
    int findDuplicate(vector<int>& arr)
    {
        
    int n = arr.size();
    if (n <= 1)
        return -1;
 
    // initialize fast and slow
    int slow = arr[0];
    int fast = arr[arr[0]];
 
    // loop to enter in the cycle
    while (fast != slow) {
 
        // move one step for slow
        slow = arr[slow];
 
        // move two step for fast
        fast = arr[arr[fast]];
    }
 
    // loop to find entry point of the cycle
    fast = 0;
    while (slow != fast) {
        slow = arr[slow];
        fast = arr[fast];
    }
    return slow;
    }
};