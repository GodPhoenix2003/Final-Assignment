#include <stdio.h>

//recursive function
int recurfacto(int n){
    if(n==1)
        return(1);
    else if(n>1)
        return(n*recurfacto(n-1));
}

//non-recursive function
void nonrecurfacto(int n){
    int facto=1;
    for(int i=1;i<=n;i++)
        facto=facto*i;
    printf("\nFactorial of %d = %d\n", n, facto);
}

//main function
void main(){
    int N;
    printf("\nEnter the number of which the factorial is to be calculated: ");
    scanf("%d", &N);
    int opt;
    {
        printf("\nMethod of calculating factorial:-\n");
        printf("Option 1: Recursive Method\n");
        printf("Option 2: Non-Recurcive Method\n");
        printf("Enter your option number: ");
        scanf("%d", &opt);
        if(opt==1){
            int factorial=recurfacto(N);
            printf("\nFactorial of %d = %d\n", N, factorial);
        }
        else if(opt==2)
            nonrecurfacto(N);
        else
            printf("\nWrong Input!\n");
        printf("\nDo you want to run the code again(Yes-1): ");
        scanf("%d", &opt);
    }while(opt==1);
}