/*************************************************************************
	> File Name: code1.cpp
	> Author: 
	> Mail: 
	> Created Time: 2016年03月31日 星期四 20时44分09秒
 ************************************************************************/

#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int maxlen=0,left=0,i;
    int p[300];
    memset(p,-1,sizeof(p));
    for(i=0;i<s.length();i++)
    {
        if(p[s[i]]>=left)
        {
            left=p[s[i]]+1;
        }
        p[s[i]]=i;
        maxlen=max(maxlen,i-left+1);
    }
    return maxlen;
}
