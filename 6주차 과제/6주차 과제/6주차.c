// 구조체 이용
#include <stdio.h>
#include<stdlib.h>

typedef struct {
	int* data;
	int capacity;
	int top;
} StackType;


void init_stack(StackType* s) {
	s->top = -1;
	s->capacity = 1;
	s->data = (int* 0)malloc(s->capacity * sizeof(int));

}
int is_empty(StackType* s) {
	return (s->top == -1); // top이 -1이면 아무것도 없음
}
int is_full(StackType* s) {
	return (s->top == s->capacity - 1); // 배열이 끝까지 찼을 경우
}
void push(StackType* s, int item) {
	if (is_full(s)) {
		s->capacity *= 2;
		s->data = (int*)realloc(s->data, s->capacity * sizeof(int));
	}
	s->data[++(s->top)] = item; // push가 넣기 전에 top이 증가해야함.
}

int pop(StackType* s) {
	if (is_emty(s)) {
		fprint(stderr, "Stack is Empty\n");
		exit(1);
	}
	else return s->data[(s->top)--]; // 먼저 꺼내고 나서 감소해야함.
}

