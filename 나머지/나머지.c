//첫째 줄에 (A+B)%C, 둘째 줄에 ((A%C) + (B%C))%C, 셋째 줄에 (A×B)%C, 넷째 줄에 ((A%C) × (B%C))%C를 출력한다.

#include <stdio.h>

int main() {
	int A;
	int B;
	int C;

	scanf_s("%d", &A);
	scanf_s("%d", &B);
	scanf_s("%d", &C);

	printf("%d\n", (A + B) % C);
	printf("%d\n", ((A % C) + (B % C)) % C);
	printf("%d\n", ((A*B) % C));
	printf("%d\n", (((A % C) * (B % C)) % C));

	return 0;
}