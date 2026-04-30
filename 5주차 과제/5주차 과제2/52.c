//동적할당

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> // malloc, free사용

int main(void) {
	int n, max;
	int* arr;

	printf("입력할 숫자 개수:");
	scanf("%d", &n); //사용자가 직접 변수 입력

	arr = (int*)malloc(sizeof(int) * n);// malloc함수 malloc(size_t size) 얼마만큼의 메모리가 필요한지 
	//size만큼 메모리를 할당하여서 그 시작 주소를 반환함
	if (arr == NULL)
		exit(1); // 만약 arr이 비어있다면 벗어남

	for (int i = 0; i < n; i++) {
		printf("%d번째 숫자 입력:", i);
		scanf("%d", &arr[i]);//사용자가 n번 arr에 저장된 요소를 접근
	}
	max = arr[0];
	for (int i = 0; i < n; i++)
		if (max <= arr[i])
			max = arr[i];// 만약 반복하다 max보다 큰 arr요소가 나오면 max 교체

	printf("입력한 숫자 중 최댓값 : %d\n", max);

	free(arr);//free하는 이유 : 메모리를 낭비하지 않기 위해 바로 반납
	return 0;


}
