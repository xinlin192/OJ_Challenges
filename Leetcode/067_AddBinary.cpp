/*###############################################################
## MODULE: 067_AddBinary.cpp
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
    string addBinary(string a, string b) {
        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());
        string res = ""; 
        int a_size = a.length();
        int b_size = b.length();
        int i = 0; 
        int acc = 0;
        while (i < a_size or i < b_size or acc > 0) {
            int a_cur = 0, b_cur = 0;
            if (i < a_size) a_cur = a.at(i) - '0';
            if (i < b_size) b_cur = b.at(i) - '0';
            int cur_val = a_cur + b_cur + acc; 
            char cur = (char) ((cur_val % 2) + '0');
            acc = cur_val / 2;
            res.push_back(cur);
            i ++; 
        }
        reverse(res.begin(), res.end());
        return res; 
    }
};
