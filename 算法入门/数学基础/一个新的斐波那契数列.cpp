/*һ���µ�쳲���������
����

���ڣ���һ���µ�쳲��������У��������£�

F(0) = 7,

F(1) = 11,

F(n) = F(n-1) + F(n-2) (n>=2).


����
��������������������ÿ�������������һ������n(n < 1,000,000).


���
���F(n)�ܹ���3�����������"yes"�����������"no"��


�������� 1 

0
1
2
3
4
5
������� 1

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



