// #include<stdio.h>
// #include<stdlib.h>
// #include<string.h>
// int main(){
//     int n,i,j=0;
//     char** a = (char**)calloc(n,sizeof(char*));
//     printf("enter the level of pyramid: ");
//     scanf("%d",&n);
//     for(i=0;i<n;i++){
//         *(a+i)=(char*)calloc((2*n-1),sizeof(char));
//         while(j<(n-1-i)){
//             *(*(a+i)+j) = ' ';
//             j++;
//         }
//         while(j<(n-1-i+(2*i+1))){
//             *(*(a+i)+j)='*';
//             j++;
//         }
//         while(j<(2*n-1)){
//             *(*(a+i)+j) = ' ';
//             j++;
//         }
//         //printf("%s",*(a+i));
//         puts(*(a+i));
//     }
//     return 0;
// }
#include <stdio.h>  
#include <conio.h>  
void main()  
{  
      
    int i, j, rows, k = 0;  
    printf (" Enter a number to define the rows: \n");  
    scanf ("%d", &rows);   
      
    for ( i =1; i <= rows; i++)  
    {  
        for ( j = 1; j <= rows - i; j++)  
        {  
            printf ("  ");   
        }  
        // use for loop where k is less than equal to (2 * i -1)  
        for ( k = 1; k <= ( 2 * i - 1); k++)  
        {  
            printf ("* "); // print the Star  
        }  
        printf ("\n");  
    }  
    getch();  
}  