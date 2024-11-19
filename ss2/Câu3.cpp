#include<stdio.h>

int main(){
	int a;
	printf("Nhap so a : ");
	scanf("%d" , &a);
	fflush(stdin);
	int b;
	printf("Nhap so b : ");
	scanf("%d" , &b);
	fflush(stdin);
	float minus = a - b;
	printf("Hieu a - b = %.2f \n",minus);
	float multi = a * b;
	printf("Tich a * b = %.2f \n",multi);
	if(b == 0){
		printf("Thuong khong hop le \n");
	}else{
		float divide = a / b;
		printf("Thuong a / b = %.2f \n",divide);
	}
	return 0;
}
