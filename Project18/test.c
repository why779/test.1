//编写代码，演示多个字符从两端移动，向中间汇聚
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>
int main()
{
	char arr1[] = "welcome to bit!!!";
	char arr2[] = "#################";

	int left = 0;
	int right = strlen(arr2)-1;

	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		Sleep(1000);
		system("cls");//system是一个库函数，可以执行系统命令
		left++;
		right--;
	}
	

	return 0;
}