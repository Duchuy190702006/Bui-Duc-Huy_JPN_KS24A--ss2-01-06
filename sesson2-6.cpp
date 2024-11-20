#include<stdio.h>

int main() {
	const float PI = 3.14;

	int r=4.0;
	int chuvi =  2 * PI * r;
	int dientich = PI * r * r;
	
	printf("ban kinh cua hinh tron: %.2f\n",r);
	printf("chu vi cua hinh tron: %.2f\n",chuvi);
	printf("dien tich cua hinh tron: %.2f\n",dientich);
	return 0;
}
