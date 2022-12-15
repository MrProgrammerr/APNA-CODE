/*
 Program For Evaluating a postfix Expression.
 */
#include<stdio.h>
#include<ctype.h>//isalnum()
#include<math.h>//pow(val1,val2)
#include<stdlib.h>//exit(int)
int a[30];
int top=-1;
void push( int x)
{
    top++;
    a[top] = x;
}
int pop()
{
    int y;
    y = a[top];
    top--;
    return y;
}
int evluate_postfix(char post[100])
{
    int i,val=0,num1,num2,res;
    for(i=0;post[i]!='\0';i++)
    {
        if(isalnum(post[i]))
            val=(val*10)+(post[i]-48);
        else if(post[i]==' ' && isalnum(post[i-1]))
            {
                push(val);
                val=0;
            }
        else if(post[i]=='+' || post[i]=='-' || post[i]=='*' || post[i]=='/' || post[i]=='%' || post[i]=='^')
            {
                num2=pop();
                num1=pop();
                switch(post[i])
                {
                    case '+':
                            res=num1+num2;
                            push(res);
                            break;
                    case '-':
                            res=num1-num2;
                            push(res);
                            break;
                    case '*':
                            res=num1*num2;
                            push(res);
                            break;
                    case '/':
                            res=num1/num2;
                            push(res);
                            break;
                    case '%':
                            res=num1%num2;
                            push(res);
                            break;
                    case '^':
                            res=pow(num1,num2);
                            push(res);
                            break;
                }
            }
            else if(post[i]==' ')
                continue;
            else 
            {
                printf("\nINVALID INPUT GIVEN !\n\n");
                exit(0);
            }
    }
    return pop();
}
int main()
{
    int i,val=0,num1,num2,res;
    char post[100];
    printf("\nEnter the Postfix Expression(Number_operater) : ");
    scanf("%[^\n]",post);
    printf("\nResult of Postfix Evaluation is : %d\n\n",evluate_postfix(post));
}
