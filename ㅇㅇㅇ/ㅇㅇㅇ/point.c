#include <stdio.h>

int sum(int* arr, int size) {
	int total = 0;
	for (int i = 0; i < size; i++) {
		total += arr[i]; //arr[i] == *(arr + i)
	}
	return total;

}

int main() {
	int nums[5] = { 10,20,30,40,50 };
	int size = sizeof(nums) / sizeof(nums[0]);

	int result = sum(nums, size); //배열 이름 = 시작 주소, & 불필요
	printf("합계 : %d\n", result);

	return 0;
}