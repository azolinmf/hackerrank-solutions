//https://www.hackerrank.com/challenges/maximum-element/problem//

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

struct stack
{
    int data[10000000];
    int top;
}s;
int max=0;
void push()
{
    int item;
    scanf("%d",&item);
    s.top++;
    s.data[s.top]=item;
    if(max<s.data[s.top])
        max=s.data[s.top];
   
}
void pop()
{
    int i;
    if(max == s.data[s.top])
        max=0;
    s.top--;
     for(i=s.top;i>=0;i--)
        if(max<s.data[i])
            max=s.data[i];
}

int main()
{
    int t,n,choice;
    s.top = -1;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&choice);
        switch(choice)
        {
            case 1 :push();
            break;
            case 2:pop();
            break;
            case 3: printf("%d\n",max);
            break;
        }
    }
    return 0;
}