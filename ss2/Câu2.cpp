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
	int sum = a + b ;
	printf("Tong 2 so a + b = %d" , sum);
	return 0;
}
