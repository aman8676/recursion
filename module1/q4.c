#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;  
    printf("enter value of n : ");
    scanf("%d",&n);
    int *ptr;
    ptr=(int*)malloc((n+3)*sizeof(int));
    printf("enter elements of array are : ");
    for(int i=0;i<n+3;i++)
    {
        scanf("%d",ptr+i);
    }
    int dup=-1;
    int idx=-1;
    for(int i=0;i<(n+3);i++)
    {
        for(int j=i+1;j<(n+3);j++)
        {
            if(ptr[i]==ptr[j])
            {
                dup=ptr[i];
                idx=i;
                break;
            }
            else
            {
                continue;
            }
        }
        if(dup!=-1)
        {
            break;
        }
    }
    printf("element stored in array which is repeating is : %d\n",dup);
    printf("elements stored in array before repeatation are : ");
    for(int i=0;i<idx;i++)
    {
        printf("%d ",ptr[i]);
    }
}