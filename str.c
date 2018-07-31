#include<stdio.h>

int main(){
    int e;
    char a;
    char s[10];
    printf("Enter integer\n");
    scanf("%d",&e);
    /*Same problem appears here. newline after scanf is consumed by fgets.
    To avoid use a getchar() to consume the newline and then use fgets.*/
    getchar();
    printf("Enter input character\n");
    fgets(s,10,stdin);
    a = s[0];
    /*Because we have read 10 characters, there are no trailing input chars.
    Hence a higher buffer size for fgets helps if you dont want to mess up
    next input readers.*/
    printf("Enter new character\n");
    char t = getchar();
    printf("%c\n%c",a,t);
    return(0);
}