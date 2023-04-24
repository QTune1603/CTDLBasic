#include<stdio.h>
#include<math.h>
 
int main() {
	float xa,xb,xc,ya,yb,yc;
	scanf("%f%f\n", &xa, &ya);
	scanf("%f%f\n", &xb, &yb);
	scanf("%f%f ", &xc, &yc);
	float AB = sqrt(pow(xa-xb, 2) + pow(ya-yb, 2));
	float BC = sqrt(pow(xb-xc, 2) + pow(yb-yc, 2));
	float AC= sqrt(pow(xc-xa, 2) + pow(yc-ya, 2));
	
	printf("\nAB = %.2f, BC=%.2f, AC=%.2f", AB, BC ,AC);
	 
	
	
	
	
} 
