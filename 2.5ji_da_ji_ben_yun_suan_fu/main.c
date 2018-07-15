//
// Created by Garven on 2018/7/14.
//
#include <stdio.h>

// === 运算符: === //
// === 单等号: = , 从右往左计算, 如 int num = 1; 表示为 声明了一个int类型的变量num, 将1赋值给num === //
// === 一元运算符(操作数只有一): ++, -- === //
// === 二元运算符: +, -, *, /, % === //
// === 关系运算符: >, <, >=, <=, ==, != === //
// === 逻辑运算符: &&, ||, ! === //
// === 位运算符: &, |, ~, ^, <<, >>, >>> === //
// === sizeof(name): 获取数据类型占用内存空间的大小, 字节为单位 === //

// === 优先级: === //
/*

 () sizeof ++ --
 !
 算术运算符
 关系运算符
 &&
 ||
 赋值运算符

*/

void main ()
{
    // 0 为 假, 1 为 真, C里没有bool
    printf("5 < 6? %d\n", 5 > 6);
    printf("5 > 6? %d\n", 5 < 6);

    printf("整型所占空间是 %d 字节\n", sizeof(1997));
    printf("单精度所占空间是 %d 字节\n", sizeof(1997.0f));
    printf("双精度所占空间是 %d 字节\n", sizeof(1997.00));

    // 短路运算: false && xxx, xxx不会被执行
    int num = 10;
    int result = num++ > 11 && --num < 20;
    printf("result = %d, %d\n", num, result);

    printf("%d\n", 45 % 3 * 9);
}
