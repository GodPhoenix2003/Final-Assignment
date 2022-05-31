#include <stdio.h>

//main function
void main(){
    int n;
    printf("\nEnter the number to be checked: ");
    scanf("%d", &n);
    if(n==0)
        printf("\n0 is neither prime nor non-prime\n");
    else if(n==1 || n==-1)
        printf("\n%d is a prime number\n", n);
    else{
        int flag=1;
        for(int i=2;i<=n/2;i++){
            if(n%i==0){
                flag=0;
                break;
            }
            else
                continue;
        }
        if(flag==1)
            printf("\n%d is a prime number\n", n);
        else
            printf("\n%d is not a prime number\n", n);
    }
}