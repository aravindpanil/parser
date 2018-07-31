#include<stdio.h>

int main(){
    int a;
    char c;
    float b;
    printf("Enter basic integer character and float input\n");
    scanf("%d%c%f",&a,&c,&b);
    printf("%d%c%f",a,c,b);
    return(0);
}