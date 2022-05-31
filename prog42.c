#include <stdio.h>
#include <stdlib.h>

//main function
void main(){
    int xr,xc,yr,yc;
    printf("\nEnter the rows and columns of 1st matrix, respectively:\n");
    scanf("%d %d", &xr, &xc);
    printf("\nEnter the rows and columns of 2nd matrix, respectively:\n");
    scanf("%d %d", &yr, &yc);
    if(xr==yr && xc==yc){
        int *x,*y,*z;
        int r=xr, c=xc;
        x=(int *)malloc(r*c*sizeof(int));
        y=(int *)malloc(r*c*sizeof(int));
        z=(int *)malloc(r*c*sizeof(int));
        printf("\nEnter the values for the 1st source matrix:\n");
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                int a;
                scanf("%d", &a);
                *(x+i*c+j)=a;
            }
        }
        printf("\nEnter the values for the 2nd source matrix:\n");
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                int a;
                scanf("%d", &a);
                *(y+i*c+j)=a;
            }
        }
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++)
                *(z+i*c+j)=*(x+i*c+j)+*(y+i*c+j);
        }
        printf("\n1st Source Matrix:-\n");
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++)
                printf("%d ", *(x+i*c+j));
            printf("\n");
        }
        printf("\n2nd Source Matrix:-\n");
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++)
                printf("%d ", *(y+i*c+j));
            printf("\n");
        }
        printf("\nFinal Matrix:-\n");
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++)
                printf("%d ", *(z+i*c+j));
            printf("\n");
        }
    }
    else
        printf("\nWrong Input!\n");
}