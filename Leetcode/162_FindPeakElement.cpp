/*###############################################################
## MODULE: 162_FindPeakElement.cpp
## VERSION: 1.0 
## SINCE 2015-10-27
## AUTHOR Jimmy Lin (xl5224) - JimmyLin@utexas.edu  
## DESCRIPTION: 
##      
#################################################################
## Edited by MacVim
## Class Info auto-generated by Snippet 
################################################################*/

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        int start = 0, end = n, mid = (start+end)/2;
        while (mid != start) {
            if ((mid==0 or nums[mid] > nums[mid-1]) 
                    and (mid==n-1 or nums[mid] > nums[mid+1]))
                return mid; 
            else if (nums[mid-1] > nums[mid]) 
                end = mid; 
            else if (nums[mid+1] > nums[mid])
                start = mid+1;
            mid = (start+end)/2;
        }
        return mid;
    }
};