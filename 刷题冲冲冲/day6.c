//1.ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ����
//����9�����9 * 9�ھ�������12�����12 * 12�ĳ˷��ھ���
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

//2.ʹ�ú���ʵ���������Ľ�����
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

//3.ʵ��һ�������ж�year�ǲ������ꡣ

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
//����һ�����飬
//ʵ�ֺ���init������ʼ�����顢
//ʵ��empty����������顢
//ʵ��reverse���������������Ԫ�ص����á�
//Ҫ���Լ���ƺ����Ĳ���������ֵ��

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
//	//��ʼ��ȫΪ#
//	//init(array, len);
//	//display(array, len);
//	////�ÿ�ȫΪ0
//	//empty(array, len);
//	//display(array, len);
//
//	reverse(array, len);
//	display(array, len);
//	return 0;
//}

//5.ʵ��һ���������ж�һ�����ǲ���������

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int Is_prime(int x)
{
	int i = 2;
	for (i = 2; i < x/2; i++)
	{
		if (x % i == 0)
		{
			printf("����Ϊ%d ", i);
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
		printf("������");
	else printf("��������");
}
