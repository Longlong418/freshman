#include"tool.h"
void seek_grade(node* head, char* grade)
{
	
	if(head->next==NULL)
	{
		printf("��ǰ��ѧ��");
		return ;
	} 
	char chinese[6]="����";
	char math[6]="��ѧ";
	char english[6]="Ӣ��";
	char c[6]="c����";
	char c2[6]="C����";
	char pe[6]="����";
	if(strcmp(grade,chinese)!=0&&strcmp(grade,math)!=0&&strcmp(grade,english)!=0&&strcmp(grade,c)!=0&&strcmp(grade,c2)!=0&&strcmp(grade,pe)!=0)
	{
		printf("��������ȷ��ѧ�ƣ�"); 
		return;
	}
	int max = 0;//�����жϱ��� 
	node* x = head->next;//����ָ��
	if(strcmp(grade,chinese)==0)//���� 
	{
		while(x)
		{
			if(x->chin_grade>max)
			{
				max=x->chin_grade;
			}
			x=x->next;
		}
		printf("____________________________________________________________________________________________________________________\n");
		printf("|   ѧ��   | ���� |     ���֤��     |�Ա�| ���� |   ��ͥסַ   |���ĳɼ�|��ѧ�ɼ�|Ӣ��ɼ�|c���Գɼ�|�����ɼ�|����|\n");
		x=head->next;
		while(x)
		{
			if(x->chin_grade==max)
			{
				printf("____________________________________________________________________________________________________________________\n");
				printf("%10d|%6s|%18s|%4s|%6s|%14s|%8d|%8d|%8d|%8d|%8d|%4d|\n",x->ID,x->name,x->id_status,x->sex,x->nation,\
					x->address,x->chin_grade,x->math_grade,x->english_grade,x->c_grade,x->pe_grade,x->age);	
			}
			x=x->next;
		} 
	}	
	if(strcmp(grade,math)==0)//��ѧ 
	{
		while(x)
		{
			if(x->math_grade>max)
			{
				max=x->math_grade;
			}
			x=x->next;
		}
		printf("____________________________________________________________________________________________________________________\n");
		printf("|   ѧ��   | ���� |     ���֤��     |�Ա�| ���� |   ��ͥסַ   |���ĳɼ�|��ѧ�ɼ�|Ӣ��ɼ�|c���Գɼ�|�����ɼ�|����|\n");
		x=head->next;
		while(x)
		{
			if(x->math_grade==max)
			{
				printf("____________________________________________________________________________________________________________________\n");
				printf("%10d|%6s|%18s|%4s|%6s|%14s|%8d|%8d|%8d|%8d|%8d|%4d|\n",x->ID,x->name,x->id_status,x->sex,x->nation,\
					x->address,x->chin_grade,x->math_grade,x->english_grade,x->c_grade,x->pe_grade,x->age);	
			}
			x=x->next;
		} 
	}
	if(strcmp(grade,english)==0)//Ӣ�� 
	{
		while(x)
		{
			if(x->english_grade>max)
			{
				max=x->english_grade;
			}
			x=x->next;
		}
		printf("____________________________________________________________________________________________________________________\n");
		printf("|   ѧ��   | ���� |     ���֤��     |�Ա�| ���� |   ��ͥסַ   |���ĳɼ�|��ѧ�ɼ�|Ӣ��ɼ�|c���Գɼ�|�����ɼ�|����|\n");
		x=head->next;
		while(x)
		{
			if(x->math_grade==max)
			{
				printf("____________________________________________________________________________________________________________________\n");
				printf("%10d|%6s|%18s|%4s|%6s|%14s|%8d|%8d|%8d|%8d|%8d|%4d|\n",x->ID,x->name,x->id_status,x->sex,x->nation,\
					x->address,x->chin_grade,x->math_grade,x->english_grade,x->c_grade,x->pe_grade,x->age);	
			}
			x=x->next;
		} 
	}
	if(strcmp(grade,c)==0||strcmp(grade,c2)==0)//c���� 
	{
		while(x)
		{
			if(x->c_grade>max)
			{
				max=x->c_grade;
			}
			x=x->next;
		}
		printf("____________________________________________________________________________________________________________________\n");
		printf("|   ѧ��   | ���� |     ���֤��     |�Ա�| ���� |   ��ͥסַ   |���ĳɼ�|��ѧ�ɼ�|Ӣ��ɼ�|c���Գɼ�|�����ɼ�|����|\n");
		x=head->next;
		while(x)
		{
			if(x->c_grade==max)
			{
				printf("____________________________________________________________________________________________________________________\n");
				printf("%10d|%6s|%18s|%4s|%6s|%14s|%8d|%8d|%8d|%8d|%8d|%4d|\n",x->ID,x->name,x->id_status,x->sex,x->nation,\
					x->address,x->chin_grade,x->math_grade,x->english_grade,x->c_grade,x->pe_grade,x->age);	
			}
			x=x->next;
		} 
	}
	if(strcmp(grade,pe)==0)//���� 
	{
		while(x)
		{
			if(x->pe_grade>max)
			{
				max=x->pe_grade;
			}
			x=x->next;
		}
		printf("____________________________________________________________________________________________________________________\n");
		printf("|   ѧ��   | ���� |     ���֤��     |�Ա�| ���� |   ��ͥסַ   |���ĳɼ�|��ѧ�ɼ�|Ӣ��ɼ�|c���Գɼ�|�����ɼ�|����|\n");
		x=head->next;
		while(x)
		{
			if(x->pe_grade==max)
			{
				printf("____________________________________________________________________________________________________________________\n");
				printf("%10d|%6s|%18s|%4s|%6s|%14s|%8d|%8d|%8d|%8d|%8d|%4d|\n",x->ID,x->name,x->id_status,x->sex,x->nation,\
					x->address,x->chin_grade,x->math_grade,x->english_grade,x->c_grade,x->pe_grade,x->age);	
			}
			x=x->next;
		} 
	}				
}
void seek_name(node* head, char* name)
{
	int cout=0;
	int h = 0;//�����жϱ��� 
	node* x = head->next;//����ָ�� 
	printf("____________________________________________________________________________________________________________________\n");
	printf("|   ѧ��   | ���� |     ���֤��     |�Ա�| ���� |   ��ͥסַ   |���ĳɼ�|��ѧ�ɼ�|Ӣ��ɼ�|c���Գɼ�|�����ɼ�|����|\n");
	while (x)
	{
		if (strcmp(x->name,name)==0)
		{
			
			printf("____________________________________________________________________________________________________________________\n");
			printf("%10d|%6s|%18s|%4s|%6s|%14s|%8d|%8d|%8d|%8d|%8d|%4d|\n",x->ID,x->name,x->id_status,x->sex,x->nation,\
				x->address,x->chin_grade,x->math_grade,x->english_grade,x->c_grade,x->pe_grade,x->age);	
			h = 1;
			cout++;
		}
		x = x->next;
	}
	if(h==1)
	{
		printf("��%d��",cout);
	}
	if (h == 0)
	{
		printf("���޴���");
	}
}
void seek_nation(node* head,char* nation)
{
	int cout=0; 
	int h = 0;//�����жϱ��� 
	node* x = head->next;//����ָ�� 
	printf("____________________________________________________________________________________________________________________\n");
	printf("|   ѧ��   | ���� |     ���֤��     |�Ա�| ���� |   ��ͥסַ   |���ĳɼ�|��ѧ�ɼ�|Ӣ��ɼ�|c���Գɼ�|�����ɼ�|����|\n");
	while (x)
	{
		if (strcmp(x->nation,nation)==0)
		{
			
			printf("____________________________________________________________________________________________________________________\n");
			printf("%10d|%6s|%18s|%4s|%6s|%14s|%8d|%8d|%8d|%8d|%8d|%4d|\n",x->ID,x->name,x->id_status,x->sex,x->nation,\
				x->address,x->chin_grade,x->math_grade,x->english_grade,x->c_grade,x->pe_grade,x->age);	
			h = 1;
			cout++;
		}
		x = x->next;
	}
	if (h==1)
	{
		printf("%s����%d����",nation,cout);
	}
	if (h == 0)
	{
		printf("û�д��������");
	}
	
}
void seek_id(node* head, int num)
{
	int h = 0;//�����жϱ��� 
	node* x = head->next;//����ָ�� 
	printf("____________________________________________________________________________________________________________________\n");
	printf("|   ѧ��   | ���� |     ���֤��     |�Ա�| ���� |   ��ͥסַ   |���ĳɼ�|��ѧ�ɼ�|Ӣ��ɼ�|c���Գɼ�|�����ɼ�|����|\n");
	while (x)
	{
		if (x->ID == num)
		{
			
			printf("____________________________________________________________________________________________________________________\n");
			printf("%10d|%6s|%18s|%4s|%6s|%14s|%8d|%8d|%8d|%8d|%8d|%4d|\n",x->ID,x->name,x->id_status,x->sex,x->nation,\
				x->address,x->chin_grade,x->math_grade,x->english_grade,x->c_grade,x->pe_grade,x->age);	
			h = 1;
		}
		x = x->next;
	}
	if (h == 0)
	{
		printf("���޴���");
	}
	
}
void seek_num(node* head)
{
	int b = 0;//�������� 
	int g = 0;//Ů������ 
	char boy[3]="��";
	char girl[3]="Ů"; 
	node* a = head->next;//����ָ�� 
	node* c = head->next;//����ָ�� 
	while (a)
	{
		if (strcmp(a->sex,boy)==0)
			b++;
		a = a->next;
	}
	while (c)
	{
		if (strcmp(c->sex,girl)==0)
			g++;
		c = c->next;
	}
	printf("����=%d��\n", b);
	printf("Ů��=%d��\n", g);
	printf("������=%d��\n", g + b);
}

