#include<stdio.h>

int main() {
	int a,b;
	scanf("%d %d",&a,&b);
	
	switch(a){
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			printf("31 ngay"); 
		    break;
		case 4:
		case 6:
		case 9:
		case 11:
			printf("30 ngay"); 
			break ;
		case 2:
			if((b%400==0)||(b%4==0&&b%100!=0)) {
				printf("29 ngay"); 
			}
			else {
				printf("28 ngay"); 
			} 
			break; 

 
		default:
			printf("Nhap lai ho tao");
			break; 
		 
		 
	} 
} 
