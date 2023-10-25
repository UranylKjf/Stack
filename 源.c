#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//数组实现栈
#define Maxsize 10
int top = -1;
int arr[Maxsize];
void push(int x) {
	if (top == Maxsize - 1) {
		printf("Error,stackoverflow\n");
		return;
	}
	arr[++top]=x;
}
void pop() {
	if (top == -1) {
		printf("No elements to pop");
		return;
	}
	top--;
}
int topElem() {
	return arr[top];
}
int isEmpty() {
	return (top == -1);

}
void Print() {
	printf("The stack is:");
	for (int i = 0; i <= top; i++) {
		printf("%d\n", arr[top]);
	}
}
int main() {
	push(2);
	push(3);
	pop();
	Print();
	pop();
	printf("empty?%d", isEmpty());
}
/*
//链表实现栈

#include<stdio.h>
#include<stdlib.h>
typedef struct stack {
	int data;
	struct stack* next;

}stack;
void push(stack** top,int x) {
	stack* temp = (stack*)malloc(sizeof(stack));
	temp->data = x;
	temp->next = *top;
	*top = temp;
}
void pop(stack** top) {
	if (top == NULL) {
		printf("No element to pop\n");
		return;
	}
	stack* temp = *top;
	*top = (*top)->next;
	free(temp);
}
int isEmpty(stack*top){
	return top == NULL;
}
int topElem(stack* top) {
	return top->data;
}
void Print(stack* top) {
	while (top != NULL) {
		printf("%d ", top->data);
		top = top->next;
	}
	printf("\n");
}

int main() {
	stack* top = NULL;
	push(&top, 2);
	push(&top, 3);
	push(&top, 4);
	pop(&top);
	Print(top);
	printf("The top element is %d\n", topElem(top));
	printf("is empty?%d", isEmpty(top));

}
*/
