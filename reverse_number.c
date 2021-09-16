#include<stdio.h>

int main(){
    int i=0,j=0,t,a;
    char str[13];
    printf("enter the number: ");
    scanf("%s",str);
    while(str[j] != ('\0')){
        j++;
    }
    j--;
    a=j;
    while(!(i==(a/2)+1)){
        t=str[i];
        str[i]=str[j];
        str[j]=t;
        i++;
        j--;
    }
    printf("the reversed number is %s",str);
    return 0;
}