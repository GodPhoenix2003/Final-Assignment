#include <stdio.h>
#include <string.h>

//main function
void main(){
    char x[100],y[100];
    printf("\nEnter the string to be reversed: ");
    gets(x);
    int i=strlen(x)-1,j=0;
    while(i>=0){
        y[j]=x[i];
        i--;
        j++;
    }
    printf("\nOriginal String: %s\nReversed String: %s\n", x, y);
}