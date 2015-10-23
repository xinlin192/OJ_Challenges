/*###############################################################
## MODULE: 074_Search2DMatrix.cpp
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
    int binRowSearchMatrix(vector<vector<int>>& matrix,int target,int start,int end, int cols) {
        if (end - start == 0) return -1;
        else if (end - start == 1) 
            return (matrix[start][0]<=target and target<=matrix[start][cols-1])?start:-1;
        else {
            int M = (end + start) / 2;
            int mid_head = matrix[M][0];
            int mid_tail = matrix[M][cols-1];
            if (target < mid_head) binRowSearchMatrix(matrix, target, start, M, cols);
            else if (target <= mid_tail) return M;
            else return binRowSearchMatrix(matrix, target, M+1, end, cols);
        }
    }
    bool binSearchVec (vector<int>& vec, int target, int start, int end) {
        if (end - start == 0) return false;
        else if (end - start == 1) return vec[start] == target;
        else { 
            int M = (end + start) / 2; 
            int mid = vec[M];
            if (target == mid) return true;
            else if (target < mid) return binSearchVec(vec,target, start, M);
            else return binSearchVec(vec,target, M+1, end);
        }
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size(); if (!m) return false;
        int n = matrix[0].size(); if (!n) return false;
        int r = binRowSearchMatrix(matrix, target, 0, m, n);
        if (r < 0) return false;
        return binSearchVec(matrix[r], target, 0, n);
    }
};
