#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>


//指针类型的意义
//1.指针类型决定了：指针解引用的权限有多大
//2.指针类型决定了，指针走一步，能走多远（步长）
//int main()
//{
//	int arr[10] = { 0 };
//	int  *p = arr;
//	char  *pc = arr;
//	printf("%p\n", p);
//	printf("%p\n", p+1);//+4 int
//	printf("%p\n", pc);
//	printf("%p\n", pc+1);//+1 char
//
//	//0 1 2 3 4 5 6 7 8 9 a b c d e f
//	//11111111
//	//    8421
//	/*int a = 0x11223344;//F10运行，看&a变化
//	char* pc = &a;
//	*pc = 0;*/
//
//	//int*pa=&a;
//	//*pa = 0;
//
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;
//	}
//	return 0;
//}

