#include <stdio.h>

//main function
void main(){
    int n;
    printf("\nEnter the number of rows: ");
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++)
            printf("%c ", 64);
        printf("\n");
    }
}