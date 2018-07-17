//
// Created by Garven on 2018/7/14.
//
#include <stdio.h>

#define N 5

// === 指针与数组: === //
// === 1 数组名: 就是数组的首地址, 即 &score[0] == score === //
// === 2 指针运算: 一个类型为T的指针的移动, 以sizeof(T)为移动单位, 而数组是连续的内存空间, 所以指针移动一个单位(*ptr_score + 1), 就指到了下一个元素(score[++i])。=== //
/*
                 -------
    0028FF10    |   1   |   score[0]
                 -------
    0028FF18    |   2   |   score[1]
                 -------
    0028FF20    |   3   |   score[3]
                 -------
    0028FF28    |   4   |   score[4]
                 -------
    0028FF30    |   5   |   score[5]
                 -------
*/

int main ()
{

    double score[] = {1, 2, 3, 4, 5};
    double * ptr_score;
    ptr_score = score;

    printf("&score[0]: %p\n", &score[0]);
    printf("score: %p\n", score);
    printf("sizeof(score): %d\n", sizeof(score));
    printf("sizeof(ptr_score): %d\n", sizeof(ptr_score));

    int i;

    for (i = 0; i < 5 ; ++i) {
        printf("&score[%d]: %p\n", i, &score[i]);
//        printf("%.2lf\n", ptr_score[i]);

        // 强烈推荐使用这种方式访问
        printf("%.2lf\n", *ptr_score + i);

        // 这种方式若需要重新遍历, 则需要重置指针, 不然会指去其它内存地址
//        printf("%.2lf\n", *ptr_score++);
    }


}
