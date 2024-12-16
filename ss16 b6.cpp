#include <stdio.h>
int findItem(int *arr, int size, int value){
	for(int i=0; i<size; i++){
		if(arr[i]==value){
			return i;
		}
	}
	return -1;
}

int main(){
	int arr[]={5,3,1,6,8,2,4,7};
	int value=5;
	int size=sizeof(arr)/sizeof(arr[0]);
	int pos=findItem(arr, size, value);
	if(pos!=-1){
		printf("Phan tu %d nam o vi tri thu %d\n", value, pos+1);
	}else{
		printf("Khong tim thay phan tu %d\n", value);
	}
	return 0;
}
