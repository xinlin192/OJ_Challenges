############################################################
##    FILENAME:   001_TwoSum.py    
##    VERSION:    1.0
##    SINCE:      2015-10-23
##    AUTHOR: 
##        Jimmy Lin (xl5224) - JimmyLin@utexas.edu  
##
############################################################
##    Edited by MacVim
##    Documentation auto-generated by Snippet 
############################################################

class Solution:
    # @return a tuple, (index1, index2)
    def twoSum(self, num, target):
        mapping = {}
        size = len(num)
        
        for i in range(size): 
            mapping.update({num[i]:i})
        
        for i in range(size):
            tosearch = target - num[i]
            if tosearch in mapping:
                index1 = mapping[tosearch] + 1
                index2 = i + 1
                if index1 == index2: continue
                return [min(index1, index2), max(index1, index2)]
