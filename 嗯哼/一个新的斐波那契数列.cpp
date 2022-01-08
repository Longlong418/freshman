/*一个新的斐波那契数列
描述

现在，有一个新的斐波那契数列，定义如下：

F(0) = 7,

F(1) = 11,

F(n) = F(n-1) + F(n-2) (n>=2).


输入
输入包含多组测试样例，每组测试样例包含一个整数n(n < 1,000,000).


输出
如果F(n)能够被3整除，请输出"yes"，否则请输出"no"。


输入样例 1 

0
1
2
3
4
5
输出样例 1

no
no
yes
no
no
no*/
#include<iostream>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		
		if(n%8==2||n%8==6)
		{
			cout<<"yes"<<endl;
		}
		else
		{
			cout<<"no"<<endl;
		}
	}
	return 0;
	
}



