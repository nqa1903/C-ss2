#include <stdio.h>

int main(){
	float rec_long;
	printf("Nhap chieu dai hinh chu nhat : ");
	scanf("%f" , &rec_long);
	fflush(stdin);
	float rec_wide;
	printf("Nhap chieu rong hinh chu nhat : ");
	scanf("%f" , &rec_wide);
	fflush(stdin);
	printf("Chu vi hinh chu nhat la : %.2f \n" , (rec_long + rec_wide)*2);
	printf("Dien tich hinh chu nhat la : %.2f \n" , rec_long*rec_wide);
	return 0;
}
