//1.编写函数：
//unsigned int reverse_bit(unsigned int value);
//这个函数的返回值是value的二进制位模式从左到右翻转后的值。
//
//如：
//在32位机器上25这个值包含下列各位：
//00000000000000000000000000011001----25
//异或运算---相同为0，相异为1
//翻转后：（2550136832）
//10011000000000000000000000000000
//程序结果返回：
//2550136832
//
//依次取出原数的最后一位，右移
// 00000000000000000000000000011001
//&00000000000000000000000000000001
//将最后一位给新的数，然后左移
// 00000000000000000000000001000000
//|00000000000000000000000000000001
//unsigned int reverse_bit(unsigned int value)
//{
//	unsigned int tmp = 0;
//	int i = 0;
//	//i<31----从0到30，左移了31位
//	//最低位左移31位到达最高位
//	//从第一位左移1位到第2位，从第一位左移31位到32位
//	for (i = 0; i < 31; i++)
//	{
//		tmp = ((value>>i) & 1) | tmp;
//		tmp = tmp << 1;
//	}
//	return tmp;
//}
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	unsigned int x = reverse_bit(n);
//	printf("%u", x);//打印无符号数
//	return 0;
//}

//2.不使用（a + b） / 2这种方式，求两个数的平均值。
//
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a = 0, b = 0;
	scanf("%d %d", &a, &b);
	//a = a + b;
	//b = a - b;
	//a = a - b;
	//printf(" a=%d b=%d", a, b);
	int tmp = a - b;

	return 0;
}
// 
//3.编程实现：
//一组数据中只有一个数字出现了一次。其他所有数字都是成对出现的。
//请找出这个数字。（使用位运算）
//
//4.
//有一个字符数组的内容为:"student a am i",
//请你将数组的内容改为"i am a student".
//要求：
//不能使用库函数。
//只能开辟有限个空间（空间个数和字符串的长度无关）。
//
//student a am i
//i ma a tneduts
//i am a student
//

