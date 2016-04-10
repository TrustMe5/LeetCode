/*************************************************************************
	> File Name: correctcode.cpp
	> Author: 
	> Mail: 
	> Created Time: 2016年03月31日 星期四 19时43分50秒
 ************************************************************************/

#include<iostream>
using namespace std;
int main()
{
    int num=0,start=0,i,j;
    string s;
    cin>>s;
    int have[26];
    int pos[26];
    for(i=0;i<26;i++)
    {
        have[i]=0;
        pos[i]=0;
    }
    for(i=0;i<s.length();i++)
    {
        if(have[s[i]-'a'])
        {
            for(j=start;j<=pos[s[i]-'a'];j++)
            {
                have[s[j]-'a']=0;
            }
            start=pos[s[i]-'a']+1;
            have[s[i]-'a']=1;
            pos[s[i]-'a']=i;
        }
        else
        {
            have[s[i]-'a']=1;
            pos[s[i]-'a']=i;
            if(num<i-start+1)
            {
                num=i-start+1;
            }
        }
    }
    cout<<num<<endl;
    return 0;
}
