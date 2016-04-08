#!/usr/bin/env python
# coding=utf-8
def processnum(self,str):
    num='0123456789'
    length=len(str)
    if length==0:
        return 0
    if str[0] not in num and str[0]!='-' and str[0]!='+':
        return 0
    if str[0]=='-' or str[0]=='+':
        i=1
        while i<length and str[i] in num:
            i++
        if i==1:
            return 0
        else:
            integer=int(str[:i])
             if integer<-0x80000000
                   return -0x80000000                              
             elif integer>0x7fffffff:
                   return 0x7fffffff
             else:
                   return integer

