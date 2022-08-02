#include <stdio.h>

int main()
{
    int sungjuk[10] = { 70, 85, 100, 95, 90, 71, 88, 92, 69, 76};
    int i, temp, j, k;

    for(i = 0; j < 10; i++){
        for(j = i + 1; j < 10; j++){
            if(sungjuk[i] > sungjuk[j]){
                temp = sungjuk[i];
                sungjuk[i] = sungjuk[j];
                sungjuk[j] = temp;
            }
        }
        printf("\n %d time of sort : \n", i+1);
        for(k = 0; k < 10; k++)
            printf("%d\t", sungjuk[k]);
        printf("\n");
    }
}