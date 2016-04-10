class Solution(object):
    def convert(self, s, numRows):
        """
        :type s: str
        :type numRows: int
        :rtype: str
        """
        lag=2*numRows-2
        length=len(s)
        if length==0:
            return s
        if numRows<2:
            return s
        str=""
        i=0
        while i<numRows:
              j=i
              while j<length:
                 str+=s[j]
                 if i>0 and i<numRows-1:
                    t=j+lag-2*i
                    if t<length:
                       str+=s[t]
                 j+=lag
              i+=1
        return str
        
        
