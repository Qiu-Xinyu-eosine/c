#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main002()
{
	int sum = 0, count = 0;
	int number=0;

	while (number != -1) {
			sum += number;
			count++;
			scanf("%d", &number);
		}

double average = 1.0 * sum / count;

	if (count=0) {
		printf("û��������Ч���ݡ�");
	}
	else {
		printf("ƽ����Ϊ%f", average);
	}
}