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
			printf("����\n");
		}
		else {
			printf("С��\n");
		}

		scanf("%d", &number);
		n++;
	}
	


	printf("��ϲ�㣬����ˣ���ȷ��Ϊ%d����һ������%d��\n", a,n);
}