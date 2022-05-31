#include <stdio.h>
#include <string.h>

//main function
void main(){
    char a[100];
    printf("\nEnter the string: ");
    gets(a);
    char b[100];
    strcpy(b,a);
    strrev(b);
    if(strcmp(a,b)==0)
        printf("\n%s is a palindrome string\n", a);
    else
        printf("\n%s is not a palindrome string\n", a);
}