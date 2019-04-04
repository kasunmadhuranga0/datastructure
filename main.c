#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
#include "header.h"

int main()
{
    stack s;
    int i;
    char c;
    char str[]="I am Kasun";
    CreateStack(&s);

    printf("your string : %s\n",str);

    for(i=0; str[i]='\0'; i++)
    {
        if(!IsStackFull(&s))
        {
            printf("stack is full.\n");
        }

        else
        {
            push(str[i],&s);
        }
    }
    printf("reverse : ");

    while(!IsStackEmpty(&s))
    {
        pop(&c,&s);
        putchar(c);
    }
    return 0;

}
