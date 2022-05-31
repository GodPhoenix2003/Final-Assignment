#include <stdio.h>
#include <stdlib.h>

//main function
void main(){
    int n;
    printf("\nEnter the number of numbers you want to add: ");
    scanf("%d", &n);
    int *a=malloc(n*sizeof(int));
    printf("\nEnter the numbers:\n");
    int sum=0;
    for(int i=0;i<n;i++)
        sum=sum+a[i];
    printf("\nSum= %d\n", sum);
}