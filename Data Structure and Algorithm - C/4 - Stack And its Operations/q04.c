/*
    Program to check whether a given segment of code has both opening and 
    closing brackets or not? i.e. check for balanced parentheses.
 */
#include<stdio.h>
int balance(char []);
char stk[100];
int top=-1;
void push(char ch)
{
    top++;
    stk[top]=ch;
}
char pop()
{
    char ch=stk[top];
    top--;
    return ch;
}
int balance(char str[])
{
    int i;
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]=='(')
            push(str[i]);
        else if(str[i]=='{')
            push(str[i]);
        else if(str[i]=='[')
            push(str[i]);
        else if(str[i]==')')
        {
            if(top==-1)
                return 0;
            else if(stk[top]=='(')
                pop();
            else
                return 0;
        }
        else if(str[i]=='}')
        {
            if(top==-1)
                return 0;
            else if(stk[top]=='{')
                pop();
            else
                return 0;
        }
        else if(str[i]==']')
        {
            if(top==-1)
                return 0;
            else if(stk[top]=='[')
                pop();
            else
                return 0;
        }
    }
    if(top!=-1)
        return 0;
    else
        return 1;
}
int main()
{
    char str[200];
    printf("%c",str[-1]);
    printf("\nEnter a Segment of Code : ");
    scanf("%[^\n]",str);
    if(balance(str))
        printf("\nYes , It is Balanced ..\n\n");
    else
        printf("\nNo , It is Not Balanced !\n\n");
}