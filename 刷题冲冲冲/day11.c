//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <limits.h>
//int main()
//{
//	//char a[1000];
//	//int i;
//	//for (i = 0; i < 1000; i++) {
//	//	a[i] = -1 - i;
//	//}
//	//printf("%d", strlen(a)); 
//
//	unsigned char i = 0;
//	for (i = 0; i <= 255; i--)
//	{
//		printf("hello world\n");
//	}
//	return 0;
//}
//day11
//1.
//5位运动员参加了10米台跳水比赛，有人让他们预测比赛结果
//A选手说：B第二，我第三；a=3,b=2   (((a==3)&&(b!=2))||((a!=3)&&(b==2)))
//B选手说：我第二，E第四；b=2,e=4	(((b==2)&&(e!=4))||((b!=2)&&(e==4)))
//C选手说：我第一，D第二；c=1,d=2	(((c==1)&&(d!=2))||((c!=1)&&(b==2)))
//D选手说：C最后，我第三；c=5,d=3	(((c==5)&&(d!=3))||((c!=5)&&(d==3)))
//E选手说：我第四，A第一；e=4,a=1	(((e==4)&&(a!=1))||((e!=4)&&(a==1)))
//比赛结束后，每位选手都说对了一半，请编程确定比赛的名次。

//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	int a = 1, b = 1, c = 1, d = 1, e = 1;
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						if ((((a == 3) && (b != 2)) || ((a != 3) && (b == 2))) &&
//							(((b == 2) && (e != 4)) || ((b != 2) && (e == 4))) &&
//							(((c == 1) && (d != 2)) || ((c != 1) && (b == 2))) &&
//							(((c == 5) && (d != 3)) || ((c != 5) && (d == 3))) &&
//							(((e == 4) && (a != 1)) || ((e != 4) && (a == 1))))
//						{
//							if((a!=b)&&(a!=c)&&(a!=d)&&(a!=e)&&(b!=c)&&(b!=d)&&(b!=e)&&(c!=d)&&(c!=e)&&(d!=e))
//								printf("a=%d b=%d c=%d d=%d e=%d \n", a, b, c, d, e);
//						}							
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = &arr;
//	int(*pa)[10] = &arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *((*pa)+i));
//		printf("%d ", p[i]);
//	}
//	return 0;
//}
//2.
//日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个
//嫌疑犯的一个。以下为4个嫌疑犯的供词。
//A说：不是我。	a=0
//B说：是C。	c=1
//C说：是D。	d=1
//D说：C在胡说	d=0
//已知3个人说了真话，1个人说的是假话。
//现在请根据这些信息，写一个程序来确定到底谁是凶手。
// 
// 三个人说了真话，一个人说了假话---》!(a==0)&&(c==1)&&(d==1)&&(d==0)||(a==0)&&!(c==1)&&(d==1)&&(d==0)||(a==0)&&(c==1)&&!(d==1)&&(d==0)||(a==0)&&(c==1)&&(d==1)&&!(d==0)
// 
//a+b+c+d=1
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	int a = 0, b = 0, c = 0, d = 0;
//	for (a = 0; a <= 1; a++)
//	{
//		for (b = 0; b <= 1; b++)
//		{
//			for (c = 0; c <= 1; c++)
//			{
//				for (d = 0; d <= 1; d++)
//				{
//					if (!(a == 0) && (c == 1) && (d == 1) && (d == 0) ||
//						(a == 0) && !(c == 1) && (d == 1) && (d == 0) ||
//						(a == 0) && (c == 1) && !(d == 1) && (d == 0) || 
//						(a == 0) && (c == 1) && (d == 1) && !(d == 0) )
//					{
//						if((1 == (a + b + c + d)))
//							printf("%d %d %d %d \n", a, b, c, d);
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}
// 
//3.在屏幕上打印杨辉三角。
//  0 1 2 3 4
//0 1
//1 1 1
//2 1 2 1
//3 1 3 3 1
//4 1 4 6 4 1
// ...
//1 上一列的这个元素+上一列这个元素旁边的元素  1
#define _CRT_SECURE_NO_WARNINGS 1
#define line 20
#include<stdio.h>
int main()
{
	int YangHui[line][line] = { 0 };
	//初始化第一列和最后一列为1
	int i = 0, j = 0;
	for (i = 0; i < line; i++)
	{
		YangHui[i][0] = 1;
	}
	for (i=1,j = 1; j < line; i++,j++)
	{
		YangHui[i][j] = 1;
	}
	for (i = 2; i < line; i++)
	{
		for (j = 1; j < i; j++)
			YangHui[i][j] = YangHui[i - 1][j] + YangHui[i - 1][j - 1];
	}
	//打印
	for (i = 1; i <= line; i++)
	{
		for (j = 1; j <= i; j++)
			printf("%-5d ", YangHui[i-1][j-1]);
		printf("\n");
	}


	return 0;
}
// 
// wrong!!
//#define _CRT_SECURE_NO_WARNINGS 1
//#define line 10
//#include <stdio.h>
//int main()
//{
//	//第i行有i个数
//	//第i行的第j个数等于第i-1行的第j个数和第j-1个数的和
//	int i = 0;
//	for (i = 3; i < 10; i++)
//	{
//		int j = 0;
//		int arr[line] = { 1,1 };
//		for (j = 2; j <i; j++)
//		{
//			printf("%d", arr[j] + arr[j - 1]);
//			arr[j] = arr[j] + arr[j - 1];
//		}
//		printf("%d ", 1);
//	}
//	return 0;
//}
//
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <assert.h>
//#include <string.h>
//
//int main()
//{
//	char str1[20] = "asasas";
//	//char str2[] = NULL;
//	strcat(str1, NULL);
//	printf("%s\n", str1);
//	return 0;
//}
