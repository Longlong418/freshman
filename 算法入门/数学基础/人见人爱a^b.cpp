/*人见人爱A^B
描述

求A^B的最后三位数表示的整数。

说明：A^B的含义是“A的B次方”


输入
输入数据包含多个测试实例，每个实例占一行，由两个正整数A和B组成（1<=A,B<=10000），如果A=0, B=0，则表示输入数据的结束，不做处理。


输出
对于每个测试实例，请输出A^B的最后三位表示的整数，每个输出占一行。


输入样例 1 

2 3
12 6
6789 10000
0 0
输出样例 1

8
984
1*/
#include<stdio.h>
int main()
{
 int a,n,m;
 while(scanf("%d%d",&n,&m)!=EOF)
 {
 	 if(n==0&&m==0)
  	 break;
  	if(n==0&&m!=0)
  	 printf("0\n");
 	 if(n!=0&&m==0)
  	 printf("1\n");
  	if(n!=0&&m!=0)
  		{
      		int s=n;
      		a=m-1;
     		 while(a--)
    		 {
       			 s=s*n;
        		s=s%1000;
     		}
     printf("%d\n",s);
 		 }
 }
 	return 0;
}

