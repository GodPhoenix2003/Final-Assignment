#include<stdio.h>
#include <string.h>

//main function
void main(){
    char a[100];
    printf("\nEnter the string: ");
    gets(a);
    int i;
    for(i=0;a[i]!='\0';++i);
    printf("\nString length: %d\n", i);
}