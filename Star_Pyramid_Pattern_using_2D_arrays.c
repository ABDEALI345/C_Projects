#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    int n,i,j;
    char** a = (char**)calloc(n,sizeof(char*));
    printf("enter the level of pyramid: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        *(a+i)=(char*)calloc((2*n-1),sizeof(char));
        j=0;
        while(j<(n-1-i)){
            *(*(a+i)+j) = ' ';
            j++;
        }
        while(j<(n-1-i+(2*i+1))){
            *(*(a+i)+j)='*';
            j++;
        }
        while(j<(2*n-1)){
            *(*(a+i)+j) = ' ';
            j++;
        }
        //printf("%s",*(a+i));
        puts(*(a+i));
    }
    return 0;
 }