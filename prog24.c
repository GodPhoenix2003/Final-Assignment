#include <stdio.h>

//digit counter
int digitcounter(int N){
    int i=0;
    while(N>0){
        i++;
        N=N/10;
    }
    return(i);
}

//number reversal
int rev(int N){
    int dup=0,i=digitcounter(N);
    for(int j=1;j<=i;j++){
        dup=(dup*10)+N%10;
        N=N/10;
    }
    return(dup);
}

//palindrome check
int palindromecheck(int N){
    int reverse=rev(N);
    if(N==reverse)
        return(1);
    else
        return(0);
}

//main function
void main(){
    int n;
    printf("\nEnter the numbner to be checked: ");
    scanf("%d", &n);
    if(palindromecheck(n)==1)
        printf("\n%d is palindrome number\n", n);
    else
        printf("\n%d is not palindrome number\n", n);
}