//
// Created by Garven on 2018/7/14.
//
#include <stdio.h>

#define N 5

void bubbleSort ()
{
    int i, j;
    int temp;
    int nums[N] = {16, 25, 9, 90, 23};

    for (i = 0; i < N- 1; ++i)
    {

        for (j = 0; j < N - 1 - i; ++j)
        {
            if (nums[j] < nums[j + 1])
            {
                temp = nums[j];
                nums[j] = nums[j + 1];
                nums[j+ 1] = temp;
            }
        }

    }

    printf("排序后的结果: \n");

    for (i = 0; i < N; ++i)
    {
        printf("%d\t", nums[i]);
    }

}

int main ()
{
    bubbleSort();
}
