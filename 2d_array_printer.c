#include<stdio.h>
#include<stdlib.h>
int main(){
    int m,n,i,j;
    printf("enter number of rows in the array:\n");
    scanf("%d",&m);
    printf("enter number of columns in the array:\n");
    scanf("%d",&n);
    int **arr=(int**)malloc(10*sizeof(int*));
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("enter the element at %dth row %dth column:\n ",i+1,j+1);
            scanf("%d",*(arr+i)+j);
    }
    }
    printf("your matrix is:\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d ",*(*(arr+i)+j));
    }
    printf("\n");
    }
    free(arr);
    return 0;

}

