#include <stdio.h>
#define SIZE 4

void square_array(int a[], int size);
void print_array(int a[], int size);

int main(void)
{
    int list[SIZE] = {1, 2, 3, 4};

    print_array(list, SIZE);    // 원래 값 출력
    square_array(list, SIZE);   // 원본 배열의 각 요소를 제곱
    print_array(list, SIZE);

    return 0;
}

void square_array(int a[], int size)    //void square_array(const int a[], int size)이라고 쓰면 이 함수 안에서 a의 요소를 읽기만 하겠다는 것
{
    int i;
    for (i = 0; i < size; i++)
        a[i] = a[i] * a[i];
}

void print_array(int a[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%3d", a[i]);
    printf("\n");
}