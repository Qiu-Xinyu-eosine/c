#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(0));
	int a = rand()%101;
	//int a = 50;

	int n = 1,number = 0;
	scanf("%d", &number);
	 
	while (number != a) {
		if (number > a) {
			printf("大了\n");
		}
		else {
			printf("小了\n");
		}

		scanf("%d", &number);
		n++;
	}
	


	printf("恭喜你，答对了！正确数为%d。你一共猜了%d次\n", a,n);
}