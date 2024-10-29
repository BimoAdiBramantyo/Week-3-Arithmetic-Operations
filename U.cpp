#include<stdio.h>
int main(){
	int T, A, B, C;
	long int A1, B1, C1;
	
	scanf("%d", &T);
	scanf("%d %ld", &A, &A1); getchar();
	scanf("%d %ld", &B, &B1); getchar();
	scanf("%d %ld", &C, &C1); getchar();
		
	
    double total_derajat1 = (A * A1) / 360.0;
	double total_derajat2 = (B * B1) / 360.0;
	double total_derajat3 = (C * C1) / 360.0;
	
	printf("%.2lf\n", total_derajat1);
	printf("%.2lf\n", total_derajat2);
	printf("%.2lf\n", total_derajat3);
}
