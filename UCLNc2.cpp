#include<stdio.h>

int main() {
	int a,b;
	scanf("%d %d",&a,&b );
	int x; 
	if(a==0||b==0){
		x=a+b; 
		printf("%d",x) ;
	} 
	else {
		while(a!=b){
			if(a>b){
				a-=b; 
			} 
			else {
				b-=a; 
			}
			x=b; 
		} 
		printf("%d",x); 
	} 

} 
 
