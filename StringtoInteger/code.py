#!/usr/bin/env python
# coding=utf-8
def processnum(self,str):
    max=0x7fffffff
    min=0x80000000
    if str='':
        return 0
    i=0
    sum=0
    sysbol=1
    while i<len(str) and str[i].isspace():
        i+=1
    if i<len(str) and str[i]=='-':
        sysbol=-1
    if i<len(str) and (str[i]=='+' or str[i]=='-'):
        i+=1
    while i<len(str) and str[i].isdigit():
        digit=int(str[i])
        if max/10>=sum:
            sum*=10
        else:
            if sign==1:
                return max
            else:
                return min
        if max-digit>=sum:
            sum+=digit
        else:
            if sign==1:
                return max
            else:
                return min
        i+=1
    return sign*sum
    


