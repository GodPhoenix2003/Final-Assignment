#include <stdio.h>

//main function
void main(){
    int n;
    printf("\nEnter the number of natural numbers you want to add: ");
    scanf("%d", &n);
    int sum=0,dup=n;
    while(dup>0){
        sum=sum+dup;
        dup--;
    }
    printf("\nThe sum of 1st %d natural numbers is: %d\n", n, sum);
}