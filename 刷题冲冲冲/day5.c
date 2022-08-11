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

//4.编写一个程序，可以一直接收键盘字符，
//如果是小写字符就输出对应的大写字符，
//如果接收的是大写字符，就输出对应的小写字符，
//如果是数字不输出。

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	char ch = '0';
	while ((ch = getchar()) != EOF)
	{
		//if ('a'<=ch&&ch<='z') putchar(ch - 32);
		//else if ('A' <= ch&&ch<='Z') putchar(ch +32);
		if (97<=ch&&ch<=122) putchar(ch - 32);
		else if (65 <= ch&&ch<=90) putchar(ch +32);
		putchar('\n');
	}
	return 0;
}
 
//菲波那切数列
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int count = 0;
//int Fib(int n)
//{
//	if (n == 3) count++;
//	if (n <= 2) return 1;
//	else return Fib(n - 1) + Fib(n - 2);
//}
//int Fib2(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 0;
//	while (n>2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//
//int Fib3(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 2;
//	while (n>3)
//	{
//		a = b + c;
//		b = a + c;
//		c = a + b;
//		n -= 3;
//	}
//	if (n == 3) return c;
//	if (n == 2) return b;
//	if (n == 1) return a;
//}
//
//int main()
//{
//	int input = 0;
//	int result = 0;
//	scanf("%d", &input);
//	result = Fib3(input);
//	printf("%d\n", result);
//	printf("%d", count);
//	return 0;
//}
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	char  arr[] = "Qsqsqas";
//	char* p = arr;
//	printf("%c", *p);
//	printf("%p", arr);
//	p++;
//	printf("%c", *p);
//	return 0;
//}

////1.完成猜数字游戏。
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include<stdlib.h>
//#include <time.h>
//
//void game()
//{
//	int rand_number = 0;
//	int guess = 0;
//	//生成一个随机数
//	srand((unsigned int)time(NULL));
//	rand_number = rand() % 100 + 1;
//	//printf("%d\n", rand_number);
//	while (1)
//	{
//		printf("请输入你猜的数>: ");
//		scanf("%d", &guess);
//		if (rand_number > guess) printf("猜小了\n");
//		else if (rand_number < guess) printf("猜大了\n");
//		else {
//			printf("猜对了\n");
//			break;
//		}
//		/*break;*/
//	}
//}
//
//int main()
//{
//	printf("#################################\n");
//	printf("####1.退出游戏   2.开始游戏######\n");
//	printf("#################################\n");
//	while (1)
//	{
//		int choose = 0;
//		printf("请选择>:");
//		scanf("%d", &choose);
//		switch (choose) 
//		{
//		case 2: {game(); break;
//		}
//		case 1:goto end;
//		default:break;
//		}
//	}
//end:
//	return 0;
//}


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
//输入什么输出什么
//#include <stdio.h>
//int main()
//{
//	char ch = '0';
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch>'9')
//			continue;
//		putchar(ch);
//		putchar('\n');
//	}
//}
//自动关机
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//	//msg% username% / w / v 这是一个提示框
//again:
//	//system("msg %username% /w /v 请注意，你的电脑将在一分钟后关机，如果输入：我是猪，就取消关机");
//	printf("请注意，你的电脑将在一分钟后关机，如果输入：我爱你，就取消关机，请输入>：");
//	scanf("%s", input);
//	if (strcmp(input, "我爱你") == 0)
//	{
//		system("shutdown -a");
//		//system("msg %username% /w /v 你是猪，哈哈哈哈哈哈哈哈哈哈哈哈哈哈哈哈哈!!!!!!!!");
//		//system("msg %username% /w /v 电脑已取消关机");
//	}
//	else goto again;
//}
//int i = 0, j = 0;
//for (; i < 10; i++)
//{
//	for (; j < 10; j++)
//	{
//		printf("hehe\n");
//	}
//}
//判断素数
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <math.h>
//
////int is_prime(int x)
////{
////	int answer = 1;
////	for (int i = 2; i <= sqrt(x); i++)
////	{
////		if (x % i == 0)
////		{
////			answer = 0;
////			break;
////		}
////	}
////	return answer;
////}
//int is_prime(int x) {
//	int i = 2;
//	for (; i <= sqrt(x); i++)
//	{
//		if (x % i == 0) return 0;
//	}
//	return 1;
//}
//int main()
//{
//	int input;
//	scanf("%d", &input);
//	if (is_prime(input))
//		printf("是素数\n");
//	else
//		printf("不是素数\n");
//	return 0;
//} 
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
//int is_leap_year(int x)
//{
////	if (x % 400 == 0) return 1;
////	else if (x % 100 == 0) return 0;
////	else if (x % 4 == 0) return 1;
////	else return 0;
//	if ((x % 4 == 0 && x % 100 != 0) || (x % 400 == 0))
//		return 1;
//	else return 0;
//}
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (is_leap_year(year)) printf("%d ", year);
//	}
//}

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//int binary_search(int array[], int x,int y)
//{
//	printf("%d ", array[0]);
//	int left = 0, right = y;
//	int middle = (left + right) / 2;
//	while ((x != array[middle])&&(left<= y&&(right>=0)))
//	{
//		if (x > array[middle]) left = middle;
//		else right = middle; 
//		middle = (left + right) / 2;
//	}
//	if (x == array[middle]) return middle+1;
//	else return -1;
//}
//int binary_search(int array[], int x, int y)
//{
//	int left = 0, right = y - 1;
//	while (left <= right) {
//	int middle = (left + right) / 2;
//	if (array[middle] > x) right = middle - 1;
//	else if (array[middle] < x) left = middle + 1;
//	else if (array[middle] == x) return middle;
//	}
//	return -1;
//}
//int main()
//{
//	int y = 0;
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10,'/0'};
//	printf("%p\n", arr);
//	int k = 1;
//	//strlen(arr);//求字符串长度
//	y = sizeof(arr) / sizeof(arr[0]);//求数组长度
//	printf("下标为%d\n",binary_search(arr, k,y));
//}

//#include <stdio.h>
//int main()
//{
//	char c = 1;
//	+c;
//	!c;
//	printf("%u\n", sizeof(c));
//	printf("%d\n", sizeof(+c));
//	printf("%d\n", sizeof(!c));
//
//}
