//1. ��ӡ100~200֮�������
//2. ����˷��ھ���
//3. �ж�1000��-- - 2000��֮�������
#include <stdio.h>
int main()
{
	//1. ��ӡ100~200֮�������
	for (int i = 100; i < 201; i++)
	{
		int answer = 1;
		for (int j = 2; j <= i / 2; j++)
		{
			if (i % j == 0)
			{
				answer = 0;
				break;
			}
		}
		if (answer == 1) printf("%d\n", i);
	}
	//2. ����˷��ھ���
	for (int k = 1; k <= 9; k++)
	{
		for (int p = 1; p <= k; p++)
		{
			printf("%d*%d=%d ", p, k, k * p);
		}
		printf("\n");
	}
	//3. �ж�1000��-- - 2000��֮�������
	for (int p = 1000; p <= 2000; p++)
	{
		if (p % 100 == 0)
		{
			if (p % 400 == 0) printf("%d������\n", p);
		}
		else
		{
			if (p % 4 == 0) printf("%d������\n", p);
		}
	}

	return 0;
}