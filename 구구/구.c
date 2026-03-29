//±¸±¸´Ü

#include<stdio.h>


void func(int a) {
	int i;
	for (i = 1; i < 10; i++) {
		printf(" %d * %d\n", a, i);
	}

}



int main() {
	int a;

	scanf_s("%d", &a);

	
	
	func(a);
	

}