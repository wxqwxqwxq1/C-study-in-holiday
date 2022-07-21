//1. 给定两个整形变量的值，将两个值的内容进行交换。
//2. 不允许创建临时变量，交换两个数的内容（附加题）
//3.求10 个整数中最大值。
//4.将三个数按从大到小输出。
//5.求两个数的最大公约数。
#pragma warning(disable : 6031)//解决C6031
#define _CRT_SECURE_NO_WARNINGS//解决scanf的不安全提示
#include <stdio.h>
void swap(int* p, int* q)
{
	int t = 0;
	t = *p;
	*p = *q;
	*q = t;
}
int main()
{
				//1. 给定两个整形变量的值，将两个值的内容进行交换。
				//int x = 0, y = 0, z = 0;
				//printf("inupt x,y:\n");
				//scanf("%d%d", &x, &y);
				//z = x; x = y; y = z;
				//printf("x=%d\ny=%d", x, y);
			//2. 不允许创建临时变量，交换两个数的内容（附加题）
			//int x = 0, y = 0;
			//printf("inupt x,y:\n");
			//scanf("%d%d", &x, &y);
			//x += y; y = x - y; x -=y;
			//printf("x=%d\ny=%d", x, y);
		//3.求10 个整数中最大值。
		//int arr[10] = { 23,45,34,23,12,34,34,45,56,78 };
		//int max = 0;
		//for (int i = 0; i <= 9; i++)
		//{
		//	if (arr[i] > max) max = arr[i];
		//}
		//printf("max=%d", max);
	////4.将三个数按从大到小输出。
	//int x = 0, y = 0, z = 0;
	//printf("inupt x,y,z:\n");
	//scanf("%d%d%d", &x, &y,&z);
	//if (x < y) swap(&x,& y);
	//if (x < z) swap(&x,& z);
	//if (y < z) swap(&y, &z);
	//printf("%d %d %d\n", x, y, z);
	
	//5.求两个数的最大公约数--辗转相除法
	int x = 0, y = 0;
	printf("inupt x,y:\n");
	scanf("%d%d", &x, &y);
	int p = x, q = y;
	while (p % q != 0)
	{
		int t = p;
		p = q;
		q = t % q;
	}
	printf("%d", q);
	return 0;
}