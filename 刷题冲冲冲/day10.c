//1.
//дһ���������ز����������� 1 �ĸ���
//���磺 15       0000 1111       4 �� 1
//����ԭ�ͣ�
//int  count_one_bits(unsigned int value)
//{
//    // ���� 1��λ��
//}
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <stdio.h>
//int  count_one_bits(unsigned int value)
//{
//	//15 0000 1111
//	//&  0000 0001 ������
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
//2.��ȡһ�������������������е�ż��λ������λ��
//�ֱ�������������С�
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <stdio.h>
//void find_odd(unsigned int x)
//{
//	int i = 0;
//	for (i = 31; i >= 0; i = i - 2)
//	{
//		//��x����iλȻ��&1���õ���i+1λ��ֵ
//		printf("��%dλ:", i );
//		printf("%d\n", (x>>i) & 1);
//	}	
//}
//void find_even(unsigned int x)
//{
//	int i = 0;
//	for (i = 30; i >= 0; i = i - 2)
//	{
//		//��x����iλȻ��&1���õ���i+1λ��ֵ
//		printf("��%dλ:", i);
//		printf("%d\n", (x >> i) & 1);
//	}
//}
//int main()
//{
//	// 0000 1111
//	//^0000 0000           ��ͬΪ0������Ϊ1
//	int input = 0;
//	scanf("%d", &input);
//	find_odd(input);  //����λ
//	find_even(input);  //ż��λ
//	return 0;
//}

//3. ���һ��������ÿһλ��
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
//4.���ʵ�֣�
//����int��32λ������m��n�Ķ����Ʊ���У�
//�ж��ٸ�λ(bit)��ͬ��
//�������� :
//1999 2299
//������� : 7
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{

}
//5.д�����ܽ�C���Բ��������������ӷ����ң�������Ⱥ�
//
//
