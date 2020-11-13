//计算多种情况的运算（加减乘除）（通过函数指针数组形式）
#include<stdio.h>
void menu()
{
	printf("**********************\n");
	printf("**** 1.Add  2.Sub ****\n");
	printf("**** 3.Mul  4.Dev ****\n");
	printf("**** 5.Xor  0.exit****\n");
	printf("**********************\n");
}
int Add1(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Dev(int x, int y)
{
	return x / y;
}
int Xor(int x, int y)
{
	return x ^ y;
}
int main()
{
	int input = 0;
	int a = 0;
	int b = 0;
	int (*Parr[])(int, int) = {0,Add1,Sub,Mul,Dev,Xor};
	do
	{
		menu();
		printf("请选择>:\n");
		scanf("%d", &input);
	
		if (input >= 1 && input <= 5)
		{
			printf("请输入两数的值\n");
			scanf("%d%d", &a, &b);
			printf("%d\n", (*Parr[input])(a, b));//指针函数数组，由指针函数推演为指针函数数组
		}
		else if (input == 0)
			printf("退出\n");
		else
			printf("输入错误\n");
	} while (input);
	return 0;
}