//아 몰랑
// 백준 10828

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 10000

// 스택 구조체 정의
typedef struct{
    int data [MAX_SIZE]; // 스택을 구성하는 정수형 배열
    int top; // 스택의 가장 위를 나타내는 인덱스
}Stack;

// 스택에 원소를 추가하는 함수
void push(Stack *stack, int item){
    if(stack -> top < MAX_SIZE){ // 스택이 꽉 차있지 않으면
        stack -> data[stack -> top++] = item; // top을 하나 증가시키고 해당 위치에 원소를 추가
    }
}

// 스택에서 원소를 제거하고 반환하는 함수
int pop(Stack *stack){
    if(stack -> top > 0){ // 스택이 비어있지 않으면
        return stack -> data[--stack -> top]; // top을 하나 감소시키고 해당 위치의 원소를 반환
    }
    return -1; // 스택이 비어있는경우 -1 반환
}

// 스택의 원소 개수를 반환하는 함수
int size(Stack *stack){
    return stack -> top; // 현재 스택의 top값이 스택의 원소 개수와 같음
}

// 스택이 비어있는지 여부를 반환하는 함수
int empty(Stack *stack){
    return stack -> top == 0 ? 1 : 0; // 스택의 top이 0이면 비어있는 상태이므로 1반환, 아니면 0반환
}

// 스택의 가장 위에 있는 원소를 반환하는 함수
int top(Stack *stack){
    if(stack -> top > 0){ // 스택이 비어있지 않으면
        return stack -> data[stack -> top - 1]; // top-1 위치에 있는 원소를 반환
    }
    return -1; // 스택이 비어있는경우 -1 반환
}

int main(){
    int n;
    scanf("%d", &n); // 명령받을 개수

    Stack stack;
    stack.top = 0; // 스택 초기화

    char command[10]; 
    int num;

    for(int i = 0; i < n; i++){
        scanf("%s", command);
        if(strcmp(command, "push") == 0){ //command에 입력받은 문자와 push라는 글자가 같을시 시행
            scanf("%d", &num);
            push(&stack, num);
        }else if(strcmp(command, "pop") == 0){
            printf("%d\n", pop(&stack));
        }else if(strcmp(command, "size") == 0){
            printf("%d\n", size(&stack));
        }else if(strcmp(command, "empty") == 0){
            printf("%d\n", empty(&stack));
        }else if(strcmp(command, "top") == 0){
            printf("%d\n", top(&stack));
        }
    }

    return 0;
}