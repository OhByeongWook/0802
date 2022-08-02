#include <stdio.h>

int main()
{
	int people;
	int total, p_w;
	int c_num;
	
	printf("Caribbean Bay Rate Calculation\n\n");
	printf("Select an option\n");
	printf("1.Smart Booking\n");
	printf("2.KB Kookmin Card and Hana Card\n");
	printf("3.Middle and High school students\n");	
    
	
	printf("Choice Number(1-3): ");
	scanf("%d", &c_num);
	switch(c_num)
	{
		case 1:
			p_w=29900;
			break;
		case 2:
			p_w=37000;
			break;
		case 3:
			p_w=21000;		
	}
	
	printf("people number : ");
	scanf("%d", &people);
	
	total= p_w * people;
	
	printf("\n\nRate calculation=========\n");
	printf("people number :  %d\n", people);
	printf("total : %d", total);
 }