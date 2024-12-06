#include <stdio.h>

int inPhanTu(int arr[], int length){
	for(int i = 0; i < length; i++){
		printf("%d ", arr[i]);
	}
}

int main(){
	int arr[5]={1,62,8,1,9};
	int length = sizeof(arr)/sizeof(arr[0]);
	inPhanTu(arr, length);
	return 0;
}
