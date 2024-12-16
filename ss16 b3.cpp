#include <stdio.h>

int sum(int a, int b, int *tong){
	*tong=a+b;
}

int main(){
	int num_1=6, num_2=5, tong;
	sum(num_1, num_2, &tong);
	printf("%d+%d=%d", num_1, num_2, tong);
	return 0;
}
