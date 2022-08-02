#include <stdio.h>

int main() {
	int choice = 1, sum = 0, num = 0, price = 0; //choice변수를 1로 잡기

	while(choice != 0){
		printf("choice of menu===========\n");
		printf("1. Americano(3,000)\n");
		printf("2. Ice Americano(3,500)\n");
		printf("3. Cafe Latte(3,000)\n");
		printf("4. Dezawa(700)\n");
		printf("5. Caramel Macchiato (4,300)\n");
		printf("6. Blue Lemonade (3,500)\n");
		printf("0. End\n");
		scanf("%d", &choice);
		printf("input glasses: \n");
		scanf("%d", &num);
		
		switch(choice){
			case 1:
				price = 3000;
				break;
			case 2:			
				price = 3500;
				break;
			case 3:
				price = 3800;
				break;
			case 4:
				price = 700;
				break;
			case 5:
				price = 4300;
				break;
			case 6:
				price = 3500;
				break;
			default:
				break;
		}
		
		sum =sum + (price * num);
	}

	printf("Total = %d", sum);
}