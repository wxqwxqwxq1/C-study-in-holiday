#include <stdio.h>
#include <string.h>

//1. ������A�е����ݺ�����B�е����ݽ��н�����������һ����
//2. ����1 / 1 - 1 / 2 + 1 / 3 - 1 / 4 + 1 / 5 ���� + 1 / 99 - 1 / 100 ��ֵ��
//3. ��д������һ�� 1�� 100 �����������г��ֶ��ٸ�����9��

int main()
{
	/*
	//1. ������A�е����ݺ�����B�е����ݽ��н�����������һ����
	char array1[] = "qsdxaqsdqqqqq";
	char array2[] = "wwwhjdoiowwww";
	char array3[4] = { 'q','w','s',0 };
	//char array3[4] = "qwsy";
	for (int i = 0; i <= 10; i++)
	{
		char s = array1[i];
		array1[i] = array2[i];
		array2[i] = s;
	}
	printf("array1=%s\narray2=%s\n", array1,array2);
	printf("array3=%s\n", array3);
	printf("array3'length=%d",(int) strlen(array3));
	return 0;
	*/
	/*
	//2. ����1 / 1 - 1 / 2 + 1 / 3 - 1 / 4 + 1 / 5 ���� + 1 / 99 - 1 / 100 ��ֵ��
	double sum = 0.0;
	for (double i = 1.0; i <= 100; i++)
	{
		sum = 1 / i+sum;
		printf("%lf---%lf\n", 1 / i,i);
	}
	printf("%lf\n", sum);
	return 0;
	*/
	//3. ��д������һ�� 1�� 100 �����������г��ֶ��ٸ�����9��
	int number = 0;
	for (int i = 1; i <= 100; i++)
	{
		if (9 == i  / 10) number++;//ʮλ
		if (9 == i % 10) number++;//��λ
	}
	printf("%d\n", number);
	return 0;
}