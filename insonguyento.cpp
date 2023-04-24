#include<stdio.h>
#include<math.h> 
int main()
{
	int n;
	scanf("%d",&n);
	int i,j; 
	int count=0; 
	int flag=0; 
	for(i=2;i<=n;i++){ 
		for(j=2;j<=sqrt(i);j++){
		 	if(i%j==0){ 
				flag =1;          
			} 
		}
		if (flag == 0) {
			count++; 
		}
		flag = 0;
	}
	printf("%d",count); 
} 
 

