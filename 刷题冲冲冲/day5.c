//1.��ɲ�������Ϸ��
//
//2.д����������������������в�����Ҫ�����֣�
//�ҵ��˷����±꣬�Ҳ������� - 1.���۰���ң�
//
//3.��д����ģ��������������ĳ�����
//����������������룬������ȷ����ʾ����¼�ɹ���, �������
//�����������룬����������Ρ����ξ�������ʾ�˳�����
//
//4.��дһ�����򣬿���һֱ���ռ����ַ���
//�����Сд�ַ��������Ӧ�Ĵ�д�ַ���
//������յ��Ǵ�д�ַ����������Ӧ��Сд�ַ���
//��������ֲ������

//4.��дһ�����򣬿���һֱ���ռ����ַ���
//�����Сд�ַ��������Ӧ�Ĵ�д�ַ���
//������յ��Ǵ�д�ַ����������Ӧ��Сд�ַ���
//��������ֲ������

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
 
//�Ʋ���������
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

////1.��ɲ�������Ϸ��
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include<stdlib.h>
//#include <time.h>
//
//void game()
//{
//	int rand_number = 0;
//	int guess = 0;
//	//����һ�������
//	srand((unsigned int)time(NULL));
//	rand_number = rand() % 100 + 1;
//	//printf("%d\n", rand_number);
//	while (1)
//	{
//		printf("��������µ���>: ");
//		scanf("%d", &guess);
//		if (rand_number > guess) printf("��С��\n");
//		else if (rand_number < guess) printf("�´���\n");
//		else {
//			printf("�¶���\n");
//			break;
//		}
//		/*break;*/
//	}
//}
//
//int main()
//{
//	printf("#################################\n");
//	printf("####1.�˳���Ϸ   2.��ʼ��Ϸ######\n");
//	printf("#################################\n");
//	while (1)
//	{
//		int choose = 0;
//		printf("��ѡ��>:");
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


//���������rand()������ʹ��
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

//3.��д����ģ��������������ĳ�����
//����������������룬������ȷ����ʾ����¼�ɹ���, �������
//�����������룬����������Ρ����ξ�������ʾ�˳�����
//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	int i = 0;
//	char ret[20] = { 0 };
//	char password[20] = { 0 };
//	printf("����������:>");
//	scanf("%s", password);
//	printf("��ȷ������:>\n");
//	for (i = 0; i < 3; i++)
//	{
//		printf("����������:>(�㻹��%d�λ��ᣩ",3-i);
//		scanf("%s", ret);
//		if (strcmp(ret, password) == 0)
//		{
//			printf("��¼�ɹ�\n");
//			break;
//		}
//	}
//	if (i == 3) printf("��¼ʧ��\n");
//	return 0;
//}

//getchar�ȴӻ�������ȡ���ݣ�һ��һ����ȡ������������û��ʱ������ʾ���룻�����ԲŻ��������һ���ַ�����ӡһ���ַ��������
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
//	printf("����������:>");
//	scanf("%s", password);
//	while (getchar() == '/n');
//	printf("�Ƿ�ȷ�ϣ�Y/N��:>\n");
//	ret = getchar();
//	if (ret == 'Y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}else
//	{
//		printf("����ȷ��\n");
//	}
//	return 0;
//}
//����ʲô���ʲô
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
//�Զ��ػ�
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//	//msg% username% / w / v ����һ����ʾ��
//again:
//	//system("msg %username% /w /v ��ע�⣬��ĵ��Խ���һ���Ӻ�ػ���������룺��������ȡ���ػ�");
//	printf("��ע�⣬��ĵ��Խ���һ���Ӻ�ػ���������룺�Ұ��㣬��ȡ���ػ���������>��");
//	scanf("%s", input);
//	if (strcmp(input, "�Ұ���") == 0)
//	{
//		system("shutdown -a");
//		//system("msg %username% /w /v ����������������������������������������!!!!!!!!");
//		//system("msg %username% /w /v ������ȡ���ػ�");
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
//�ж�����
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
//		printf("������\n");
//	else
//		printf("��������\n");
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
//	//strlen(arr);//���ַ�������
//	y = sizeof(arr) / sizeof(arr[0]);//�����鳤��
//	printf("�±�Ϊ%d\n",binary_search(arr, k,y));
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
