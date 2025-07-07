#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main003()
{
    int sum = 0, count = 0, number;
    printf("请输入若干整数，按Z并回车结束输入：\n");
	// 使用scanf读取整数，直到遇到文件结束符

    while (scanf("%d", &number) == 1) {
        sum += number;
        count++;
    }

    if (count == 0) {
        printf("没有输入有效数据，无法计算平均数。\n");
    }
    else {
        double average = (double)sum / count;
        printf("平均数为%f\n", average);
    }
    return 0;
}
