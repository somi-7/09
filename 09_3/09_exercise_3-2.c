#include <stdio.h>
#define SIZE 5

int main(void)
{
    int i;
    int a[SIZE] = {1, 2, 3, 4, 5};
    int b[SIZE] = {1, 2, 7, 4, 9};   // 2번, 4번 인덱스 값을 다르게 설정
    int flag_same = 1;               // 1: 같음, 0: 다름

    for (i = 0; i < SIZE; i++)
    {
        if (a[i] != b[i])
        {
            printf("Index %d is different. (a[%d] = %d, b[%d] = %d)\n",
                    i, i, a[i], i, b[i]);
            flag_same = 0;
        }
    }

    if (flag_same == 1)
        printf("Array has same value.\n");
    else
        printf("Array has different value.\n");

    return 0;
}