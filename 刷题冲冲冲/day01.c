//1. 打印100~200之间的素数
//2. 输出乘法口诀表
//3. 判断1000年-- - 2000年之间的闰年
#include <stdio.h>
int main()
{
	//1. 打印100~200之间的素数
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
	//2. 输出乘法口诀表
	for (int k = 1; k <= 9; k++)
	{
		for (int p = 1; p <= k; p++)
		{
			printf("%d*%d=%d ", p, k, k * p);
		}
		printf("\n");
	}
	//3. 判断1000年-- - 2000年之间的闰年
	for (int p = 1000; p <= 2000; p++)
	{
		if (p % 100 == 0)
		{
			if (p % 400 == 0) printf("%d是闰年\n", p);
		}
		else
		{
			if (p % 4 == 0) printf("%d是闰年\n", p);
		}
	}

	return 0;
}