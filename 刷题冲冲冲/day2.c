//1. �����������α�����ֵ��������ֵ�����ݽ��н�����
//2. ����������ʱ���������������������ݣ������⣩
//3.��10 �����������ֵ��
//4.�����������Ӵ�С�����
//5.�������������Լ����
#pragma warning(disable : 6031)//���C6031
#define _CRT_SECURE_NO_WARNINGS//���scanf�Ĳ���ȫ��ʾ
#include <stdio.h>
void swap(int* p, int* q)
{
	int t = 0;
	t = *p;
	*p = *q;
	*q = t;
}
int main()
{
				//1. �����������α�����ֵ��������ֵ�����ݽ��н�����
				//int x = 0, y = 0, z = 0;
				//printf("inupt x,y:\n");
				//scanf("%d%d", &x, &y);
				//z = x; x = y; y = z;
				//printf("x=%d\ny=%d", x, y);
			//2. ����������ʱ���������������������ݣ������⣩
			//int x = 0, y = 0;
			//printf("inupt x,y:\n");
			//scanf("%d%d", &x, &y);
			//x += y; y = x - y; x -=y;
			//printf("x=%d\ny=%d", x, y);
		//3.��10 �����������ֵ��
		//int arr[10] = { 23,45,34,23,12,34,34,45,56,78 };
		//int max = 0;
		//for (int i = 0; i <= 9; i++)
		//{
		//	if (arr[i] > max) max = arr[i];
		//}
		//printf("max=%d", max);
	////4.�����������Ӵ�С�����
	//int x = 0, y = 0, z = 0;
	//printf("inupt x,y,z:\n");
	//scanf("%d%d%d", &x, &y,&z);
	//if (x < y) swap(&x,& y);
	//if (x < z) swap(&x,& z);
	//if (y < z) swap(&y, &z);
	//printf("%d %d %d\n", x, y, z);
	
	//5.�������������Լ��--շת�����
	int x = 0, y = 0;
	printf("inupt x,y:\n");
	scanf("%d%d", &x, &y);
	int p = x, q = y;
	while (p % q != 0)
	{
		int t = p;
		p = q;
		q = t % q;
	}
	printf("%d", q);
	return 0;
}