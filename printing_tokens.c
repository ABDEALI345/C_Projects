#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char str[100];
    printf("enter your sentence\n");
    gets(str);
    for (char *c = str; *c != '\0'; c++)
    {
        if (*c == ' ')
        {
            *c = '\n';
        }
    }
    printf("%s", str);

    // while(str1[i]!='\0'){
    //     if(str1[i]==' '){
    //         for(j;j<i;j++){
    //             str2[k]=str1[j];
    //             k++;
    //         }
    //         printf("%s",str2);
    //         i++;
    //         j += 2;
    //         k=0;
    //         memset(str2,'\0',15*sizeof(char));
    //     }else{
    //         i++;
    //     }
    // }
    return 0;
}