#include <stdio.h>

void Display_gugudan(void);

int num; //단 
int flag; // 0이면 반복하고 1이면 스탑하는 

int main()
{
    flag = 0;
    printf("구구단 출력 프로그램입니다.\n");

    while(!flag) // !는 반대
    {
        printf("몇 단을 출력할까요? : ");
        scanf("%d", &num);
        
        if(num > 1 && num < 10) // num은 2부터 9까지만
        {
            flag = 1;
            printf("%d단을 입력하셨군요. \n\n", num);
            Display_gugudan();
        }
        else
            printf("2부터 9까지만 가능합니다. 다시 입력해주세요.\n", num);
    }
    return 0;
}
void Display_gugudan(void)
{
    int i ;
    for(i = 1; i < 10; i++)
    {
        printf("%d x %d = %d\n", num, i, (num * i));
    }
}