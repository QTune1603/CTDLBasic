#include<stdio.h>

int ucln(int a,int b,int i)
{ 
	 for(i=a;i>0;i--) {
		    if(a%i==0 && b%i==0) {
			return i; 
		    } 
	    } 
 } 
 int main()
 {
 	int a,b,i;
	scanf("%d %d",&a,&b);
	ucln(a,b,i);
	printf("%d",i);
	 
  } 
