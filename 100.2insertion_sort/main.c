//
// Created by Garven on 2018/7/14.
//
#include <stdio.h>

// === 插入排序: 从第二个数开始与前一个数比较, 若比它小则到它的位置 === //
// === 1 特点: 可提前终止, 因为前面的数是排好序的 === //
// === 2 优化: 将每轮需要比较的数拿出来存到变量中, 该轮比较完后插入到正确位置, 即不用swap函数 === //

void insertSort (int arr[], int n)
{
    for (int i = 1; i < n; ++i)
    {
        for (int j = i; j > 0; --j) {

            if (arr[j] < arr[j - 1]) {
                int temp = arr[j - 1];
                arr[j - 1] = arr[j];
                arr[j] = temp;
            // 前面肯定是已经排好序的
            } else {
                break;
            }

        }
    }
}

void insertSortBetter (int arr[], int n)
{
    for (int i = 1; i < n; ++i)
    {
        int min = arr[i];
        int j;

        for (j = i; j > 0 && arr[j - 1] > min; --j)
        {
            arr[j] = arr[j - 1];
        }

        arr[j] = min;
    }
}


int main ()
{
    int arr[10] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};

    insertSort(arr, 10);

    for (int i = 0; i < 10; ++i) {
        printf(" %d", arr[i]);
    }



    int arr1[10] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};

    insertSortBetter(arr1, 10);

    for (int i = 0; i < 10; ++i) {
        printf(" %d", arr1[i]);
    }
}
