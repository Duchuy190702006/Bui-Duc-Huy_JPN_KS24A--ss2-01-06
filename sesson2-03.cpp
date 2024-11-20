#include<stdio.h>

int main() {
	int A = 10;
	int B = 20;
	int tong;
	int hieu;
	int tich;
	float thuong;
	
	tong=A+B;
	hieu=A-B;
	tich=A*B;
	thuong=(float)A/B;
	
	
	printf("tong la %d\n",tong);
	printf("hieu la %d\n",hieu);
	printf("tich la %d\n",tich);
	printf("thuong la %.2f\d",thuong);
	return 0;
}
