#include <stdio.h>

//main function
void main(){
    int n,a=65;
    printf("\nEnter the number of rows: ");
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            printf("%c ", a);
            a++;
        }
        printf("\n");
    }
}