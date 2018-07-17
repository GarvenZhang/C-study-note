//
// Created by Garven on 2018/7/14.
//
#include <stdio.h>

// === 数组: 是一个变量, 由数据类型相同的一组元素相同 === //
// === 1 与 元素 的差别: 变量是内存中的一块空间, 数组是内存中一串连续地空间 === //
// === 2 标识符: 数组的名称 === //
// === 3 数组元素: 数组中存放的数据 === //
// === 4 元素下标: 元素的编号, 从0开始 === //
// === 5 元素类型: 元素的数据类型 === //
// === 6 数组长度: 固定不变，避免越界 === //

// === 一维数组: === //
// === 语法: datatype arrayName[size]; === //
// === 初始化: 未初始化的默认值为0 === //
// === 动态赋值: === //

#define N 5

int main ()
{
    const int SIZE = 100;

    int years[6] = {1, 2, 3, 4, 5, 6};

    int months[12] = {1, 3, 5, 6, 8, 10};

    int days[] =  {1, 15};

    // 错误, 未知元素个数！
    // int array[] = {};

    double score[5];
    int i;

    for (i = 0; i < N; i++)
    {
        printf("请输入第%d门课的成绩: \n", i + 1);
        scanf("%lf", &score[i]);
    }

    int total = 0;
    for (i = 0; i < N; ++i) {
        total += score[i];
    }

    printf("总和: %d\n", total);

    return 0;

}
