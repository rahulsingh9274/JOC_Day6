#include <string.h>
#include<stdio.h>

int main()
{
    char a[]="R N S Institute of Technology";
    char b[]=" Bengaluru";
    char ch;
    printf("length=%d\n",strlen(a));
    strcat(a,b);
    printf("concatenated:\n%s\n",a);
    int j=0;
    while(a[j]){
        ch=a[j];
        putchar(toupper(ch));
        j++;
    }
    return 0;

}