/*###############################################################
## MODULE: 062_UniquePath.cpp
## VERSION: 1.0 
## SINCE 2015-10-23
## AUTHOR Jimmy Lin (xl5224) - JimmyLin@utexas.edu  
## DESCRIPTION: 
##      
#################################################################
## Edited by MacVim
## Class Info auto-generated by Snippet 
################################################################*/

class Solution {
public:
    long prod (int a, int b) {
        int p = min(a, b);
        int q = max(a, b);
        long acc = 1;
        for (int i = p; i <= q; i ++)
            if (i==0) continue;
            else acc *= i;
        return acc;
    }
    int uniquePaths(int m, int n) {
        int a = max(m, n) - 1;
        int b = m + n -2;
        if (b - a == 0) return 1; 
        else return prod(b, a+1)/prod(b-a,1);
    }
};
