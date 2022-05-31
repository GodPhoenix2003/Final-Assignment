#include <stdio.h>
#include <string.h>

//main function
void main(){
    char name[100];
    printf("\nEnter your name: ");
    gets(name);
    printf("\nString length: %d\n", strlen(name));
}