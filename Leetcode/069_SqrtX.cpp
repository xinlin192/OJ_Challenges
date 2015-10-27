/*###############################################################
## MODULE: 069_SqrtX.cpp
## VERSION: 1.0 
## SINCE 2015-10-27
## AUTHOR Jimmy Lin (xl5224) - JimmyLin@utexas.edu  
## DESCRIPTION: 
##      
#################################################################
## Edited by MacVim
## Class Info auto-generated by Snippet 
################################################################*/

// Newton Method
class Solution {
public:
    int mySqrt(int x) {
        if (x < 0) return -1;
        if (x == 0 or x == 1) return x; 
        long long xx = x;
        long long res = xx/2+1; 
        long long fx = res*res -xx;
        while (fx > 0) {
            res = (res + xx/res)/2;
            fx = res*res-xx;
        }
        return res;
    }
};

// Binary Search
class Solution {
public:
    int mySqrt(int x) {
        if (x < 0) return -1;
        if (x == 0 or x == 1) return x; 
        long long xx = x;
        long long start = 0, end = xx, mid = xx/2; 
        while (true) { 
            long long ms = mid*mid;
            long long msp = (mid+1)*(mid+1);
            if (ms <= xx and msp > xx) 
                return mid;
            else if (ms > xx)
                end = mid; 
            else
                start = mid;
            mid = (start+end)/2;
        }
    }
};