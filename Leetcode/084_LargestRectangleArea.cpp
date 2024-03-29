/*###############################################################
## MODULE: 084_LargestRectangleArea.cpp
## VERSION: 1.0 
## SINCE 2015-10-24
## AUTHOR Jimmy Lin (xl5224) - JimmyLin@utexas.edu  
## DESCRIPTION: 
##      
#################################################################
## Edited by MacVim
## Class Info auto-generated by Snippet 
################################################################*/


/* Solution 2: Dynamic Programming with O(n^2) */
class Solution {
public:
    int largestRectangleArea(vector<int>& height) {
        int n = height.size();
        if (n <= 0) return 0;
        int max_T = 0;
        for (int i = 0; i < n; i ++) {
            int lowest = height[i];
            int max_Ti = height[i];
            for (int j = i-1; j >= 0; j --) {
                lowest = min (lowest, height[j]);
                int area = lowest * (i - j + 1);
                max_Ti = max(max_Ti, area);
            }
            max_T = max(max_T, max_Ti);
        }
        return max_T;
    }
};

