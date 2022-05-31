#include <stdio.h>

//main function
void main(){
    int a,b;
    printf("\nEnter the numbers to be swapped:\n");
    scanf("%d %d", &a, &b);
    printf("\nBefore Swapping:-\na=%d   b=%d\n", a, b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nAfter Swapping:-\na=%d   b=%d\n", a, b);
}