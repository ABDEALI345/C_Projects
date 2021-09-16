#include<stdio.h>
#include<string.h>
int main(){
    int a,b,i;
    printf("enter number of rows in the array:\n");
    scanf("%d",&a);
    printf("enter number of columns in the array:\n");
    scanf("%d",&b);
    char arr[a][b];
    for(i=0;i<=a;i++){
    printf("enter all the elements in %dth row:\n ",i+1);
    gets(arr[i]);
    }
    printf("your array is\n");
    for(i=0;i<=a;i++){
        puts(arr[i]);
    }

    return 0;

}

