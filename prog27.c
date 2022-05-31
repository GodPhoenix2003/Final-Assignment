#include <stdio.h>

//main function
void main(){
    int year;
    printf("\nEnter the year to be checked: ");
    scanf("%d", &year);
    if(year%4==0)
        printf("\n%d is leap year", year);
    else
        printf("\n%d is not leap year", year);
}