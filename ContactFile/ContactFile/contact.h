#define _CRT_SECURE_NO_WARNINGS 1

//#define MAX 1000

#define DEFAULT_SZ  3

#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDR 30

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>

enum Option
{
	EXIT,//0
	ADD,//1
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SORT,
	SAVE
};



typedef struct PeoInfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
}PeoInfo;

//通讯录类型
typedef struct Contact
{
	struct PeoInfo *data; //存放一千个信息
	int size;   //记录当前已经有的元素个数
	int capacity;//当前通讯录的最大容量
}Contact;


//声明函数
void InitContact(struct Contact* ps);
void  AddContact(struct Contact* ps);
void ShowContact(const struct Contact* ps);

//删除指定的联系人
void DelContact(struct Contact* ps);

//查找指定人的信息
void SearchContact(const struct Contact* ps);

void ModifyContact(struct Contact* ps);

void DestroyContact(Contact* ps);

//保存文件
void SaveContact(Contact* ps);

//加载文件中的信息到通讯录
void LoadContact(Contact* ps);
