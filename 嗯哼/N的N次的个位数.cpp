/*计算N的N次幂的个位数
描述

输入第一行是一个正整数T，表示有T组测试用例。

接下来的T行，每行包含一个正整数N(1<=N<=1,000,000,000)。


输入
每组数据都输出N的N次幂的个位数，每组数据输出一行。


输出
每组数据都输出N的N次幂的个位数，每组数据输出一行。


输入样例 1 

2
3
4
输出样例 1

7
6*/
#include<iostream>
using namespace std;
int main()
{
    int t,n;
    int num2[4]={6,2,4,8};
    int num3[4]={1,3,9,7};
    int num4[2]={6,4};
    int num7[4]={1,7,9,3};
    int num8[4]={6,8,4,2};
    int num9[2]={1,9};
    cin>>t;
    while(t--)
    {
        cin>>n;
        int c=n%10;
        if(c==0||c==1||c==5||c==6)
        {
           cout<<c<<endl;; 
        }
        else
        {
            if(c==2)
            {
                int num=n%4;
                cout<<num2[num]<<endl;
            }
            if(c==3)
            {
                int num=n%4;
                cout<<num3[num]<<endl;
            }
            if(c==4)
            {
                int num=n%2;
                cout<<num4[num]<<endl;
            }
            if(c==7)
            {
                int num=n%4;
                cout<<num7[num]<<endl;
            }
            if(c==8)
            {
                int num=n%4;
                cout<<num8[num]<<endl;
            }
            if(c==9)
            {
                int num=n%2;
                cout<<num9[num]<<endl;
            }
        }
    }
    return 0;
}
