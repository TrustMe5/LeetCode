/*************************************************************************
	> File Name: code.cpp
	> Author: 
	> Mail: 
	> Created Time: 2016年04月06日 星期三 19时03分07秒
 ************************************************************************/

class Solution {
public:
    string convert(string s, int numRows) {
        int i,j;
        int len=s.length();
        if(len==0||numRows<2)
        {
            return s;
        }
        int dis=2*numRows-2;
        string str="";
        for(i=0;i<numRows;i++)
        {
            for(j=i;j<len;j+=dis)
            {
                str+=s[j];
                if(i>0&&i<numRows-1)
                {
                    int t=j+dis-2*i;
                    if(t<len)
                    {
                        str+=s[t];
                    }
                }
            }
        }
        return str;
        
    }
};
