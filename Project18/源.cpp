#include<stdio.h>
int main()
{
	int m, n;
	int i;
	scanf("%d%d", &m, &n);
	for (i = m;; i--)
	{
		if (m%i == 0)
		{
			if (n%i == 0)
			{
				printf("m��n�����Լ��Ϊ %d.\n", i);
				break;
			}
		}
	}
	return 0;
}