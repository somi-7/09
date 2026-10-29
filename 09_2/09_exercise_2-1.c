#include <stdio.h>
#define SIZE 5

int main(void)
{
    int i;
    int grade[SIZE];

    printf("Enter the grade of 5 people\n");

    // 반복문으로 점수 입력
    for (i = 0; i < SIZE; i++)
        scanf("%d", &grade[i]);

    // 반복문으로 점수 출력
    for (i = 0; i < SIZE; i++)
        printf("grade[%d] = %d\n", i, grade[i]);

    return 0;
}