#include <stdio.h>
#include<string.h>

//main function
void main(){
    char x[100],y[100],z[100];
    printf("\nEnter the two strings to be conatenated:\n");
    gets(x);
    gets(y);
    int i=0,j=0;
    while(x[i]!='\0'){
        z[j]=x[i];
        i++;
        j++;
    }
    i=0;
    while(y[i]!='\0'){
        z[j]=y[i];
        i++;
        j++;
    }
    printf("\n1st String: %s\n2nd String: %s\nConcatenated String: %s\n", x, y, z);
}