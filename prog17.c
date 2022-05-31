#include <stdio.h>

//main function
void main(){
    int n;
    printf("\nEnter the number of columns: ");
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        for(int j=n;j>i;j--)
            printf("%d ", j);
        printf("\n");
    }
}
