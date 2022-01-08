/*
解方程
描述

给定方程 8*x^4 + 7*x^3 + 2*x^2 + 3*x + 6 == Y，请计算x在[0,100]范围内的解。


输入
输入数据首先是一个正整数T(1<=T<=100)，表示有T组测试数据。

接下来T行，每行包含一个实数Y ( fabs(Y) <= 1e10 )。


输出
请计算并输出方程在范围[0,100]内的解，结果精确到小数点后4位。

如果无解，则请输出“No solution!”


输入样例 1 

2
100
-4
输出样例 1

1.6152
No solution!*/
#include<iostream>
#include<math.h>
using namespace std;
double f(double x)
{
	double y=8*pow(x,4.0)+ 7*pow(x,3.0)+2*pow(x,2.0)+3*x+6;
	return y;
}
int main()
{
	int t;
	double y;
	cin>>t;
	while(t--)
	{
		cin>>y;
		double mid,h=0;
		if(y>=f(0)&&y<=f(100))
		{
			double left=0;
			double right=100.0;
			while(right-left>1e-8)
			{
				mid=(left+right)/2;
				if(f(mid)>y)
				{
					right=mid-1e-9;
				}
				else if(f(mid)<y)
				{
					left=mid+1e-9;
				}
				else
				{
					break;
				}
				
			}
		
			
			printf("%.4lf",(left+right)/2);
			
		
		}
		else
		{
			cout<<"No solution!";
		}
		
		
	 } 
	
	
	return 0;
 } 
