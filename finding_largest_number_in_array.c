#include<stdio.h>

int main(){
    int arr[]={1,6,9,11,5};
    int a=arr[0];
    for(int i=0;i<=4;i++){
        if(a<arr[i]){
            a=arr[i];
        }
    }
    printf("the greatest number in the array is %d",a);
    return 0;
}