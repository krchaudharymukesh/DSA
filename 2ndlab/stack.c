/*Program determining stack*/
#include <stdio.h>
#include <stdlib.h>
#define size 100
struct Stack{
    int stack[size];
    int top;
}s;

void push(int);
void pop();
void show();
int main(){
    s.top = -1;
    int ch;
    while(1){
        printf("*** Menu ***\n");
        printf("Press 1. to perform push operation \n");
        printf("Press 2. to perform pop operation \n");
        printf("Press 3. to show data\n");
        printf("Press 4. to exit from program \n");
        printf("Enter your choice: ");
        scanf("%d",&ch);
        //system("clear||cls");
        switch(ch){
            case 1:
                {
                    int number;
                    printf("Enter the number you want to put on stack: ");
                    scanf("%d",&number);
                    push(number);
                }
            break;
            case 2:
                pop();
            break;
            case 3:
                show();
            break;
            case 4:
                exit(0);
            default:
                printf("Enter approprite number\n");
            break;
        }
    }
}
void push(int x){
    if(s.top >= size-1){
        printf("Stack is full!!!\n");
        exit(0);
    }
    else{
        s.top++;
        s.stack[s.top] = x;
    }
}

void pop(){
    int x;
    if(s.top==-1){
        printf("The stack is empty!!!\n");
        exit(0);
    }
    else{
        x = s.stack[s.top];
        s.top--;
        printf("poped element is %d\n",x);
    }
}

void show(){
    int i;
    for(i=0;i<=s.top;i++){
        printf("The entered number/s:\n");
        printf("%d\n",s.stack[i]);
    }
}
