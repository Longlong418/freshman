#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct node{
		char name[20];
		int ID;
		int age;
		int sex;
		int grade;
		struct node* next;
}node;
void input(node* head,char *nam,int id,int Age,int Sex,int Grade);
void menu();
int choice();
void work(node* head,node* tail);
void seek1(node* head,int num);
void seek2(node* head,char* name);
void seek3(node* head,int grade);
void seek4(node* head,int b,int g);
void del1(node* head,int num);
void del2(node* head,char* name);
void print1(node* head);
void print2(node* head);
void print3(node* head);
void change1(node* head,int id);
void change2(node* head,char*name);
int main()
{	
	menu();
	node* head=(node*)malloc(sizeof(node));
	head->next=NULL;
	node* tail=head;
	while(1)
	{
		work(head,tail);
	}
	
}
void menu()
{
	printf("                                                    �˹�����212������\n"); 
	printf("*********************************\n");
	printf("*       ѧ������ϵͳ            *\n");
	printf("*       1.����ѧ������          *\n");
	printf("*       2.��ѯ����              *\n");
	printf("*       3.ɾ��ѧ����Ϣ          *\n");
	printf("*      	4.��Ϣ����              *\n");
	printf("*       5.�޸�ѧ������          *\n");
	printf("*       6.�˳�����              *\n");
	printf("*********************************\n");
	
 } 
 int choice()
 {
 	printf("��ѡ����Ҫִ�еĲ���");
 	int a;
	 scanf("%d",&a);
	 if(a<1||a>6)
	 {
	 	printf("��������ȷ������");
		 scanf("%d",&a); 
	 	
	  } 
	  return a;
 	
 }
void work(node* head,node* tail)
{
	int num=choice();
	switch(num)
	{
		case 1:
			{
					char nam[20];
					int id;
					int Age;
					int Sex;
					int Grade;
					printf("������������");
					scanf("%s",&nam);
					printf("\n������ѧ�ţ�");
					scanf("%d",&id);
					printf("\n����������:");
					scanf("%d",&Age);
					printf("\n������ɼ���");
					scanf("%d",&Grade);
					printf("\n�������Ա�(��Ϊ1��ŮΪ0)��");
					scanf("%d",&Sex);
					while(Sex!=1&&Sex!=0)
					{
						printf("��������ȷ�Ա�");
						scanf("%d",&Sex);
	 				}
					input(head,nam,id,Age,Sex,Grade);
				
			}break;
			case 2:
			{
				system("cls");
				printf("1.��ѧ�Ų���\n");
				printf("2.����������\n");
				printf("3.���ɼ�����\n");
				printf("4.�Ա����(����)\n");
				printf("5.����");
				while(1)
				{
				int a=0;
				scanf("%d",&a);
				if(a==1)
				{
					printf("������ѧ��:\n"); 
					int num;
					scanf("%d",&num);
					seek1(head,num);
					printf("\n");
				 } 
				 if(a==2)
				 {
				 	printf("����������\n");
				 	char name[20];
				 	scanf("%s",&name);
				 	seek2(head,name);
				 	printf("\n");
				  } 
				 else if(a==3)
				 {
				 	printf("������ɼ�\n");
				 	int grade; 
				 	scanf("%d",&grade);
				 	seek3(head,grade);
				 	printf("\n");
				  } 
				  else if(a==4)
				 {
				 	int b,g;
				 	seek4(head,b,g);
				 	printf("\n");
				 	
				  } 
				  else if(a==5)
				  {
				  	system("cls");
				  	menu();
				  	break;
				  }
				  else
				  {
				  	printf("��������ȷ������\n"); 
				  }
				  
			}
			
			 }break;
			 case 3: 
			 {
			 	system("cls");
			 	printf("1.����ѧ��ɾ��\n");
			 	printf("2.��������ɾ��\n");
			 	printf("3.����\n");
			 		while(1)
				{
				int a=0;
				printf("���������֣�");
				scanf("%d",&a);
				if(a==1)
				{
					printf("������ѧ��:\n"); 
					int num;
					scanf("%d",&num);
					del1(head,num);
					printf("\n");
				 } 
				 else if(a==2)
				 {
				 	printf("����������:\n");
				 	char name[20];
				 	scanf("%s",&name);
				 	del2(head,name);
				 	printf("\n");
				  } 
				  else if(a==3)
				  {
				  	system("cls");
				  	menu();
				  	break;
				  }
				  else
				  {
				  	printf("��������ȷ������\n");
				  }
				  
				}
			 	
				 
				  
			 }break;
			 case 4:
			 	{
			 		int num;
			 		system("cls");
				 	printf("1.����ѧ������\n");
			 		printf("2.���ճɼ�����\n");
			 		printf("3.��Ϣ����\n"); 
			 		printf("4.����\n");
			 		while(1)
			 		{
			 		printf("����������:"); 
			 		scanf("%d",&num); 
			 		if(num==1)
			 		{
			 			print1(head);
			 			printf("\n");
			 			
					 }
					 if(num==2)
					 {
					 	print2(head);
					 	printf("\n");
					 }
					 if(num==3)
					 {
					 	print3(head);
					 }
					 if(num=4)
					 {
					 	system("cls");
				  		menu();
				  		break;
					 }
					}
			 		
				 }break;
				case 5:
				{
					int num;
			 		system("cls");
				 	printf("1.����ѧ���޸�\n");
			 		printf("2.���������޸�\n");
			 		printf("3.����\n");
					while(1)
			 		{
			 		printf("����������:"); 
			 		scanf("%d",&num); 
			 		if(num==1)
			 		{
			 			int id;
			 			printf("������ѧ��:");
			 			scanf("%d",&id);
			 			change1(head,id);
			 			printf("\n");
			 			
					 }
					 else if(num==2)
					 {
					 	char name[20];
					 	printf("����������:");
					 	scanf("%s",&name);
					 	change2(head,name);
					 	printf("\n");
					 }
					 else if(num==3)
					 {
					 	system("cls");
				  		menu();
				  		break;
					 }
					 else
					 {
					 	printf("��������ȷ������\n");
					 }
					}
					
					
				 }break;
				 case 6:
				 	{
				 		printf("\n��л����ʹ�ã�");
						exit(0); 
				
					}break; 
				default:printf("�������\n"); break;
			 
	}
}
void input(node* head,char* nam,int id,int Age,int Sex,int Grade)
{
	 
		node* newnode=(node*)malloc(sizeof(node));
	    strcpy(newnode->name,nam);
		newnode->ID=id;
		newnode->age=Age;
		newnode->sex=Sex; 
		newnode->grade=Grade; 
		newnode->next=NULL;
		node* temp=head;
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		newnode->next=NULL;
		temp->next=newnode;		
		
}
void seek1(node*head,int num)
{
	int x=0;
	node* a=head->next;
	while(a)
	{
		
		if(a->ID==num)
		{	
			if(a->sex==1)
			printf("%s\n%d\n%d\n��\n%d",a->name,a->ID,a->age,a->grade);
			if(a->sex==0)
			printf("%s\n%d\n%d\nŮ\n%d",a->name,a->ID,a->age,a->grade);
			x=1;
		}
		a=a->next;
	}
	if(x==0)
	{
		printf("���޴���\n");
		printf("��������������\n"); 
	}
	
		
}
void seek2(node* head,char* name)
{
	node* b=head->next;
	while(strcmp(b->name, name)!=0)
	{
		
		if(b->next==NULL)
		{
			printf("���޴���\n");
			printf("��������������\n"); 
			return;
		}
		b=b->next;
	}
	
	if(b->sex==1)
			printf("%s\n%d\n%d\n��\n%d",b->name,b->ID,b->age,b->grade);	
	if(b->sex==0)
			printf("%s\n%d\n%d\nŮ\n%d",b->name,b->ID,b->age,b->grade);
		
}
void seek3(node* head,int grade)
{
	int h=0;
	node* x=head->next;
	while(x)
	{
		if(x->grade==grade)
		{
			if(x->sex==1)
			printf("%s\n%d\n%d\n��\n%d\n",x->name,x->ID,x->age,x->grade);	
			if(x->sex==0)
			printf("%s\n%d\n%d\nŮ\n%d\n",x->name,x->ID,x->age,x->grade);
			h=1;
		}
		x=x->next;
	}
	if(h==0)
	{
		printf("�޴˳ɼ�����"); 
	}
}
void seek4(node* head,int b,int g)
{
	b=0;
	g=0;
	node* a=head->next;
	node* c=head->next;
	while(a)
	{
		if(a->sex==1)
		b++;
		a=a->next;
	}
	while(c)
	{
		if(c->sex==0)
		g++;
		c=c->next;
	}
	printf("����=%d��\n",b);
	printf("Ů��=%d��",g);
}
void del1(node* head,int num)
{
	node* a=head;
	node* b=head->next;
	while(b)
	{
		if(b->ID==num)
		{
			a->next=b->next;
			free(b);
			printf("ɾ���ɹ�!");
			return;	
		}
		a=a->next;
		b=b->next;
	} 
	printf("��ѧ�Ų����ڣ�");
		
}
void del2(node* head,char *name)
{
	node* a=head;
	node* b=head->next;
	while(b)
	{
		if(strcmp(b->name,name)==0)
		{	
			a->next=b->next;
			free(b);
			printf("ɾ���ɹ�!");
			return;	
		}
		a=a->next;
		b=b->next;
	}
	printf("�����������ڣ�");


}
void print1(node* head1)
{
	

	node* hed=head1;
	while(head1!=NULL)
	{
		node* q=head1;
		int minid=head1->ID;
		node* minID=NULL;
		while(q!=NULL) 
		{
			
			if(q->ID<minid)
			{
				minid=q->ID;
				minID=q;
			}
			q=q->next;
		}
			if(minID!=NULL)
			{
				int tID,tgrade,tage,tsex;
				char tname[20]={'0'};
				strcpy(tname,head1->name);
				strcpy(head1->name,minID->name);
				strcpy(minID->name,tname);
				tID=head1->ID;
				head1->ID=minID->ID;
				minID->ID=tID;
				tgrade=head1->grade;
				head1->grade=minID->grade;
				minID->grade=tgrade;
				tage=head1->age;
				head1->age=minID->age;
				minID->age=tage;
				tsex=head1->sex;
				head1->sex=minID->sex;
				minID->sex=tsex;
				
	
			}
			head1=head1->next;
		}
		
	
	node* h=hed;
	while(h)
	{
			if(h->sex==1)
			printf("%s %d %d �� %d\n",h->name,h->ID,h->age,h->grade);	
			if(h->sex==0)
			printf("%s %d %d Ů %d\n",h->name,h->ID,h->age,h->grade);
			h=h->next;	
	}
	system("pause");
	
	
}
void print2(node* head1)
{
	node* hed=head1;
	while(head1!=NULL)
	{
		node* q=head1;
		int minid=head1->grade;
		node* minID=NULL;
		while(q!=NULL) 
		{
			
			if(q->grade>minid)
			{
				minid=q->grade;
				minID=q;
			}
			q=q->next;
		}
			if(minID!=NULL)
			{
				int tID,tgrade,tage,tsex;
				char tname[20]={'0'};
				strcpy(tname,head1->name);
				strcpy(head1->name,minID->name);
				strcpy(minID->name,tname);
				tID=head1->ID;
				head1->ID=minID->ID;
				minID->ID=tID;
				tgrade=head1->grade;
				head1->grade=minID->grade;
				minID->grade=tgrade;
				tage=head1->age;
				head1->age=minID->age;
				minID->age=tage;
				tsex=head1->sex;
				head1->sex=minID->sex;
				minID->sex=tsex;
				
	
			}
			head1=head1->next;
		}
		
	
	node* h=hed;
	while(h)
	{
			if(h->sex==1)
			printf("%s %d %d �� %d\n",h->name,h->ID,h->age,h->grade);	
			if(h->sex==0)
			printf("%s %d %d Ů %d\n",h->name,h->ID,h->age,h->grade);
			h=h->next;	
	}
	system("pause");
	

}
void print3(node* head)
{
	node* h=head->next;
	while(h)
	{
		if(h->sex==1)
		printf("%s %d %d �� %d\n",h->name,h->ID,h->age,h->grade);	
		if(h->sex==0)
		printf("%s %d %d Ů %d\n",h->name,h->ID,h->age,h->grade);
		h=h->next;
	}
	system("pause");
	
}
void change1(node* head,int id)
{
	int x=0;
	char newname[20];
	int newid;
	int newage;
	int newgrade;
	int newsex;
	node* a=head->next;
	while(a)
	{
		if(a->ID==id)
		{
			x=1;
			break;	
		}
		
		a=a->next;
		
	}
	if(x==0)
	{
		printf("���޴���");
		system("pause");
		return; 
	}
	printf("�������޸ĺ��������");
	scanf("%s",&newname);
	strcpy(a->name,newname);
	printf("\n�������޸ĺ��ѧ�ţ�");
	scanf("%d",&newid);
	a->ID=newid;
	printf("\n�������޸ĺ��:����");
	scanf("%d",&newage);
	a->age=newage;
	printf("\n�������޸ĺ�ĳɼ���");
	scanf("%d",&newgrade);
	a->grade=newgrade; 
	printf("\n�������޸ĺ���Ա�(��Ϊ1��ŮΪ0)��");
	scanf("%d",&newsex);
	while(newsex!=1&&newsex!=0)
	{
		printf("��������ȷ�Ա�");
		scanf("%d",&newsex);
	 } 
	a->sex=newsex;
	printf("�޸ĳɹ�!\n"); 
	system("pause");
	
	

	
}
void change2(node* head,char*name)
{
	int x=0;
	char newname[20];
	int newid;
	int newage;
	int newgrade;
	int newsex;
	node* a=head->next;
	while(a)
	{
		if(strcmp(a->name,name)==0)
		{
			x=1;
			break;
		}
		a=a->next;
	}
	if(x==0)
	{
		printf("���޴���");
		system("pause");
		return; 
	}
	printf("\n�������޸ĺ��������");
	scanf("%s",&newname);
	strcpy(a->name,newname);
	printf("\n�������޸ĺ��ѧ�ţ�");
	scanf("%d",&newid);
	a->ID=newid; 
	printf("\n�������޸ĺ��:����");
	scanf("%d",&newage);
	a->age=newage;
	printf("\n�������޸ĺ�ĳɼ���");
	scanf("%d",&newgrade);
	a->grade=newgrade; 
	printf("\n�������޸ĺ���Ա�(��Ϊ1��ŮΪ0)��");
	scanf("%d",&newsex);
		while(newsex!=1&&newsex!=0)
	{
		printf("��������ȷ�Ա�");
		scanf("%d",&newsex);
	 } 
	a->sex=newsex;
	printf("�޸ĳɹ�!\n"); 
	system("pause");
}
