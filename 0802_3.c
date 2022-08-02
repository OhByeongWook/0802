#include <stdio.h>

int main()
{
    char ans1;
    int ans2, i;
    int seats[10] = {10};
    while(1)
    {
        printf("Would you like to reserve a seat? (y or n) ");
        scanf(" %c", &ans1);
        if(ans1 == 'y')
        {
            printf("--------------------\n");
            printf(" 1 2 3 4 5 6 7 8 9 10\n");
            printf("--------------------\n");

            for( i = 0; i < 10; i++)
                printf(" %d", seats[i]);

            printf("\n");

            printf("Which seat would you like to reserve?");
            scanf("%d", &ans2);

            if(ans2 <= 0 || ans2 > 10){
                printf("Enter a number between 1 and 10\n");
                continue;
            }
            if(seats[ans2-1] == 0){
                seats[ans2-1] = 1;
                printf("You have a reservation.\n");
            }
            else
                printf("This seat has already been reserved.\n");
            }
            else if(ans1 == 'n')
                return 0;
        }
        return 0;
    }
