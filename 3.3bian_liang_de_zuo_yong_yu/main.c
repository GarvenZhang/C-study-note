//
// Created by Garven on 2018/7/14.
//
#include <stdio.h>
#include <ctype.h>

// === 自定义函数: === //
// === 1 函数定义: return_type function_name([datatype1 arg1), [datatype arg1], [...]) {  // 函数体 } === //
// === 1.1 函数三要素: 返回值类型, 函数名, 参数列表 === //
// === 1.2 函数原型与函数定义的头部类似, 最后以分号结尾, 可写可不写 === //
// === 1.3 函数原型中的参数与名称可以省略, 只写参数类型 === //
// === 2 返回值: return === //
// === 2.1 返回值类型必须与原型中的返回值类型匹配 === //
// === 2.2 return 会立即终止函数并返回, 可返回空值 === //
// === 3 参数: 形参与实参 === //
/*

// 函数原型
int sum(int, int);

// 函数定义
int sum(int num1, int num2)
{
    // 函数实现的代码
}

*/

double power(double, int);

double power(double num1, int num2)
{
    double result = 1;
    int i;

    for (i = 0; i < num2; ++i) {
        result *= num1;
    }

    return result;
}


void main ()
{

    printf("%d的%d次幂等于: %.2lf", 2, 8, power(2, 8));

}
