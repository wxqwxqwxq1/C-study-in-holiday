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
//5λ�˶�Ա�μ���10��̨��ˮ����������������Ԥ��������
//Aѡ��˵��B�ڶ����ҵ�����a=3,b=2   (((a==3)&&(b!=2))||((a!=3)&&(b==2)))
//Bѡ��˵���ҵڶ���E���ģ�b=2,e=4	(((b==2)&&(e!=4))||((b!=2)&&(e==4)))
//Cѡ��˵���ҵ�һ��D�ڶ���c=1,d=2	(((c==1)&&(d!=2))||((c!=1)&&(b==2)))
//Dѡ��˵��C����ҵ�����c=5,d=3	(((c==5)&&(d!=3))||((c!=5)&&(d==3)))
//Eѡ��˵���ҵ��ģ�A��һ��e=4,a=1	(((e==4)&&(a!=1))||((e!=4)&&(a==1)))
//����������ÿλѡ�ֶ�˵����һ�룬����ȷ�����������Ρ�

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
//�ձ�ĳ�ط�����һ��ıɱ��������ͨ���Ų�ȷ��ɱ�����ֱ�Ϊ4��
//���ɷ���һ��������Ϊ4�����ɷ��Ĺ��ʡ�
//A˵�������ҡ�	a=0
//B˵����C��	c=1
//C˵����D��	d=1
//D˵��C�ں�˵	d=0
//��֪3����˵���滰��1����˵���Ǽٻ���
//�����������Щ��Ϣ��дһ��������ȷ������˭�����֡�
// 
// ������˵���滰��һ����˵�˼ٻ�---��!(a==0)&&(c==1)&&(d==1)&&(d==0)||(a==0)&&!(c==1)&&(d==1)&&(d==0)||(a==0)&&(c==1)&&!(d==1)&&(d==0)||(a==0)&&(c==1)&&(d==1)&&!(d==0)
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
//3.����Ļ�ϴ�ӡ������ǡ�
//  0 1 2 3 4
//0 1
//1 1 1
//2 1 2 1
//3 1 3 3 1
//4 1 4 6 4 1
// ...
//1 ��һ�е����Ԫ��+��һ�����Ԫ���Աߵ�Ԫ��  1
#define _CRT_SECURE_NO_WARNINGS 1
#define line 20
#include<stdio.h>
int main()
{
	int YangHui[line][line] = { 0 };
	//��ʼ����һ�к����һ��Ϊ1
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
	//��ӡ
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
//	//��i����i����
//	//��i�еĵ�j�������ڵ�i-1�еĵ�j�����͵�j-1�����ĺ�
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
