//1.递归和非递归分别实现求第n个斐波那契数。

//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
////递归
//static int count = 0;
//int Fib(int x)
//{
//	if (3 == x) count++;
//	if (1 == x) return 1;
//	if (2 == x) return 1;
//	return Fib(x - 1) + Fib(x - 2);
//}
////当传入值为3的倍数时，所求得的结果错误
////int Fib2(int x)
////{
////	int a = 1, b = 1, c = 2;
////	while (x/3>0)
////	{
////		//x/3 3  2  1
////		//x   10 7  4
////		//a   3  13 55
////		//b   5  21 89
////		//c   8  34 144
////		a = b + c;
////		b = c + a;
////		c = a + b;
////		x -= 3;
////	}
////	if (1 == x % 3) return a;
////	if (2 == x % 3) return b;
////	if (0 == x % 3) return c;
////}
//int Fib2(int x)
//{
//	int a = 1, b = 1, c = 0;
//	
//	while (x > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		x--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d\n",Fib(n));
//	printf("%d", count);
//	return 0;
//}
//2.编写一个函数实现n ^ k，使用递归实现
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
//int factory(int x, int y)
//{
//	if (1 == y) return x;
//	else return x*factory(x, y - 1);
//}
//int main()
//{
//	int n = 0, k = 0;
//	scanf("%d %d", &n, &k);
//	printf("%d\n", factory(n, k));
//
//	return 0;
//}
//3. 写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和，
//例如，调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int DigitSum(int x)
//{
//	//DigitSum1729   9+DigitSum172  9+2+DigitSum17 9+2+7+DigitSum1
//	//return 1  return 1+7 return 1+7+2 return 1+7+2+9
//	if (0 == x / 10) return x;
//	else return x%10 + DigitSum(x / 10);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d\n",DigitSum(n));
//}
//4. 编写一个函数 reverse_string(char* string)（递归实现）
//实现：将参数字符串中的字符反向排列。
//要求：不能使用C函数库中的字符串操作函数。
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string.h>
//void reverse_string1(char* string,int left,int right)
//{
//	if (left < right)
//	{
//		char temp = string[left];
//		string[left] = string[right];
//		string[right] = temp;
//		reverse_string1(string, left + 1, right - 1);
//	}
//}
////wrong
////void reverse_string2(char* string, int right)
////{
////	if (right>=1)
////	{
////		char temp = string[0];
////		string[0] = string[right];
////		string[right] = temp;
////		reverse_string2(string+1,  right - 1);
////	}
////}
//int main()
//{
//	char ch[10] = "abcdefghi";
//	int sz = sizeof(ch) / sizeof(ch[0]);
//	printf("%s", ch);
//	reverse_string1(ch,  0, sz  -1-1);
//	//reverse_string2(ch, sz - 1 - 1);
//	printf("%d\n",sz);
//	printf("%s", ch);
//	return 0;
//}
//5.递归和非递归分别实现strlen
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
////调整字符串的起点，让字符串不断减去第一个元素，然后递归调用
//int my_strlen(char* string)
//{
//	if ( *string=='\0') return 0;
//	else return 1+my_strlen(string+1);
//}
////把指针向后移动，找到第一个'\0'时结束
////*string指向第一个元素，然后string++不断向后移动
//int my_strlen1(char* string)
//{
//	int sum = 0;
//	for (; *string; string++)
//	{
//		sum++;
//	}
//	return sum;
//}
//int main()
//{
//	char ch[10] = "abcdefghi";
//	int sz = sizeof(ch) / sizeof(ch[0]);
//	printf("%d\n",my_strlen(ch));
//	printf("%d\n", my_strlen1(ch));
//	return 0;
//}
//6.递归和非递归分别实现求n的阶乘
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int factorial(int x)//递归
//{
//	if (1 == x) return 1;
//	else return x * factorial(x - 1);
//}
//int factorial2(int x)//非递归
//{
//	int i = 0, sum = 1;
//	for (i = x; i >=1; i--)
//	{
//		sum = i * sum;
//	}
//	return sum;
//}
//int main()
//{
//	int x = 0;
//	scanf("%d", &x);
//	printf("%d\n",factorial(x));
//	printf("%d\n", factorial2(x));
//	return 0;
//}
//7.递归方式实现打印一个整数的每一位
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void my_printf(int x)
{
	if (0 <= x &&x<= 9)
		printf("%d ",x);
	else if (x < 0)
		my_printf(-x);
	else
	{
		printf("%d ", x % 10);
		my_printf(x / 10);
	}

}
int main()
{
	int x = 0;
	scanf("%d", &x);
	my_printf(x);
	return 0;
}