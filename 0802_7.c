#include <stdio.h>
void IncreaseAge(int);
static int age;

int main()
{
    int i;
    age = 33;
    printf("여기는 main()함수입니다.\n");
    printf(" age : %d\n\n", age);

    for(i = 0; i < 5; i++)
        IncreaseAge(10);

    printf("\n여기는 main()함수입니다.\n");
    printf(" age : %d\n", age);
    
    return 0;
}
void IncreaseAge(int num)
{
    static int age = 25;
    age = age + num;

    printf("여기는 IncreaseAge()함수 내부입니다.\n");
    printf(" age : %d\n", age);
}