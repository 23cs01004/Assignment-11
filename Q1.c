#include <stdio.h>
#include <string.h>

#define MAX 100
int top = -1;

char stack[MAX];

void push(char data) 
{ 
    if (top == MAX - 1)
    { 
        printf("Overflow stack!\n"); 
        return;
    } 
    top++; 
    stack[top] = data;
}

char pop() 
{ 
    if (top == -1) 
    { 
        printf("Empty Stack!\n"); 
        return '\0';
    }
    char data = stack[top]; 
    top--;
    return data;
}

void main()
{
    char str[MAX];
    printf("Enter string: ");
    gets(str);
    int len = strlen(str);
    for(int i=0; i<len; i++)
    {
        push(str[i]);
    }
    printf("Reversed string: ");
    for(int i=0; i<len; i++)
    printf("%c", pop());
}