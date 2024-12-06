#include <stdio.h>

int tong(int a, int b){
	int total = a + b;
	return total;
}

int main(){
	int a = 10,b = 50;
	printf("Tong: %d", tong(a, b));
	return 0;
}
