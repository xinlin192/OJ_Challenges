/*###############################################################
## MODULE: 073_SetMatrixZeros.cpp
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
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        if (!m) return ;
        int n = matrix[0].size();
        if (!n) return ;
        // m >= 1 and n >= 1
        vector<pair<int,int>> elements;
        for (int i = 0; i < m; i ++) 
            for (int j = 0; j < n; j ++) 
                if (!matrix[i][j]) 
                    elements.push_back(std::make_pair(i,j));
        int nelem = elements.size();
        for (int k = 0; k < nelem; k ++) {
            int r = elements[k].first;
            int c = elements[k].second;
            for (int i = 0; i < m; i ++)
                matrix[i][c] = 0;
            for (int j = 0; j < n; j ++) 
                matrix[r][j] = 0;
        }
    }
};
