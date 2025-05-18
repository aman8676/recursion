#include<stdio.h>
#include<stdlib.h>
int main () {

    int n;
    printf("Enter the number of inputs:\n");
    scanf("%d",&n);

    printf("Enter the values:\n");

    int *ptr;
    ptr=(int*) malloc ((n+3)* sizeof(int));
    for (int i=0;i<(n+3);i++) {
        scanf("%d",&ptr[i]);
    }
    int l=0;

    
}