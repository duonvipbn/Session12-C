#include <stdio.h>

int timPhanTuMax(int arr[], int length) {
	int max = 0;
	for(int i = 0; i < length; i++){
		if(max<arr[i]){
			max = arr[i];
		}
	}
	
    return max;
}

int main() {
    int arr[5] = {1,61,71,28,9};
    int length = sizeof(arr)/sizeof(arr[0]);
    printf("So phan tu lon nhat trong mang la: %d", timPhanTuMax(arr, length));

    return 0;
}

