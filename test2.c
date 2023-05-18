#define _CRT_SECURE_NO_WARNINGS 1


int main()
{
	//这里的p是一个野指针
	int* p;//p是一个局部的指针变量，局部变量不初始化的话，默认是随机值
	*p = 20;//非法访问内存

	return 0;
}