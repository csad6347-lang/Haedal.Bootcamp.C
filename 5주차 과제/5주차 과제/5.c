//파일 복사예제

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>

int main(void) {
	FILE* org = fopen("input.txt", "rt"); // fopen(파일이름, 모드), 읽기기능
	FILE* copy = fopen("output.txt", "wt"); //어떤 용도로 쓸건지 어떤 종류의 파일인지, 쓰기기능
	char str[100];

	if (org == NULL || copy == NULL) // || or 연산자
	{
		printf("파일 열기 실패!\n");
		exit(1);
	}
	printf("--------- org 내용 ------\n");
	while (fgets(str, sizeof(str), org) != NULL) {
		printf("현재 복사 문자열:\n");
		printf("%s\n", str);
		fputs(str, copy);
	}
	printf("\n");
	printf("----------------\n");
	if (feof(org) != 0)
		printf("파일 복사 성공!\n");
	else
		printf("파일 복사 실패!\n");

	fclose(org);
	fclose(copy);

	return 0;
}