#include<stdio.h>
#include<stdlib.h>
int main(){
    int* arr=(int*)malloc(10*sizeof(int));
    int n,i=0,j;
    printf("enter the number whose binary you want: ");
    scanf("%d",&n);
    while(n!=0){
       arr[i]=(n%2);
       i++;
       n=n/2; 
    }
    i--;
    printf("the binary form of %d is ",n);
    for(j=i;j>=0;j--){
        printf("%d",arr[j]);
    }
    return 0;
}