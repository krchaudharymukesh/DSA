#ifndef HEADER_FILE
#define HEADER_FILE

#define MAX 100

char st[MAX];
int top=-1;

void push(char st[], char);
char pop(char st[]);
void InfixtoPostfix(char source[], char target[]);
int getPriority(char);


#endif