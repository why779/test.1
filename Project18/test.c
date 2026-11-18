
//计算1！+2！+...+10!
#include<stdio.h>
int main()
{
	int i = 1;
	int n = 0;
	int ret = 1;
	int sum = 0;
	for (n = 1;n <= 3;n++)
	{
		ret = ret * n;
		sum = sum + ret;
	}
	printf("%d\n", sum);
	return 0;
}
