#include <stdio.h>

//main function
void main(){
    int x,y;
    printf("\nEnter the numbers to be swapped:\n");
    scanf("%d %d", &x, &y);
    printf("\nBefore Swapping:-\nx=%d   y=%d\n", x, y);
    int temp=x;
    x=y;
    y=temp;
    printf("\nAfter Swapping:-\nx=%d   y=%d\n", x, y);
}