#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int sum = 0, count = 0;
	int number=0;

	while (number != -1) {
			sum += number;
			count++;
			scanf("%d", &number);
		}

	if (count==0) {
		printf("没有输入有效数据。");
	}
	else {
		double average = 1.0 * sum / count;
		printf("平均数为%f", average);
	}
}
