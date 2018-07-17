//
// Created by Garven on 2018/7/14.
//
#include <stdio.h>
#include <ctype.h>

// === 函数: 完成特定任务的独立程序代码, 语法规则定义了函数的结构和使用方式 === //
// === 1 种类: === //
// === 1.1 内置函数: 由C语言系统提供, 需要在程序前包含定义函数的头文件 === //
// === > <stdio.h>: printf(), scanf(), getchar(), putchar() === //
// === > <time.h>: time() === //
// === > <string.h>: strcpy(), strcmp() === //
// === > <ctype.h>: isupper(), islower(), isalpha(), isdigit(), toupper(), tolower() === //
// === > <math.h>: ceil(), floor(), sqrt(), pow(). abs() === //
// === 1.2 自定义函数: 不带参数/带参数 === //

int main ()
{

    printf("%d, %d\n", isupper('a'), islower('a'));

    // 若传入的是数字, 表示的是 ascii码
    printf("%d, %d\n", isdigit(9), isdigit('9'));

    // 打印所有的ascii码对应的字符
    int i;

    for (i = 0; i < 127; ++i) {
        printf("%c, ", i);
    }
}
