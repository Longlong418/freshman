#include"tool.h"
void change_id(node* head, int id)
{
	int x=0;
	node* a = head->next;
	while (a)
	{
		if (a->ID == id)
		{
			x = 1;
			break;
		}
		
		a = a->next;
		
	}
	if (x == 0)
	{
		printf("���޴���");
		system("pause");
		return;
	} 
	
	printf("�������޸ĺ��������");
	scanf("%s", a->name);
	printf("�������޸ĺ��ѧ��:\n");
	int c=scanf("%d", &a->ID);
	while (1)
	{
		fflush(stdin);
		int n = a->ID;
		int cout = 0;
		while (n != 0)
		{
			n /= 10;
			cout++;
		}
		if(c==1)
		{
			if (cout == 10)
				break;
			else{
				printf("��������ȷλ��ѧ��!\n");
				c=scanf("%d",&a->ID);
				
			}
		}
		else{
			printf("�������������͵�ѧ��!");
			c=scanf("%d", &a->ID);
			
		}
	} 
	printf("\n���������֤��:");
	scanf("%s",a->id_status);
	while(1)
	{
		if(strlen(a->id_status)==18)
		{
			break;
		}
		else
		{
			printf("��������ȷ�����֤��!\n");
			scanf("%s", a->id_status);
			
		}
	}
	printf("\n����������:");
	scanf("%s",a->nation);
	printf("\n�������Ա�:");
	scanf("%s",a->sex);
	char boy[10]="��";
	char girl[10]="Ů";		 
	while (1)
	{
		if(strcmp(a->sex,boy)==0||strcmp(a->sex,girl)==0)
			break;
		else
		{			
			printf("\n��������ȷ�Ա�");
			scanf("%s", a->sex);
		}
	} 
	printf("\n�������ͥסַ:");
	scanf("%s",a->address);
	int h;
	printf("\n���������ĳɼ�:");
	h=scanf("%d", &a->chin_grade);
	while(1)
	{
		fflush(stdin);
		if(h==1)
		{
			if(a->chin_grade>=0&&a->chin_grade<=100)
			{
				break;
			}
			printf("\n������0-100�ķ���!\n");
			h=scanf("%d", &a->chin_grade);
		}
		else{
			printf("\n��������������!");
			h=scanf("%d", &a->chin_grade);
		}
		
	}	
	h=0;
	printf("\n��������ѧ�ɼ�:");
	h=scanf("%d", &a->math_grade);
	while(1)
	{
		fflush(stdin);
		if(h==1)
		{
			if(a->math_grade>=0&&a->math_grade<=100)
			{
				break;
			}
			
			printf("\n������0-100�ķ���!");
			h=scanf("%d", &a->math_grade);
		}
		else{
			printf("\n��������������!");
			h=scanf("%d",&a->math_grade);
		}
	}
	h=0;
	printf("\n������Ӣ��ɼ�:");
	h=scanf("%d", &a->english_grade);
	while(1)
	{	
		fflush(stdin);
		if(h==1){
			
			if(a->english_grade>=0&&a->english_grade<=100)
			{
				break;
			}
			printf("\n������0-100�ķ���!\n");
			h=scanf("%d", &a->english_grade);
		}
		else{
			printf("\n��������������!");
			h=scanf("%d", &a->english_grade);
		}
	}
	h=0;
	printf("\n������c���Գɼ�:");
	h=scanf("%d", &a->c_grade);
	while(1)
	{
		fflush(stdin);
		if(h==1)
		{
			
			
			if(a->c_grade>=0&&a->c_grade<=100)
			{
				break;
			}
			printf("\n������0-100�ķ���!\n");
			h=scanf("%d", &a->c_grade);
		}
		else{
			printf("\n��������������!");
			h=scanf("%d",&a->c_grade);
		}
		
	}	
	h=0;
	printf("\n�����������ɼ�:");
	h=scanf("%d", &a->pe_grade);
	while(1)
	{
		fflush(stdin);
		if(h==1)
		{
			if(a->pe_grade>=0&&a->pe_grade<=100)
			{
				break;
			}
			printf("\n������0-100�ķ���!\n");
			h=scanf("%d", &a->pe_grade);
		}
		else
		{
			printf("\n��������������!");
			h=scanf("%d",&a->pe_grade);
		}
	}
	h=0;
	printf("\n����������:");
	h=scanf("%d", &a->age);
	while(1)
	{
		fflush(stdin);
		if(h==1)
		{
			
			
			if(a->age>=0)
			{
				break;
			}
			printf("\n����������!\n");
			h=scanf("%d", &a->age);
		}
		else{
			printf("\n��������������!");
			h=scanf("%d",&a->age);
		}
		
	}		
	a->total_sore=a->chin_grade+a->math_grade+a->english_grade+a->c_grade+a->pe_grade;
	printf("\n�޸ĳɹ�!\n");
	system("pause");
}
void change_name(node* head, char* name)
{
	int x = 0,id;
	node* a = head->next;
	while (a)
	{
		if (strcmp(a->name, name) == 0)
		{
			x++;
		}
		a = a->next;
	}
	a=head->next;
	if(x==1)
	{
		while(a)
		{
		if (strcmp(a->name, name) == 0)
		{
			break;
		}
		a = a->next;
		}
		
	}
	if (x == 0)
	{
		printf("\n���޴���");
		system("pause");
		return;
	}
	
	if(x>1)
	{
		printf("��⵽��������ѧ������%dλ,��������Ҫ�޸�ѧ���ľ���ѧ��",x);
		scanf("%d",&id);
		while(a)
		{
			if(a->ID==id)
			{
				break;
			}
			a=a->next;
		}
		
	}
	
	printf("�������޸ĺ��������");
	scanf("%s", a->name);
	printf("�������޸ĺ��ѧ��:\n");
	int c=scanf("%d", &a->ID);
	while (1)
	{
		fflush(stdin);
		int n = a->ID;
		int cout = 0;
		while (n != 0)
		{
			n /= 10;
			cout++;
		}
		if(c==1)
		{
			if (cout == 10)
				break;
			else{
				printf("��������ȷλ��ѧ��!\n");
				c=scanf("%d",&a->ID);
				
			}
		}
		else{
			printf("�������������͵�ѧ��!");
			c=scanf("%d", &a->ID);
			
		}
	} 
	printf("\n���������֤��:");
	scanf("%s",a->id_status);
	while(1)
	{
		if(strlen(a->id_status)==18)
		{
			break;
		}
		else
		{
			printf("��������ȷ�����֤��!\n");
			scanf("%s", a->id_status);
			
		}
	}
	printf("\n����������:");
	scanf("%s",a->nation);
	printf("\n�������Ա�:");
	scanf("%s",a->sex);
	char boy[10]="��";
	char girl[10]="Ů";		 
	while (1)
	{
		if(strcmp(a->sex,boy)==0||strcmp(a->sex,girl)==0)
			break;
		else
		{			
			printf("\n��������ȷ�Ա�");
			scanf("%s", a->sex);
		}
	} 
	printf("\n�������ͥסַ:");
	scanf("%s",a->address);
	int h;
	printf("\n���������ĳɼ�:");
	h=scanf("%d", &a->chin_grade);
	while(1)
	{
		fflush(stdin);
		if(h==1)
		{
			if(a->chin_grade>=0&&a->chin_grade<=100)
			{
				break;
			}
			printf("\n������0-100�ķ���!\n");
			h=scanf("%d", &a->chin_grade);
		}
		else{
			printf("\n��������������!");
			h=scanf("%d", &a->chin_grade);
		}
		
	}	
	h=0;
	printf("\n��������ѧ�ɼ�:");
	h=scanf("%d", &a->math_grade);
	while(1)
	{
		fflush(stdin);
		if(h==1)
		{
			if(a->math_grade>=0&&a->math_grade<=100)
			{
				break;
			}
			
			printf("\n������0-100�ķ���!");
			h=scanf("%d", &a->math_grade);
		}
		else{
			printf("\n��������������!");
			h=scanf("%d",&a->math_grade);
		}
	}
	h=0;
	printf("\n������Ӣ��ɼ�:");
	h=scanf("%d", &a->english_grade);
	while(1)
	{	
		fflush(stdin);
		if(h==1){
			
			if(a->english_grade>=0&&a->english_grade<=100)
			{
				break;
			}
			printf("\n������0-100�ķ���!\n");
			h=scanf("%d", &a->english_grade);
		}
		else{
			printf("\n��������������!");
			h=scanf("%d", &a->english_grade);
		}
	}
	h=0;
	printf("\n������c���Գɼ�:");
	h=scanf("%d", &a->c_grade);
	while(1)
	{
		fflush(stdin);
		if(h==1)
		{
			
			
			if(a->c_grade>=0&&a->c_grade<=100)
			{
				break;
			}
			printf("\n������0-100�ķ���!\n");
			h=scanf("%d", &a->c_grade);
		}
		else{
			printf("\n��������������!");
			h=scanf("%d",&a->c_grade);
		}
		
	}	
	h=0;
	printf("\n�����������ɼ�:");
	h=scanf("%d", &a->pe_grade);
	while(1)
	{
		fflush(stdin);
		if(h==1)
		{
			if(a->pe_grade>=0&&a->pe_grade<=100)
			{
				break;
			}
			printf("\n������0-100�ķ���!\n");
			h=scanf("%d", &a->pe_grade);
		}
		else
		{
			printf("\n��������������!");
			h=scanf("%d",&a->pe_grade);
		}
	}
	h=0;
	printf("\n����������:");
	h=scanf("%d", &a->age);
	while(1)
	{
		fflush(stdin);
		if(h==1)
		{
			
			
			if(a->age>=0)
			{
				break;
			}
			printf("\n����������!\n");
			h=scanf("%d", &a->age);
		}
		else{
			printf("\n��������������!");
			h=scanf("%d",&a->age);
		}
		
	}		
	a->total_sore=a->chin_grade+a->math_grade+a->english_grade+a->c_grade+a->pe_grade;
	printf("\n�޸ĳɹ�!\n");
	system("pause");
}
void del_id(node* head, int num)
{
	node* a = head;
	node* b = head->next;
	while (b)
	{
		if (b->ID == num)
		{
			a->next = b->next;
			free(b);
			printf("ɾ���ɹ�!\n");
			count--;
			return;
		}
		a = a->next;
		b = b->next;
	}
	printf("��ѧ�Ų����ڣ�");
}
void del_name(node* head, char* name)
{
	node* a = head;
	node* b = head->next;
	int sum=0;//������
	while (b)
	{
		if (strcmp(b->name, name) == 0)
		{
			sum++;
		}
		b=b->next;
	}
	b=head->next;
	if(sum==1)
	{
		while (b)
		{
			if (strcmp(b->name, name) == 0)
			{
				a->next = b->next;
				free(b);
				count--;
				printf("\nɾ���ɹ�!");
				return;
			}
			a = a->next;
			b = b->next;
		}
	}
	if(sum==0)
	{
		printf("\n�����������ڣ�");
	}
	if(sum>1)
	{
		printf("��⵽��������ѧ������%dλ,��������Ҫɾ��ѧ���ľ���ѧ��",sum);
		int id;
		scanf("%d",&id);
		while (b)
		{
			if (b->ID==id)
			{
				a->next = b->next;
				free(b);
				count--;
				printf("\nɾ���ɹ�!");
				return;
			}
			a = a->next;
			b = b->next;
		}
	}
}
