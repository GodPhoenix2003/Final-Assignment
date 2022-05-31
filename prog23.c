#include <stdio.h>
#include <math.h>

//digit counter
int digitcounter(int N){
    int i=0;
    while(N>0){
        i++;
        N=N/10;
    }
    return(i);
}

//armstrong number check
int armcheck(int N){
    int sum=0,dup=N;
    int i=digitcounter(N);
    while(dup>0){
        int x=dup%10;
        sum=sum+(int)pow(x,i);
        dup=dup/10;
    }
    if(sum==N)
        return(1);
    else
        return(0);
}

//main function
void main(){
    int n;
    printf("\nEnter the numnber to be checked: ");
    scanf("%d", &n);
    if(armcheck(n)==1)
        printf("\n%d is armstrong number\n", n);
    else
        printf("\n%d is not armstrong number\n", n);
}