//计算多种情况的运算（加减乘除）
#include<stdio.h>
void menu()
{
	printf("**********************\n");
	printf("**** 1.Add  2.Sub ****\n");
	printf("**** 3.Mul  4.Dev ****\n");
	printf("****    0.exit    ****\n");
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
int main()
{
	int input=0;
	int a = 0;
	int b = 0;
	do
	{
		menu();
		printf("请选择>:\n");
		scanf("%d",&input);
		/*printf("请输入两数的值\n");
		scanf("%d%d",&a,&b);*/
		switch (input)
		{
		case(1):
			printf("请输入两数的值\n");
			scanf("%d%d", &a, &b);
			printf("%d\n", Add1(a, b));
			break;
		case(2):
			printf("请输入两数的值\n");
			scanf("%d%d", &a, &b);
			printf("%d\n", Sub(a, b));
			break;
		case(3):
			printf("请输入两数的值\n");
			scanf("%d%d", &a, &b);
			printf("%d\n", Mul(a, b));
			break;
		case(4):
			printf("请输入两数的值\n");
			scanf("%d%d", &a, &b);
			printf("%d\n", Dev(a, b));
			break;
		case(0):
			printf("退出\n");
			break;
		default:
			printf("输入错误\n");
			break;
		}
	} while (input);
	return 0;
}