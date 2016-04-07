#!/usr/bin/env python
# coding=utf-8
num=raw_input('>')
num=int(num)
dealnum=0
if num<0:
    num=-1*num
    while num!=0:
       dealnum=dealnum*10+num%10
       num=num/10
    print -1*dealnum
else:
    while num!=0:
       dealnum=dealnum*10+num%10
       num=num/10
    print dealnum

