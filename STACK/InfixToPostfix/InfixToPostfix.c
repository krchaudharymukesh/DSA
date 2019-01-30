#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

void push(char st[], char);
char pop(char st[]);
void InfixtoPostfix(char source[], char target[]);
int getPriority(char);

int main()
{
    char infix[100], postfix[100];
    printf("\n Enter any infix expression : ");
    scanf("%s",infix);
    fflush(stdin);
    strcpy(postfix, "");
    InfixtoPostfix(infix, postfix);
    printf("\n The corresponding postfix expression is : ");
    printf("%s\n",postfix);
    return 0;
}




