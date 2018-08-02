#include <stdio.h>
#include <string.h>
#define SIZE 100
int main(){

    char str[20] = "1#2#3#";
    int i = 0;
    char *token = strtok(str,"#");

    while(token)
    {
        printf("%s\n", token);
        token = strtok(NULL, "#");
    }

    return(0);
}
