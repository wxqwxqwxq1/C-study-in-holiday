//1.实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定，
//输入9，输出9 * 9口诀表，输入12，输出12 * 12的乘法口诀表。
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//void MultiTables(int x)
//{
//	int i = 1;
//	for (i = 1; i <=x; i++)
//	{
//		int j = 1;
//		for (j = 1; j <=i; j++)
//		{
//			printf("%003d * %003d = %003d ", j, i, j * i);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int a =0;
//	scanf("%d", &a);
//	MultiTables(a);
//	return 0;
//}

//2.使用函数实现两个数的交换。
//
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
// 
//void swap(int* x, int* y)
//{
//	int temp = *x;
//	*x = *y;
//	*y = temp;
//}
//
//int main()
//{
//	int x = 0, y = 0;
//	scanf("%d %d", &x, &y);
//	swap(&x, &y);
//	printf("%d %d\n", x, y);
//	return 0;
//}

//3.实现一个函数判断year是不是润年。

//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
// 
//int Is_leap_year(int x)
//{
//	if ((x % 4 == 0 && x % 100 != 0) || (x % 400 == 0)) return 1;
//	else return 0;
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 2022; i++)
//	{
//		if (1 == Is_leap_year(i)) printf("%d ", i);
//	}
//}

//4.
//创建一个数组，
//实现函数init（）初始化数组、
//实现empty（）清空数组、
//实现reverse（）函数完成数组元素的逆置。
//要求：自己设计函数的参数，返回值。

//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
// 
//void display(int array[],int len)
//{
//	int i = 0;
//	for (i = 0; i < len;i++)
//	{
//		printf("%d ", array[i]);
//	}
//	printf("\n");
//}
//
//void init(int array[], int len)
//{
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		array[i] = '#';
//	}
//}
//
//void empty(int array[], int len)
//{
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		array[i] = 0;
//	}
//}
//
//void reverse(int array[], int len)
//{
//	int temp = 0;
//	for (int i = 0; i < len/2; i++)
//	{
//		temp = array[i];
//		array[i] = array[len - i-1];
//		array[len - i - 1] = temp;
//	}
//
//}
//int main()
//{
//	int array[10] = { 0,1,1,2,3,4,4,5,6,7};
//	int len = sizeof(array) / sizeof(array[0]);
//	display(array, len);
//	//初始化全为#
//	//init(array, len);
//	//display(array, len);
//	////置空全为0
//	//empty(array, len);
//	//display(array, len);
//
//	reverse(array, len);
//	display(array, len);
//	return 0;
//}

//5.实现一个函数，判断一个数是不是素数。

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int Is_prime(int x)
{
	int i = 2;
	for (i = 2; i < x/2; i++)
	{
		if (x % i == 0)
		{
			printf("因子为%d ", i);
			return 0;
		}
	}
	if (i >= x / 2) return 1;
}
int main()
{
	int input = 0;
	scanf("%d", &input);
	if (1 == Is_prime(input))
		printf("是素数");
	else printf("不是素数");
}
