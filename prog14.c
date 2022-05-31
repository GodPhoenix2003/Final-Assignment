#include <stdio.h>
#include <string.h>

//main function
void main(){
    char a;
    printf("\nEnter the character: ");
    scanf("%c", &a);
    int b=(int)a;
    if(b==97 || b==101 || b==105 || b==111 || b==117 || b==65 || b==69 || b==73 || b==79 || b==85)
        printf("\n%c is a vowel\n", a);
    else
        printf("\n%c is a consonent\n", a);
}