//1.完成猜数字游戏。
//
//2.写代码可以在整型有序数组中查找想要的数字，
//找到了返回下标，找不到返回 - 1.（折半查找）
//
//3.编写代码模拟三次密码输入的场景。
//最多能输入三次密码，密码正确，提示“登录成功”, 密码错误，
//可以重新输入，最多输入三次。三次均错，则提示退出程序。
//
//4.编写一个程序，可以一直接收键盘字符，
//如果是小写字符就输出对应的大写字符，
//如果接收的是大写字符，就输出对应的小写字符，
//如果是数字不输出。


//生成随机数rand()函数的使用
//#include <stdlib.h>
//#include <stdio.h>
//#include <time.h>
//
//void main(void)
//{
//    int i;
//    RAND_MAX;
//    /* Seed the random-number generator with current time so that
//     * the numbers will be different every time we run.
//     */
//     /*srand((unsigned)time(NULL));*/
//    srand(10011111);
//    printf("  %-6d\n", rand());
//    printf("  %-6d\n", rand());
//    srand(2);
//    printf("  %-6d\n", rand());
//
//    srand(3);
//    printf("  %-6d\n", rand());
//
//    srand(10011111);
//    for (int j = 0; j <= 100; j++) {
//  printf("  %-6d\n", rand());
//    printf("  %-6d\n", rand());
//    }
//  
//}

//3.编写代码模拟三次密码输入的场景。
//最多能输入三次密码，密码正确，提示“登录成功”, 密码错误，
//可以重新输入，最多输入三次。三次均错，则提示退出程序。
//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	int i = 0;
//	char ret[20] = { 0 };
//	char password[20] = { 0 };
//	printf("请输入密码:>");
//	scanf("%s", password);
//	printf("请确认密码:>\n");
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码:>(你还有%d次机会）",3-i);
//		scanf("%s", ret);
//		if (strcmp(ret, password) == 0)
//		{
//			printf("登录成功\n");
//			break;
//		}
//	}
//	if (i == 3) printf("登录失败\n");
//	return 0;
//}

//getchar先从缓冲区读取数据（一个一个读取），当缓冲区没有时，会提示输入；；所以才会出现输入一个字符串打印一个字符串的情况
//#include <stdio.h>
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//	return 0;
//}
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	int ret = 0;
//	char password[20] = { 0 };
//	printf("请输入密码:>");
//	scanf("%s", password);
//	while (getchar() == '/n');
//	printf("是否确认（Y/N）:>\n");
//	ret = getchar();
//	if (ret == 'Y')
//	{
//		printf("确认成功\n");
//	}else
//	{
//		printf("放弃确认\n");
//	}
//	return 0;
//}