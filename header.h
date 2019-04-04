#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

#include<stdio.h>
#include<stdbool.h>
#include<conio.h>

#define MAXSTACK 100
#define EMPTY -1
#define FULL MAXSTACK-1

//typedef enum {TRUE,FALSE} bool;
typedef  char StackEntry;
typedef struct{
  int top;
  StackEntry entry[MAXSTACK];
  }stack;

void CreateStack(stack *s)
{
    s->top= -1;
}

 bool IsStackEmpty(const stack *s )
{
    return (s->top == EMPTY);
   // return (s->top==-1);
}

 bool  IsStackFull(const stack *s )
{
    return (s->top == FULL);
    //return (s->top==MAXSTACK -1);
}


void push(StackEntry item,stack *s)
{
    if(IsStackFull(s)){
        printf("stack is full\n");

        }
    else
        s->entry[++s->top]=item;
}

void pop(StackEntry *item, stack *s)
{
   if(IsStackEmpty(s))
        {
        printf("stack is empty\n");

        }
    else
       *item = s->entry[s->top--];
}




#endif // STACK_H_INCLUDED
