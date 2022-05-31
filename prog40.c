#include <stdio.h>

//recursive function to calculate factorial
int recurfacto(int N){
    if(N==0)
        return(1);
    else
        return(N*recurfacto(N-1));
}

//main function
void main(){
    int n;
    printf("\nEnter the number of which the factorial is to be calculated: ");
    scanf("%d", &n);
    printf("\n%d! = %d\n", n, recurfacto(n));
}