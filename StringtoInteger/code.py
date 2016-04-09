class Solution(object):
    def myAtoi(self, str):
        """
        :type str: str
        :rtype: int
        """
        max=2147483647
        min=-2147483648
        symbol=1
        i=0
        sum=0
        if str=='':
            return 0
        while i<len(str) and str[i].isspace():
            i+=1
        if i<len(str) and str[i]=='-':
            symbol=-1
        if i<len(str) and (str[i]=='-' or str[i]=='+'):
            i+=1
        j=i
        while i<len(str) and str[i].isdigit():
            i+=1
        if i==j:
            return 0
        digit=int(str[j:i])
        if digit>max:
            if symbol==1:
                return max
            else:
                return min
        else:
            if symbol==1:
                return digit
            else:
                return symbol*digit



