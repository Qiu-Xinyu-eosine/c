#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main003()
{
    int sum = 0, count = 0, number;
    printf("������������������Z���س��������룺\n");
	// ʹ��scanf��ȡ������ֱ�������ļ�������

    while (scanf("%d", &number) == 1) {
        sum += number;
        count++;
    }

    if (count == 0) {
        printf("û��������Ч���ݣ��޷�����ƽ������\n");
    }
    else {
        double average = (double)sum / count;
        printf("ƽ����Ϊ%f\n", average);
    }
    return 0;
}
