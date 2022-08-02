#include <stdio.h>

int Add(int, int);

int main()
{
    int ret;
    printf("두 수를 입력 받아 덧셈하는 프로그램입니다.\n");
    ret = Add(3,4);
}
int Add(int a, int b)
{
    return a + b;
}