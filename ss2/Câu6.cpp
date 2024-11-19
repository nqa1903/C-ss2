#include<stdio.h>
int main(){
	float pi = 3.14;
	float radius;
	printf("Nhap ban kinh hinh tron : ");
	scanf("%f" , &radius);
	printf("Chu vi hinh tron la  : %.2f \n" , 2*pi*radius);
	printf("Dien tich hinh tron la : %.2f \n" , pi*radius*radius);
	return 0;
}
