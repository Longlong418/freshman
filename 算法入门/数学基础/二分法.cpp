/*
�ⷽ��
����

�������� 8*x^4 + 7*x^3 + 2*x^2 + 3*x + 6 == Y�������x��[0,100]��Χ�ڵĽ⡣


����
��������������һ��������T(1<=T<=100)����ʾ��T��������ݡ�

������T�У�ÿ�а���һ��ʵ��Y ( fabs(Y) <= 1e10 )��


���
����㲢��������ڷ�Χ[0,100]�ڵĽ⣬�����ȷ��С�����4λ��

����޽⣬���������No solution!��


�������� 1 

2
100
-4
������� 1

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
