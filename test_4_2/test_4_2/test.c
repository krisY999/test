
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
//	{//��ǰ���
//		while (count--)
//		{
//			*(char*)dest = *(char*)src;
//			++(char*)dest;
//			++(char*)src;
//		}
//	}
//	else
//	{
//	//�Ӻ�ǰ
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
//	my_memmove(arr3 , arr3+2, 20);//�ص�����
//	int i = 0;
//	for (i = 0; i < (sizeof(arr3) / sizeof(arr3[0])); i++)
//	{
//		printf("%d ", arr3[i]);
//	}
//	return 0;
//}




//����һ���ṹ������

//struct Stu
//{
//	char name[20];//��Ա����
//	char tele[12];
//	char sex[10];
//	int age;
//
//}s4,s5,s6;
//
//struct Stu s3; //s3456���ǽṹ��ȫ�ֱ���
//
//int main()
//{  //�������ǽṹ�����
//	struct Stu s1;
//	struct Stu s2;//s1,s2�ֲ�����
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
////������
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



////�ṹ���ڴ����
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


////����Ĭ�϶�����Ϊ4
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



////λ�Σ���ʡ�ռ�
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




////һ������
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
//	//�ռ�����ο��ٵģ�
//	return 0;
//}



////ö������
//enum Sex
//{
//	MALE=2,
//	FEMALE,
//	SECRET=8
//	//ö�ٵĿ���ȡֵ
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

//enum Color//��ɫ
//{
//	RED = 1,
//	GREEN = 2,
//	BLUE = 4
//};
//int main(){
//	enum Color clr = GREEN;//ֻ����ö�ٳ�����ö�ٱ�����ֵ���Ų���������͵Ĳ��졣
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
//	//�жϴ�С���ֽ���
//	{
//		printf("С��");
//	}
//	else
//	{
//		printf("���");
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