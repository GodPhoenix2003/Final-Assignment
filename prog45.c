#include <stdio.h>
#include <stdlib.h>

//main function
void main(){
    int n;
    int *a;
    printf("\nEnter the number of numbers you want to compare: ");
    scanf("%d", &n);
    a=malloc(n*sizeof(int));
    printf("\nEnter the numbers you want to compare:\n");
    for(int i=0;i<n;i++)
        scanf("%d", &a[i]);
    printf("\nOriginal Array:-\n");
    for(int i=0;i<n;i++)
        printf("%d", a[i]);
    int data;
    printf("\nEnter the data to be searched: ");
    scanf("%d", &data);
    for(int i=0;i<n;i++){
        if(a[i]==data){
            printf("\nData Found\n");
            n=0;
            break;
        }
        else
            continue;
    }
    if(n!=0)
        printf("\nData not Found\n");
}