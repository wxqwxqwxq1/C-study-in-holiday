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