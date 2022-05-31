#include <stdio.h>

//recursive function
int recursum(int n){
    if(n==1)
        return(1);
    else if(n>1)
        return(n+recursum(n-1));
}

//non-recursive function
void nonrecursum(int n){
    int sum=0;
    for(int i=1;i<=n;i++)
        sum=sum+i;
    printf("\nSum = %d", sum);
}

//main function
void main(){
    int N;
    printf("\nEnter the number of natural numbers you want to add: ");
    scanf("%d", &N);
    int opt;
    {
        printf("\nMethod of adding:-\n");
        printf("Option 1: Recursive Method\n");
        printf("Option 2: Non-Recurcive Method\n");
        printf("Enter your option number: ");
        scanf("%d", &opt);
        if(opt==1){
            int SUM=recursum(N);
            printf("\nSum = %d", SUM);
        }
        else if(opt==2)
            nonrecursum(N);
        else
            printf("Wrong Input!");
        printf("\nDo you want to run the code again(Yes-1): ");
        scanf("%d", &opt);
    }while(opt==1);
}