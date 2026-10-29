#include <stdio.h>
#include <stdlib.h>
#define SIZE 5      //매크로, 코드를 유연하게 사용할 수 있음

int main(void)
{
    int i, average;
    int sum;
    int grade[SIZE];

    sum = 0;

    for (i = 0; i < SIZE; i++)
    {
        printf("Enter the grade : ");
        scanf("%d", &grade[i]);
        sum += grade[i];
    }

    average = sum / SIZE;
    printf("Average grade : %d\n", average);

    return 0;
}