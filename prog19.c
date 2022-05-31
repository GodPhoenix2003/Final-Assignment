#include <stdio.h>

//main function
void main(){
    int n;
    printf("\nEnter the number of columns: ");
    scanf("%d", &n);
    int a=n;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++)
            printf("%d ", a);
        a--;
        printf("\n");
    }
}