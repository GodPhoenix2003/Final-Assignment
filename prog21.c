#include <stdio.h>

//main function
void main(){
    int n;
    printf("\nEnter the number of columns: ");
    scanf("%d", &n);
    int a=5;
    for(int i=0;i<n;i++){
        for(int j=5;j>=a;j--)
            printf("%d ", j);
        a--;
        printf("\n");
    }
}