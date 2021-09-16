#include<stdio.h>

int main(){
    int a,b,i,j,x;
    printf("enter lower bound: ");
    scanf("%d",&a);
    printf("enter upper bound: ");
    scanf("%d",&b);
    j=b-a-1;
    x=a;
    while(a<(b-1)){
        a++;
        i=a-1;
        while(!(a%i==0)){
            i--;
            if(i==1){
                continue;
            }else if(a%i==0){
                j--;
            }else{
                continue;
            }
        }
    }
    printf("number of prime numbers between %d and %d are %d",x,b,j);
    return 0;
}