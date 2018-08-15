//
// Created by Garven on 2018/7/14.
//
#include <stdio.h>
#include <ctype.h>

// === 变量的作用域和生命周期 === //

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
