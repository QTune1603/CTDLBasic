#include<stdio.h>
#include<math.h>

int main()
{
	long long n,flag=0;
	scanf("%d",&n);
	int i;
	for(i=2;i<=sqrt(n);i++){
		if(n%i==0){
		    flag=1;
			break;
		}
	}
	if(flag==0&&n>=2){
		printf("YES");
	}
	else{
		printf("NO");
	}

 }
