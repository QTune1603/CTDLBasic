#include<stdio.h>

int main() {
	int n;
	scanf("%d",&n);
	int i;
	for(i=2;i<=n;i++){
		int x=0;
		while(n%i==0){
			n/=i;
			x++;
		}
		if(x!=0){
			if(n==1){
				printf("%d^%d",i,x);
		    }
		    else{
				printf("%d^%d x ",i,x);
			}
		}


	}

}
