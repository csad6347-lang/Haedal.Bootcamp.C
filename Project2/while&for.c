//반복을 이용

#include <stdio.h>

int main() {
	int sum = 0;
	for (int i = 1; i <= 10; i++) // 시작, 조건, 어떻게
		sum += i;

	// while 사용
	sum = 0;
	int i = 1;
	while (i < 10) {
		sum += i;
		i++;
	}

	printf("%d", sum);
}