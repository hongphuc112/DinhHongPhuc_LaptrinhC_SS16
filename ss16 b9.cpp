#include <stdio.h>

void addItem(int *arr, int *size, int newValue, int index){
	for(int i=*size; i>=index; i--){
		arr[i]=arr[i-1];
	}
	arr[index]=newValue;
	(*size)++;
}

int main(){
	int arr[]={1,2,3,4,5,6};
	int size=sizeof(arr)/sizeof(arr[0]);
	int index=3;
	int newValue=10;
	printf("Mang ban dau la:\n");
	for(int i=0; i<size; i++){
		printf("arr[%d]=%d\n", i, arr[i]);
	}
	addItem(arr, &size, newValue, index);
	printf("Mang sau khi chen phan tu la:\n");
	for(int i=0; i<size; i++){
		printf("arr[%d]=%d\n", i, arr[i]);
	}
	return 0;
	
}
