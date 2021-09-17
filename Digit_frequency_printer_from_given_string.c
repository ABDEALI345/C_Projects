#include<stdio.h>

int main(){
    char str[1000];
    char *c;
    int x0=0,x1=0,x2=0,x3=0,x4=0,x5=0,x6=0,x7=0,x8=0,x9=0;
    printf("enter the string\n");
    gets(str);
    for(c=str;*c!='\0';c++){
        if(*c=='0'){
            x0++;
        }else if(*c=='1'){
            x1++;
        }else if(*c=='2'){
            x2++;
        }else if(*c=='3'){
            x3++;
        }else if(*c=='4'){
            x4++;
        }else if(*c=='5'){
            x5++;
        }else if(*c=='6'){
            x6++;
        }else if(*c=='7'){
            x7++;
        }else if(*c=='8'){
            x8++;
        }else if(*c=='9'){
            x9++;
        }else{
            continue;
        }
    }
    printf("%d %d %d %d %d %d %d %d %d %d",x0,x1,x2,x3,x4,x5,x6,x7,x8,x9);
    return 0;
}
// using ASCII values approach
// int main() {
//     int* nums = (int*) malloc(10 * sizeof(int));
//     char c;
    
//     for(int i = 0; i < 10; i++)
//         *(nums+i) = 0;

//     while(scanf("%c", &c) == 1)
//         if(c >= '0' && c <= '9')
//             (*(nums+(c-'0')))++;
    
//     for(int i = 0; i < 10; i++)
//         printf("%d ", *(nums+i));
    
//     return 0;
// }