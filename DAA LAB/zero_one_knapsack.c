//0/1 KnapSack Problem
#include<stdio.h>
void knapsack(int n, float weight[],float profit[],float capacity)
{
        float x[20],tp=0;
        int i,j,u;
        u=capacity;

        for(i=0;i<n;i++)
        {
                x[i]=0.0;
        }
        for(i=0;i<n;i++)
        {
                if(weight[i] > u)
                {
                        break;
                }
                else
                {
                        x[i]=1.0;
                        tp=tp+profit[i];
                        u=u-weight[i];
                }
        }
        printf("\nThe result vector : \n");
        for(i=0;i<n;i++)
        {
                printf("%.2f\t",x[i]);
        }
        printf("\nMaximum profit : %.2f\n",tp);
}
int main()
{
        float weight[20],profit[20],capacity;
        int num,i,j;
        float ratio[20],temp;
        printf("Enter the no of objects\n");
        scanf("%d",&num);
        printf("Enter the weights of each Object: \n");
        for(i=0;i<num;i++)
        {
                scanf("%f",&weight[i]);
        }
        printf("\nEnter the profits of each Object: \n");
        for(i=0;i<num;i++)
        {
                scanf("%f",&profit[i]);
        }
        printf("\nEnter the capacity of knapsack: \n");
        scanf("%f",&capacity);
        for(i=0;i<num;i++)
        {
                ratio[i]=(profit[i]/weight[i]);
        }
        for (i = 0; i < num; i++)
        {
                for (j = i + 1; j < num; j++)
                {
                        if (ratio[i] < ratio[j])
                        {
                                temp = ratio[j];
                                ratio[j] = ratio[i];
                                ratio[i] = temp;

                                 temp = weight[j];
                                 weight[j] = weight[i];
                                 weight[i] = temp;

                                temp = profit[j];
                                profit[j] = profit[i];
                                profit[i] = temp;
                        }
                }
        }
        knapsack(num, weight, profit, capacity);
}

