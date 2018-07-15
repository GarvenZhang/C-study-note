//
// Created by Garven on 2018/7/14.
//
#include <stdio.h>

// === 数据类型(基本类型): === //
// === 1 数值: === //
// === 1.1 整型: === //
// === > int: 32位, 4字节 === //
// === > short: 16位, 2字节  === //
// === > long: 32位, 4字节 === //
// === 1.2 非整型: === //
// === > float: 32位, 7个有效数字(保留小数点后6位), 显示则加f    === //
// === > double: 64位, 默认小数类型 === //
// === 2 非数值: === //
// === 2.1 char: 8位, 实质上是用整型保存的，比如A -> 65, 对应的是ASCII码, 小写字母 - 32(空格的ASCII码) = 大写字母 === //
// === > signed char: 有符号，取值为-128 ~ 127 === //
// === > unsigned char: 取值为 0 ~ 255 === //

void main ()
{
    float width = 10000000000.0f;
    float height = 0.00001234567f;
    double attack = 990.18;
    char str = 'A';

    printf("width: %f\n", width);
    printf("height: %.5f\n", height);
    printf("attack: %lf\n", attack);
    printf("char: %c, %d, 小写a: %c", str, str, str + 32);
}
