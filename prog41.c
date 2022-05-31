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
    for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(a[i]>a[j]){
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
            else
                continue;
        }        
    }
    printf("\nLargest array element: %d\nSmallest array element: %d\n", a[0]);
}