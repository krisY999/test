
#include <stdio.h>
#include <string.h>
#include <assert.h>

//void* my_memcpy(void* dest,const void* src,size_t count)
//{ 
//	void* ret= dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	while (count--)
//	{
//		*(char*)dest = *(char*)src;
//		(char*)src = (char*)src +1;
//		(char*)dest = (char*)dest + 1;
//	}
//	return ret;
//}
//
//void* my_memmove(void* dest, const void* src, size_t count)
//{
//	void* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	if (dest < src)
//	{//从前向后考
//		while (count--)
//		{
//			*(char*)dest = *(char*)src;
//			++(char*)dest;
//			++(char*)src;
//		}
//	}
//	else
//	{
//	//从后到前
//		dest = (char*)dest + count - 1;
//		src = (char*)src + count - 1;
//
//		while (count--)
//		{
//			*(char*)dest = *(char*)src;
//			--(char*)dest;
//			--(char*)src;
//		}
//	}
//	return ret;
//
//}
//
//
//int main()
//{
//	/*int arr1[] = { 1, 2, 3, 4, 5 };
//	int arr2[10] = { 0 };
//	my_memcpy(arr2, arr1, sizeof(arr1));
//	printf("%s\n", arr2);*/
//
//	int arr3[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	/*my_memcpy(arr3 + 2, arr3, 20);*/
//
//	my_memmove(arr3 , arr3+2, 20);//重叠拷贝
//	int i = 0;
//	for (i = 0; i < (sizeof(arr3) / sizeof(arr3[0])); i++)
//	{
//		printf("%d ", arr3[i]);
//	}
//	return 0;
//}




//声明一个结构体类型

//struct Stu
//{
//	char name[20];//成员变量
//	char tele[12];
//	char sex[10];
//	int age;
//
//}s4,s5,s6;
//
//struct Stu s3; //s3456都是结构体全局变量
//
//int main()
//{  //创建的是结构体变量
//	struct Stu s1;
//	struct Stu s2;//s1,s2局部变量
//
//	return 0;
//}





//struct
//{
//	int a;
//	char c;
//}sa;
//
//struct
//{
//	int a;
//	char c;
//}* psa;
//
//int main()
//{
//	psa = &sa;
//
//	return 0;
//}

//
////自引用
//struct Node
//{
//	int data;
//	struct Node*  next;
//};
//
//int main()
//{
//	sizeof(struct Node);
//	return 0;
//}



//typedef struct Node
//{
//	int data;
//	struct Node*  next;
//}Node;
//
//int main()
//{
//	struct Node n1;
//	Node n2;
//	sizeof(struct Node);
//	return 0;
//}



//struct T
//{
//	double weight;
//	short age;
//};
//struct S
//{
//	char c;
//	struct T st;
//	int a;
//	double d;
//	char arr[20];
//};
//
//
//int main()
//{
//	struct S s = { 'c', {55.6,18},100, 3.14, "hello bit" };
//	printf("%c %d %lf %s\n", s.c, s.a, s.d, s.arr);
//	printf("%lf\n", s.st.weight);
//	return 0;
//}



////结构体内存对齐
//struct S1
//{
//	char c1;
//	int a;
//	char c2;
//};
//struct S2
//{
//	char c1;
//	char c2;
//	int a;
//};
//struct S3
//{
//	double d;
//	char c;
//	int i;
//};
//struct S4
//{
//	char c1;
//	struct S3 s3;
//	double d;
//};
//int main()
//{
//	struct S1 s1 = { 0 };
//	printf("%d\n",sizeof(s1));
//	struct S2 s2 = { 0 };
//	printf("%d\n", sizeof(s2));
//	printf("%d\n", sizeof(struct S3));
//	printf("%d\n", sizeof(struct S4));
//	return 0;
//}


////设置默认对齐数为4
//#pragma pack(1)
//struct S
//{
//	char c1;
//	double d;
//
//};
//#pragma pack()
//
//
//int main()
//{
//	struct S s;
//	printf("%d\n",sizeof(s));
//	return 0;
//}



////位段，节省空间
//struct S
//{
//	int a : 2;
//	int b : 5;
//	int c : 10;
//	int d : 30;
//};
//
//int main()
//{
//	struct S s;
//	printf("%d\n", sizeof(s));
//	return 0;
//}




////一个例子
//struct S {
//	char a : 3;
//	char b : 4;
//	char c : 5;
//	char d : 4;
//};
//int main()
//{
//	struct S s = { 0 };
//	s.a = 10; 
//	s.b = 12; 
//	s.c = 3;
//	s.d = 4;
//	//空间是如何开辟的？
//	return 0;
//}



////枚举类型
//enum Sex
//{
//	MALE=2,
//	FEMALE,
//	SECRET=8
//	//枚举的可能取值
//};
//enum Color
//{
//	RED,
//	GREEN,
//	BLUE
//};
//
//int main()
//{
//	/*enum Sex s = MALE;
//	enum Color c = BLUE;*/
//	printf("%d %d %d\n",RED,GREEN,BLUE);
//	printf("%d %d %d\n", MALE, FEMALE, SECRET);
//	return 0;
//}

//enum Color//颜色
//{
//	RED = 1,
//	GREEN = 2,
//	BLUE = 4
//};
//int main(){
//	enum Color clr = GREEN;//只能拿枚举常量给枚举变量赋值，才不会出现类型的差异。
//	clr = 5;
//	return 0;
//}


//union Un
//{
//	char c;
//	int  i;
//};
//
//int main()
//{
//	union Un u;
//	printf("%d\n",sizeof(u));
//	printf("%p\n", &u);
//	printf("%p\n",&(u.c));
//	printf("%p\n", &(u.i));
//	return 0;
//}


//int main()
//{
//	int a = 1;
//	if (1 == *(char*)&a)
//	//判断大小端字节序
//	{
//		printf("小端");
//	}
//	else
//	{
//		printf("大端");
//	}
//	return 0;
//}

union Un
{
	short c[7];
	int i;
};

int main()
{
	union Un u;
	printf("%d\n",sizeof(u));

	return 0;
}