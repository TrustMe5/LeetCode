class Solution(object):
    def reverse(self, x):
        """
        :type x: int
        :rtype: int
        """
        max=2147483648
        num=0
        if x<0:
            x=-1*x
            while x!=0:
                num=num*10+x%10
                if num>max:
                    return 0
                x=x/10
            return -1*num
        else:
            while x!=0:
                num=num*10+x%10
                if num>max:
                    return 0
                x=x/10
            return num
