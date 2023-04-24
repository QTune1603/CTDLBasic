#include <stdio.h>
int main(){
	int i,j;
	long a[5], min;
	for (i = 0; i < 4; i++){
		scanf("%li",&a[i]);
		if (i == 0) min = a[i];
		else if (a[i] < min) min = a[i];
	}
	long max = 0;
	for (i = 1; i <= min; i++){
		long temp = a[0] % i;
		int check = 0;
		for (j = 0; j < 4; j++){
			if (a[j] % i != temp){
				check++;
				break;
			}
		}
		if (check == 0 && temp > max) max = i; 
	}
	printf("%li",max);
}
