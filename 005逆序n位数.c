#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a=0;
	scanf("%d", &a);

	int digit = 0, ret = 0;
	while (a > 0) {
		ret = a % 10;
		printf("%d", ret);
		digit = digit * 10 + ret;
		a /= 10;
		//printf("a=%d,digit=%d,ret=%d\n", a, digit, ret);
	}
	//printf("Êý×Öµ¹ÐòÎª%d\n", digit);
}