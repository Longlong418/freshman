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
	printf("                                                    人工智能212武晓龙\n"); 
	printf("*********************************\n");
	printf("*       学生管理系统            *\n");
	printf("*       1.输入学生数据          *\n");
	printf("*       2.查询界面              *\n");
	printf("*       3.删除学生信息          *\n");
	printf("*      	4.信息汇总              *\n");
	printf("*       5.修改学生数据          *\n");
	printf("*       6.退出程序              *\n");
	printf("*********************************\n");
	
 } 
 int choice()
 {
 	printf("请选择你要执行的操作");
 	int a;
	 scanf("%d",&a);
	 if(a<1||a>6)
	 {
	 	printf("请输入正确的数字");
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
					printf("请输入姓名：");
					scanf("%s",&nam);
					printf("\n请输入学号：");
					scanf("%d",&id);
					printf("\n请输入年龄:");
					scanf("%d",&Age);
					printf("\n请输入成绩：");
					scanf("%d",&Grade);
					printf("\n请输入性别(男为1，女为0)：");
					scanf("%d",&Sex);
					while(Sex!=1&&Sex!=0)
					{
						printf("请输入正确性别：");
						scanf("%d",&Sex);
	 				}
					input(head,nam,id,Age,Sex,Grade);
				
			}break;
			case 2:
			{
				system("cls");
				printf("1.按学号查找\n");
				printf("2.按姓名查找\n");
				printf("3.按成绩查找\n");
				printf("4.性别查找(人数)\n");
				printf("5.返回");
				while(1)
				{
				int a=0;
				scanf("%d",&a);
				if(a==1)
				{
					printf("请输入学号:\n"); 
					int num;
					scanf("%d",&num);
					seek1(head,num);
					printf("\n");
				 } 
				 if(a==2)
				 {
				 	printf("请输入姓名\n");
				 	char name[20];
				 	scanf("%s",&name);
				 	seek2(head,name);
				 	printf("\n");
				  } 
				 else if(a==3)
				 {
				 	printf("请输入成绩\n");
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
				  	printf("请输入正确的数字\n"); 
				  }
				  
			}
			
			 }break;
			 case 3: 
			 {
			 	system("cls");
			 	printf("1.按照学号删除\n");
			 	printf("2.按照姓名删除\n");
			 	printf("3.返回\n");
			 		while(1)
				{
				int a=0;
				printf("请输入数字：");
				scanf("%d",&a);
				if(a==1)
				{
					printf("请输入学号:\n"); 
					int num;
					scanf("%d",&num);
					del1(head,num);
					printf("\n");
				 } 
				 else if(a==2)
				 {
				 	printf("请输入姓名:\n");
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
				  	printf("请输入正确的数字\n");
				  }
				  
				}
			 	
				 
				  
			 }break;
			 case 4:
			 	{
			 		int num;
			 		system("cls");
				 	printf("1.按照学号排序\n");
			 		printf("2.按照成绩排序\n");
			 		printf("3.信息汇总\n"); 
			 		printf("4.返回\n");
			 		while(1)
			 		{
			 		printf("请输入数字:"); 
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
				 	printf("1.按照学号修改\n");
			 		printf("2.按照姓名修改\n");
			 		printf("3.返回\n");
					while(1)
			 		{
			 		printf("请输入数字:"); 
			 		scanf("%d",&num); 
			 		if(num==1)
			 		{
			 			int id;
			 			printf("请输入学号:");
			 			scanf("%d",&id);
			 			change1(head,id);
			 			printf("\n");
			 			
					 }
					 else if(num==2)
					 {
					 	char name[20];
					 	printf("请输入姓名:");
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
					 	printf("请输入正确的数字\n");
					 }
					}
					
					
				 }break;
				 case 6:
				 	{
				 		printf("\n感谢您的使用！");
						exit(0); 
				
					}break; 
				default:printf("输入错误\n"); break;
			 
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
			printf("%s\n%d\n%d\n男\n%d",a->name,a->ID,a->age,a->grade);
			if(a->sex==0)
			printf("%s\n%d\n%d\n女\n%d",a->name,a->ID,a->age,a->grade);
			x=1;
		}
		a=a->next;
	}
	if(x==0)
	{
		printf("查无此人\n");
		printf("请重新输入数字\n"); 
	}
	
		
}
void seek2(node* head,char* name)
{
	node* b=head->next;
	while(strcmp(b->name, name)!=0)
	{
		
		if(b->next==NULL)
		{
			printf("查无此人\n");
			printf("请重新输入数字\n"); 
			return;
		}
		b=b->next;
	}
	
	if(b->sex==1)
			printf("%s\n%d\n%d\n男\n%d",b->name,b->ID,b->age,b->grade);	
	if(b->sex==0)
			printf("%s\n%d\n%d\n女\n%d",b->name,b->ID,b->age,b->grade);
		
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
			printf("%s\n%d\n%d\n男\n%d\n",x->name,x->ID,x->age,x->grade);	
			if(x->sex==0)
			printf("%s\n%d\n%d\n女\n%d\n",x->name,x->ID,x->age,x->grade);
			h=1;
		}
		x=x->next;
	}
	if(h==0)
	{
		printf("无此成绩的人"); 
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
	printf("男生=%d人\n",b);
	printf("女生=%d人",g);
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
			printf("删除成功!");
			return;	
		}
		a=a->next;
		b=b->next;
	} 
	printf("该学号不存在！");
		
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
			printf("删除成功!");
			return;	
		}
		a=a->next;
		b=b->next;
	}
	printf("该姓名不存在！");


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
			printf("%s %d %d 男 %d\n",h->name,h->ID,h->age,h->grade);	
			if(h->sex==0)
			printf("%s %d %d 女 %d\n",h->name,h->ID,h->age,h->grade);
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
			printf("%s %d %d 男 %d\n",h->name,h->ID,h->age,h->grade);	
			if(h->sex==0)
			printf("%s %d %d 女 %d\n",h->name,h->ID,h->age,h->grade);
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
		printf("%s %d %d 男 %d\n",h->name,h->ID,h->age,h->grade);	
		if(h->sex==0)
		printf("%s %d %d 女 %d\n",h->name,h->ID,h->age,h->grade);
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
		printf("查无此人");
		system("pause");
		return; 
	}
	printf("请输入修改后的姓名：");
	scanf("%s",&newname);
	strcpy(a->name,newname);
	printf("\n请输入修改后的学号：");
	scanf("%d",&newid);
	a->ID=newid;
	printf("\n请输入修改后的:年龄");
	scanf("%d",&newage);
	a->age=newage;
	printf("\n请输入修改后的成绩：");
	scanf("%d",&newgrade);
	a->grade=newgrade; 
	printf("\n请输入修改后的性别(男为1，女为0)：");
	scanf("%d",&newsex);
	while(newsex!=1&&newsex!=0)
	{
		printf("请输入正确性别：");
		scanf("%d",&newsex);
	 } 
	a->sex=newsex;
	printf("修改成功!\n"); 
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
		printf("查无此人");
		system("pause");
		return; 
	}
	printf("\n请输入修改后的姓名：");
	scanf("%s",&newname);
	strcpy(a->name,newname);
	printf("\n请输入修改后的学号：");
	scanf("%d",&newid);
	a->ID=newid; 
	printf("\n请输入修改后的:年龄");
	scanf("%d",&newage);
	a->age=newage;
	printf("\n请输入修改后的成绩：");
	scanf("%d",&newgrade);
	a->grade=newgrade; 
	printf("\n请输入修改后的性别(男为1，女为0)：");
	scanf("%d",&newsex);
		while(newsex!=1&&newsex!=0)
	{
		printf("请输入正确性别：");
		scanf("%d",&newsex);
	 } 
	a->sex=newsex;
	printf("修改成功!\n"); 
	system("pause");
}
