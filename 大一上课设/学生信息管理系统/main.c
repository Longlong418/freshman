#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<Windows.h>
#include"tool.h"

int count=0;
int main()
{
	
	system("color F3");
	node* head = (node*)malloc(sizeof(node));//����ͷ��� 
	head->next = NULL;
	load_data(head);//��ȡ�ļ�
	int u=4;
	printf("���������У����Ե�");
	while(u>=0)
	{
		Sleep(500);
		printf("---------");
		u--;	
	}
	printf("�������\n");
	
	menu();
	while (1)
	{
		work(head);
	}
	
	return 0;
}
