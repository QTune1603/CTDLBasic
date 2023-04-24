#include<stdio.h>

int main()
{
	long long n,k=0;
	scanf("%lld",&n);
	int a;
	while(n>0){
		a=n%10;
		k=k*10+a;
		n/=10; 
	} 
	printf("%lld",k); 
 } 
