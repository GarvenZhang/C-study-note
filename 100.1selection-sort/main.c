//
// Created by Garven on 2018/7/14.
//
#include <stdio.h>

#define N 5

// === 选择排序: 在未排序的数组中找最小的元素放在该数组范围的第一个位置, 以此类推 === //

void selectionSort (int arr[], int n)
{
    for (int i = 0; i < n; ++i)
    {

        int minIndex = i;

        // 寻找[i, n)中的最小值
        for (int j = i + 1; j < n; ++j)
        {

            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }

        }

        // 将最小的放在第一位
        if (minIndex != i)
        {
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }

    }    
}

int main ()
{
    int arr[10] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};

    selectionSort(arr, 10);

    for (int i = 0; i < 10; ++i) {
        printf(" %d", arr[i]);
    }
}
