#include"tool.h"

void input(node* head, char*name,char* id_status ,char* nation,char* address,int ID, char* sex,\
	int math_grade,int chin_grade,int english_grade,int c_grade,int pe_grade,int total_sore,int age)//¼����ѧ��
{
	node* x=head;
	while(x->next!=NULL)
	{
		if(x->ID==ID)
		{
			printf("ѧ���Ѵ��ڣ�¼��ʧ��\n");
			return;
		}
		x=x->next;
	}
	
	node* newnode = (node*)malloc(sizeof(node));
	strcpy(newnode->name, name);
	strcpy(newnode->id_status,id_status);
	strcpy(newnode->nation,nation);
	strcpy(newnode->address,address);
	strcpy(newnode->sex,sex);
	newnode->ID=ID;
	newnode->math_grade=math_grade;
	newnode->chin_grade=chin_grade;
	newnode->english_grade=english_grade;
	newnode->c_grade=c_grade;
	newnode->pe_grade=pe_grade;
	newnode->total_sore=total_sore;
	newnode->age=age;
	newnode->next=NULL;
	node* temp = head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = newnode;
	newnode->next=NULL;
	count++;
	printf("��ӳɹ�!\n");
	
}

void work(node* head)
{
	char num;
	printf("��ѡ����Ҫִ�еĲ���:\n");
	scanf("%c", &num);
	switch (num)
	{
	case '1':
		{
			char name[20];//���� 
			char id_status[18];//���֤�� 
			char nation[16];//����
			char address[50];
			int id; //ѧ�� 
			int age;//���� 
			char sex[3];//�Ա� 
			int math_grade;//��ѧ�ɼ� 
			int chin_grade;//���ĳɼ� 
			int english_grade;//Ӣ��ɼ� 
			int c_grade;//c���Գɼ�  
			int pe_grade; //�����ɼ� 
			int total_sore;//�ܷ�
			int x;
			printf("������������");
			scanf("%s", name);
			printf("\n������10λ��ѧ��:");
			x=scanf("%d", &id);
			while (1)
			{
				fflush(stdin);
				int n = id;
				int cout = 0;
				while (n != 0)
				{
					n /= 10;
					cout++;
				}
				if(x==1)
				{
				if (cout == 10)
					break;
				else{
					printf("��������ȷλ��ѧ��!\n");
					x=scanf("%d", &id);
					
					}
				}
				else{
					printf("�������������͵�ѧ��!");
					x=scanf("%d", &id);
					
				}
			} 
			printf("\n���������֤��:");
			scanf("%s", id_status);
			while(1)
			{
				fflush(stdin);
				if(strlen(id_status)==18)
				{
					break;
				}
				else
				{
					printf("��������ȷ�����֤��!\n");
					scanf("%s", id_status);
					
				}
			}
			printf("\n����������:");
			scanf("%s",nation);
			printf("\n�������Ա�:");
			scanf("%s", sex);
			char boy[10]="��";
			char girl[10]="Ů";		 
			while (1)
			{
				if(strcmp(sex,boy)==0||strcmp(sex,girl)==0)
					break;
				else
				{			
					printf("\n��������ȷ�Ա�");
					scanf("%s", sex);
				}
			} 
			printf("\n�������ͥסַ:");
			scanf("%s",address);
			printf("\n���������ĳɼ�:");
			scanf("%d", &chin_grade);
			while(1)
			{
				fflush(stdin);
				if(chin_grade>=0&&chin_grade<=100)
				{
					break;
				}
				printf("\n������0-100�ķ���!\n");
				scanf("%d", &chin_grade);
				
			}	
			printf("\n��������ѧ�ɼ�:");
			scanf("%d", &math_grade);
			while(1)
			{
				fflush(stdin);
				if(math_grade>=0&&math_grade<=100)
				{
					break;
				}
				printf("\n������0-100�ķ���!\n");
				scanf("%d", &math_grade);
				
			}
			printf("\n������Ӣ��ɼ�:");
			scanf("%d", &english_grade);
			while(1)
			{
				fflush(stdin);
				if(english_grade>=0&&english_grade<=100)
				{
					break;
				}
				printf("\n������0-100�ķ���!\n");
				scanf("%d", &english_grade);
				
			}
			printf("\n������c���Գɼ�:");
			scanf("%d", &c_grade);
			while(1)
			{
				fflush(stdin);
				if(c_grade>=0&&c_grade<=100)
				{
					break;
				}
				printf("\n������0-100�ķ���!\n");
				scanf("%d", &c_grade);
				
			}	
			printf("\n�����������ɼ�:");
			scanf("%d", &pe_grade);
			while(1)
			{
				fflush(stdin);
				if(pe_grade>=0&&pe_grade<=100)
				{
					break;
				}
				printf("\n������0-100�ķ���!\n");
				scanf("%d", &pe_grade);
				
			}
			printf("\n����������:");
			scanf("%d", &age);
			while(1)
			{
				fflush(stdin);
				if(age>=0)
				{
					break;
				}
				printf("\n����������!\n");
				scanf("%d", &age);
				
			}		
			total_sore=chin_grade+math_grade+english_grade+c_grade+pe_grade;
			
			input(head,name,id_status,nation,address,id,sex,math_grade,chin_grade,english_grade,c_grade,pe_grade,total_sore,age);
			
		}break;
	case '2':
		{
			system("cls");
			printf("1.��ѧ�Ų���\n");
			printf("2.����������\n");
			printf("3.��ѧ�Ʋ���(����ʾ��ѧ����߷�����ѧ��)\n");
			printf("4.�����������\n");
			printf("5.��������\n");
			printf("6.����\n");
			while (1)
			{
				char a;
				fflush(stdin);
				scanf("%c", &a);
				if (a == '1')
				{
					printf("\n������ѧ��:\n");
					int num;
					scanf("%d", &num);
					printf("\n");
					seek_id(head, num);
					
				}
				else if (a == '2')
				{
					printf("����������\n");
					char name[20];
					scanf("%s", name);
					seek_name(head, name);
					printf("\n");
				}
				else if (a == '3')
				{
					printf("������ѧ��:\n");
					char grade[12];
					scanf("%s", grade);
					seek_grade(head, grade);
					printf("\n");
				}
				else if (a == '4')
				{
					printf("����������\n");
					char nation[16];
					scanf("%s",nation);
					seek_nation(head,nation);
					printf("\n");
				}
				else if (a == '5')
				{
					
					seek_num(head);
					printf("\n");
					
				}
				else if (a == '6')
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
	case '3':
		{
			system("cls");
			printf("1.����ѧ��ɾ��\n");
			printf("2.��������ɾ��\n");
			printf("3.����\n");
			printf("���������֣�\n");
			while (1)
			{
				fflush(stdin);
				char a;
				scanf("%c", &a);
				if (a == '1')
				{
					printf("������ѧ��:\n");
					int num;
					scanf("%d", &num);
					del_id(head, num);
					printf("\n");
				}
				else if (a == '2')
				{
					printf("����������:\n");
					char name[20];
					scanf("%s", name);
					del_name(head, name);
					printf("\n");
				}
				else if (a == '3')
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
	case '4':
		{
			char num;
			system("cls");
			printf("1.����ѧ������\n");
			printf("2.���ճɼ�����\n");
			printf("3.����ѧ������\n");
			printf("4.��Ϣ����\n");
			printf("5.����\n");
			while (1)
			{
				fflush(stdin);
				printf("����������:");
				scanf("%c", &num);
				if (num == '1')
				{
					print_id(head);
					printf("\n");
					
				}
				if (num == '2')
				{
					print_grade(head);
					printf("\n");
				}
				if (num == '3')
				{
					char subject[10];
					printf("������ѧ��:");
					scanf("%s",subject);
					print_subject(head,subject);
				}
				if (num == '4')
				{
					print_common(head);
				}
				if (num == '5')
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
	case '5':
		{
			char num;
			system("cls");
			printf("1.����ѧ���޸�\n");
			printf("2.���������޸�\n");
			printf("3.����\n");
			while (1)
			{
				fflush(stdin);
				printf("����������:");
				scanf("%c", &num);
				if (num == '1')
				{
					
					int id;
					printf("������ѧ��:");
					scanf("%d", &id);
					while(1)
					{
						int cout=0;
						int n=id;
						while(n!=0)
						{
							n/=10;
							cout++;
						}
						if(cout==10)
							break;
						else
						{
							printf("��������ȷѧ�ţ�\n");
							scanf("%d",&id);
						}
					}
					change_id(head, id);
					printf("\n");
					
				}
				else if (num == '2')
				{
					char name[20];
					printf("����������:");
					scanf("%s", name);
					change_name(head, name);
					printf("\n");
				}
				else if (num == '3')
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
	case '6':
		{
			printf("\n��л����ʹ�ã�");
			save_data(head);
			exit(0);
			
		}break;
		
		default:
			printf("��������ȷ������\n");
			fflush(stdin);
			break;
				
	}
	
	
}


void load_data(node* head)
{
	
	char name[30];//���� 
	char id_status[19];//���֤�� 
	char nation[16];//����
	char address[50];
	int id; //ѧ�� 
	int age;//���� 
	char sex[3];//�Ա� 
	int math_grade;//��ѧ�ɼ� 
	int chin_grade;//���ĳɼ� 
	int english_grade;//Ӣ��ɼ� 
	int c_grade;//c���Գɼ�  
	int pe_grade; //�����ɼ� 
	FILE* fp=NULL;
	FILE* fp2=NULL;
	int i=0;//������
	fp=fopen("students.txt","a+");
	if(fp==NULL)
	{
		perror("���ļ�ʧ��");
		return;
	}
	while(fscanf(fp,"%d %s %s %s %s %s %d %d %d %d %d %d",&id,name,id_status,sex,nation,address,&chin_grade,&math_grade,&english_grade,&c_grade,&pe_grade,&age)!=EOF)
	{
		i++;
		
	}
	int j=0;
	fclose(fp);
	fp2=fopen("students.txt","a+");
	while(fscanf(fp2,"%d %s %s %s %s %s %d %d %d %d %d %d",&id,name,id_status,sex,nation,	address,\
		&chin_grade,&math_grade,&english_grade,&c_grade,&pe_grade,&age)!=EOF)
	{
		count++;//������
		//�����½ڵ�
		node* newnode=(node*)malloc(sizeof(node));
		strcpy(newnode->name, name);
		strcpy(newnode->id_status,id_status);
		strcpy(newnode->nation,nation);
		strcpy(newnode->address,address); 
		strcpy(newnode->sex,sex);
		newnode->ID=id;
		newnode->math_grade=math_grade;
		newnode->chin_grade=chin_grade;
		newnode->english_grade=english_grade;
		newnode->c_grade=c_grade;
		newnode->pe_grade=pe_grade;
		newnode->age=age;
		newnode->total_sore=math_grade+chin_grade+english_grade+c_grade+pe_grade;
		node* x=head;
		while(x->next!=NULL)
		{
			x=x->next;
		}
		x->next=newnode;
		newnode->next=NULL;
		j++;
		if(i==j)
			break;
		
		
		
		
	}
	
	fclose(fp2);
	
	
	
}
void save_data(node* head)
{
	
	
	if(head->next==NULL)
		return;
	node* newnode=head->next;
	FILE* fp=NULL;
	fp=fopen("students.txt","w+");
	while(newnode!=NULL)
	{
		fprintf(fp,"%d\t%s\t%s\t%s\t%8s\t%14s\t%d\t%d\t%d\t%d\t%d\t%d\n",newnode->ID,newnode->name,newnode->id_status,newnode->sex,newnode->nation,newnode->address,\
			newnode->chin_grade,newnode->math_grade,newnode->english_grade,newnode->c_grade,newnode->pe_grade,newnode->age);
		newnode=newnode->next;
	}
	
	fclose(fp);
	
	
	
}
void menu()
{
	
	
	printf("                                                    Made by Longlong(�˹�����212)\n");
	printf("*********************************\n");
	printf("*       ѧ������ϵͳ            *\n");
	printf("*       1.¼��ѧ������          *\n");
	printf("*       2.��ѯ����              *\n");
	printf("*       3.ɾ��ѧ����Ϣ          *\n");
	printf("*      	4.��Ϣ����              *\n");
	printf("*       5.�޸�ѧ������          *\n");
	printf("*       6.�˳����򲢴浵        *\n");
	printf("*********************************\n");                      
	printf("*��ǰ��%d��ѧ��¼��ϵͳ**********\n",count);
	printf("_________________________________\n");
	printf("|       ע������                |\n");
	printf("|1.ѧ��������ʮλ��             |\n");
	printf("|2.�ɼ�������0-100����          |\n");
	printf("|3.�������˳��ᵼ�����ݴ浵ʧ�� |\n");          
	printf("|_______________________________|\n");
	
}





