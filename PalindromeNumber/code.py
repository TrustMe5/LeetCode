#!/usr/bin/env python
# coding=utf-8
class Solution(object):
    def isPalindrome(self, x):
        """
        :type x: int
        :rtype: bool
        """
        if x<0:
            return 1==2
        array=[]
        while x!=0:
            num=x%10
            array.append(num)
            x=x/10
        length=len(array)
        i=0
        j=length-1
        while i<j:
            if array[i]==array[j]:
                i+=1
                j-=1
            else:
                break
        if i>=j:
            return 1==1
        else:
            return 1==2 
