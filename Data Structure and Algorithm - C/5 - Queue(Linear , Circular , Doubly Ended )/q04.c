// Q4. Implement a Queue and carry out its 
// various operations using two stacks.---*---

#include<stdio.h>
#include<stdlib.h>

void push(int);
int pop();
void display();
#define size 30
int stack1[size],stack2[size],top1=-1,top2=-1;
int main()
{
	int choice,item;
	while(1)
	{
		printf("\n1.INSERT\n2.DELETE\n3.DISPLAY\n4.EXIT\n");
		printf("\nEnter your choice : ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("\nEnter the value to insert : ");
				scanf("%d",&item);
				push(item);
				break;
			case 2:
				item=pop();
				printf("\nDeleted value = %d\n",item);
				break;
			case 3:
				display();
				break;
			case 4:
				printf("\nThank You !\n\n");
				exit(0);
			default:
				printf("\nWrong choice !\n\n");
		}
	}
    return 0;
}
void push(int item)
{
	if(top1 == size-1)
	{
		printf("\nQueue Overflow\n");
	}
	else
	{
		top1++;
		stack1[top1] = item;
	}
}
int pop()
{
	if(top1 == -1)
	{
		printf("\nQueue Underflow !\n");
	}
	else
	{
		int val;
		while(top1 != -1)
		{
			top2++;
			stack2[top2] = stack1[top1];
			top1--;
		}
		val=stack2[top2];
		top2--;
		while(top2 != -1)
		{
			top1++;
			stack1[top1] = stack2[top2];
			top2--;
		}
		return val;
	}	
}
void display()
{
	int index;
	if(top1 == -1)
	{
		printf("\nQueue Underflow !\n\n");
	}
	else
	{
		printf("\nValues of Queue are : ");
		for(index=0;index<=top1;index++)
		{
			printf("%d ",stack1[index]);
		}
		printf("\n");
	}
	
}