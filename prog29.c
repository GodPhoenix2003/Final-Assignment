#include <stdio.h>

//main function
void main(){
    int n;
    printf("\nEnter the number to be checked: ");
    scanf("%d", &n);
    if(n==0)
        printf("\n0 is neither odd nor even\n");
    else if(n%2==0)
        printf("\n%d is even\n", n);
    else if(n%2!=0)
        printf("\n%d is odd\n", n);
}