#include <stdio.h>

int soNguyenTo(int n){
	if(n <= 1){
		return 0;
	}else{
		for(int i = 2; i < n; i++){
			if(n%2==0){
				return 0;
			}
		}	
	}
	return 1;
}

int main(){
	int n1, n2;
	printf("nhap 2 so nguyen to:\n");
	scanf("%d", &n1);
	scanf("%d", &n2);
	printf("numOne = %s\n", soNguyenTo(n1)?"true":"false");
	printf("numTwo = %s", soNguyenTo(n2)?"true":"false");
	return 0;
}
