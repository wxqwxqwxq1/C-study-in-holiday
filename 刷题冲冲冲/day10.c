//1.
//写一个函数返回参数二进制中 1 的个数
//比如： 15       0000 1111       4 个 1
//程序原型：
//int  count_one_bits(unsigned int value)
//{
//    // 返回 1的位数
//}
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <stdio.h>
//int  count_one_bits(unsigned int value)
//{
//	//15 0000 1111
//	//&  0000 0001 与运算
//	int count = 0;
//	while (value)
//	{
//		if (value & 1)
//		{
//			count++;
//			value >>= 1;
//		}
//	}
//	return count;
//}
//int main()
//{
//	int input = 0;
//	scanf("%d", &input);
//	printf("%d", count_one_bits(input));
//}
//2.获取一个数二进制序列中所有的偶数位和奇数位，
//分别输出二进制序列。
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <stdio.h>
//void find_odd(unsigned int x)
//{
//	int i = 0;
//	for (i = 31; i >= 0; i = i - 2)
//	{
//		//将x右移i位然后&1，得到第i+1位的值
//		printf("第%d位:", i );
//		printf("%d\n", (x>>i) & 1);
//	}	
//}
//void find_even(unsigned int x)
//{
//	int i = 0;
//	for (i = 30; i >= 0; i = i - 2)
//	{
//		//将x右移i位然后&1，得到第i+1位的值
//		printf("第%d位:", i);
//		printf("%d\n", (x >> i) & 1);
//	}
//}
//int main()
//{
//	// 0000 1111
//	//^0000 0000           相同为0，相异为1
//	int input = 0;
//	scanf("%d", &input);
//	find_odd(input);  //奇数位
//	find_even(input);  //偶数位
//	return 0;
//}

//3. 输出一个整数的每一位。
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
//void printf_every(int x)
//{
//	//123
//	//12+3
//	//1+2+3
//	if (x <10)
//	{
//		printf("%d ", x);
//	}
//	else
//	{
//		printf_every(x / 10);
//		printf("%d ", x % 10);
//	}
//}
//int main()
//{
//	int input = 0;
//	scanf("%d", &input);
//	printf_every(input);
//	return 0;
//}
//4.编程实现：
//两个int（32位）整数m和n的二进制表达中，
//有多少个位(bit)不同？
//输入例子 :
//1999 2299
//输出例子 : 7
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{

}
//5.写博客总结C语言操作符，博客链接发给我，并分享到群里。
//
//
