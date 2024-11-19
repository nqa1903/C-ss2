#include <stdio.h>

int main(){
	float side;
	printf("Nhap canh hinh vuong : ");
	scanf("%f" , &side);
	fflush(stdin);
	printf("Chu vi hinh vuong : %.2f \n" , side*4);
	printf("Dien tich hinh vuong : %.2f \n" , side*side);
	return 0;
}
