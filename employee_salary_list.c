#include<stdio.h>
int main(){
    FILE *ptr;
    ptr = fopen("salary_list.txt", "w");
    char name1[20],name2[20];
    int sal1,sal2;
    printf("enter name of employee 1: ");
    scanf("%s",name1);
    printf("enter salary of employee 1: ");
    scanf("%d",&sal1);
    printf("enter name of employee 2: ");
    scanf("%s",name2);
    printf("enter salary of employee 2: ");
    scanf("%d",&sal2);
   
    fprintf(ptr,"%s ",name1);
    fprintf(ptr,"%d\n",sal1);
    fprintf(ptr,"%s ",name2);
    fprintf(ptr,"%d",sal2);
    
    fclose(ptr); 
    return 0;
}