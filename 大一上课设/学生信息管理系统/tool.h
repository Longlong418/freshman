#ifndef  __SOMEFILE_H__
#define   __SOMEFILE_H__
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<Windows.h>
extern int count;
typedef struct node {
	char name[20];//���� 
	char id_status[19];//���֤�� 
	char nation[16];//����
	char address[50];//��ַ
	int ID; //ѧ�� 
	int age;//���� 
	char sex[3];//�Ա� 
	int math_grade;//��ѧ�ɼ� 
	int chin_grade;//���ĳɼ� 
	int english_grade;//Ӣ��ɼ� 
	int c_grade;//c���Գɼ�  
	int pe_grade; //�����ɼ� 
	int total_sore;//�ܷ� 
	struct node* next; //ָ���� 
}node;
void input(node* head, char*name,char* id_status ,char* nation,char* address,int ID, char* sex,\
int math_grade,int chin_grade,int english_grade,int c_grade,int pe_grade,int total_sore,int age);//¼����ѧ�� 
void work(node* head);//���� 
void seek_id(node* head, int num);//����ѧ�Ų���
void seek_name(node* head, char* name);//������������
void seek_grade(node* head,	char* grade);//���ճɼ�����
void seek_nation(node* head,char* nation);//�����������
void seek_num(node* head);//��������
void del_id(node* head, int num);//����ѧ��ɾ��
void del_name(node* head, char* name);//��������ɾ��
void print_id(node* head1);//ѧ������
void print_grade(node* head1);//�ɼ�����
void print_subject(node* head,char* grade);//����ѧ������
void print_common(node* head);//��ͨ����
void change_id(node* head, int id);//����ѧ���޸�
void change_name(node* head, char* name);//���������޸�
void menu();//�˵�����
void load_data(node* head);//��ȡ�ļ�
void save_data(node* head);//��������
#endif
