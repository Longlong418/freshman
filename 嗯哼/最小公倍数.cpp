/*最小公倍数
描述

给你多个正整数，计算最小公倍数.


输入
输入数据第一行是一个正整数C（C<10），表示有C组测试用例。

接下来C行，每行是一组测试数据。

每组数据首先是一个正整数N（1<N<30），表示本组数据有N个正整数，然后接着是N个正整数。


输出
请输出每组数据的最小公倍数，每组数据输出一行。

题目保证所有的结果都在32位整数范围内。


输入样例 1 

2
3 5 7 15
6 4 10296 936 1287 792 1
输出样例 1

105
10296
6*/
#include<iostream>
using namespace std;
int main()
{
    int t,n;
    int num2[5]={0,2,4,8,6};
    int num3[5]={0,3,9,7,1};
    int num4[3]={0,4,6};
    int num7[5]={0,7,9,3,1};
    int num8[5]={0,8,4,2,6};
    int num9[3]={0,9,1};
    cin>>t;
    while(t--)
    {
        cin>>n;
        int c=n%10;
        if(c==0||c==1||c==5||c==6)
        {
           cout<<"c"; 
        }
        else
        {
            if(c==2)
            {
                int num=n%4;
                cout<<num2[num];
            }
            if(c==3)
            {
                int num=n%4;
                cout<<num3[num];
            }
            if(c==4)
            {
                int num=n%2;
                cout<<num4[num];
            }
            if(c==7)
            {
                int num=n%4;
                cout<<num7[num];
            }
            if(c==8)
            {
                int num=n%4;
                cout<<num8[num];
            }
            if(c==9)
            {
                int num=n%2;
                cout<<num9[num];
            }
        }
    }
    return 0;
}
