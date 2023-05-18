#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//
//int main()
//{
//	//1.非法访问
//	//这里的p是一个野指针
//	//int* p;//p是一个局部的指针变量，局部变量不初始化的话，默认是随机值
//	//*p = 20;//非法访问内存
//	
//
//
//	//2.越界访问
//	/*int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i <= 10; i++)
//	{
//		*p = 1;
//		p++;
//	}*/
//	return 0;
//}

//3.指针释放
//int* test()
//{
//	int a = 10;
//	return &a;//&a销毁了，回归系统了，释放了
//}
//
//int main()
//{
//	int* p = test();
//	*p = 20;//p指哪里不确定了，成野指针了
//	return 0;
//}

//
//如何规避野指针
//指针初始化
int main()
{
	//当前不知道p应该初始化为什么地址的时候，直接初始化为NULL
	int* p = NULL;
	//明确初始化的值
	int a = 10;
	int* ptr = &a;

	//C语言本身是不会检查数组的越界行为的
	int* p = NULL;//为0是用户无法调用的

	if (p != NULL)//不为NULL调用，不用时释放NULL
		*p = 10;

	return 0;
}


