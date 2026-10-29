#include <stdio.h>
#define ROWS 3
#define COLS 3

// C = A + B 형태로 행렬 덧셈
void addMatrix(int A[][COLS], int B[][COLS], int C[][COLS])
{
    int i, j;
    for (i = 0; i < ROWS; i++)          // 행 반복
        for (j = 0; j < COLS; j++)      // 열 반복
            C[i][j] = A[i][j] + B[i][j];
}

// 행렬 내용을 출력
void printMatrix(int A[][COLS])
{
    int i, j;
    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLS; j++)
            printf("%d ", A[i][j]);
        printf("\n");
    }
}

int main(void)
{
    int A[ROWS][COLS] = {   // 더하기 대상 행렬
        {2, 3, 0},
        {8, 9, 1},
        {7, 0, 5} };
    int B[ROWS][COLS] = {   // 더하기 대상 행렬
        {1, 0, 0},
        {0, 1, 0},
        {0, 0, 1} };
    int C[ROWS][COLS];      // 덧셈 결과 행렬

    addMatrix(A, B, C);
    printMatrix(C);

    return 0;
}