#include <stdio.h>

//celsius to fahrenheit
float ctof(float c){
    float f=((9.0/5.0)*c)+32.0;
    return(f);
}

//fahrenheit to celsius
float ftoc(float f){
    float c=(5.0/9.0)*(f-32.0);
    return(c);
}

//main function
void main(){
    float C,F;
    int opt;
    do{
        printf("\nOption 1: celsius to fahrenheit");
        printf("\nOption 2: fahrenheit to celsius");
        printf("\nEnter your option number: ");
        scanf("%d", &opt);
        switch (opt){
            case 1:
                printf("\nEnter the temperature in celsius: ");
                scanf("%f", &C);
                printf("Corresponding temperature in Fahrenheit: %f\n", ctof(C));
                break;
            case 2:
                printf("\nEnter the temperature in fahrenheit: ");
                scanf("%f", &F);
                printf("Corresponding temperature in Celsius: %f\n", ftoc(F));
                break;
            default:
                break;
        }
        printf("\nDo want to run the code again?(yes-1): ");
        scanf("%d", &opt);
    }while(opt==1);
}