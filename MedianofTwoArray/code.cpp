/*************************************************************************
	> File Name: code.cpp
	> Author: 
	> Mail: 
	> Created Time: 2016年04月04日 星期一 14时34分37秒
 ************************************************************************/

#include<iostream>
using namespace std;
double findkth(int a[],int m,int b[],int n,int k){
    if(m>n)
    {
        return findkth(b,n,a,m,k);
    }
    if(m==0)
    {
        return b[k-1];
    }
    if(k<=1)
    {
        return min(a[0],b[0]);
    }
    int pa=min(k/2,m),pb=k-pa;
    if(a[pa-1]<b[pb-1])
    {
        return findkth(a+pa,m-pa,b,n,k-pa);
    }
    else if(a[pa-1]>b[pb-1])
    {
        return findkth(a,m,b+pb,n-pb,k-pb);
    }
    else return a[pa-1];

}
double findmediannum(int a[],int m,int b[],int n)
{
    int k=m+n;
    if(k&0x1)
    {
        cout<<findkth(a,m,b,n,k/2+1)<<endl;
    }
    else
    {
        cout<<(findkth(a,m,b,n,k/2)+findkth(a,m,b,n,k/2+1))/2<<endl;
    }

}
int main()
{
    int a[110],b[110],m,n,k,i;
    cin>>m>>n;
    for(i=0;i<m;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        cin>>b[i];
    }
    findmediannum(a,m,b,n);
}
