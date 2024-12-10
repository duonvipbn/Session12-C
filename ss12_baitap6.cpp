#include <stdio.h>

int soHoanHao(int n){
	int tong = 0;
	for(int i = 1; i < n; i++){
		if(n%i==0){
			tong += i;
		}
		if(tong == n){
			return 1;
		}else{
			return 0;
		}
	}
}

int main(){
	int n1, n2;
	printf("nhap 2 so nguyen to:\n");
	scanf("%d", &n1);
	scanf("%d", &n2);
	printf("numOne = %s\n", soHoanHao(n1)?"true":"false");
	printf("numTwo = %s", soHoanHao(n2)?"true":"false");
	return 0;
}
