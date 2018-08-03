#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 100

int main() {
    char str[SIZE], sep[2];
    /*strtok uses string as delimiter. Hence character array. Size 2 for
    character and \0*/
    int arr[SIZE], i = 0, j;

    printf("Enter Seperator\n");
    fgets(sep, 2, stdin);
    getchar();  // to consume newline

    printf("Enter numbers seperated by %s\n", sep);
    fgets(str, 100, stdin);

    char* token = strtok(str, sep);
    while (token) {
        arr[i++] = atoi(token);
        token = strtok(NULL, sep);
    }
    /*using j as loop variable because i can be used to know number of elements
    entered*/
    
    for (j = 0; j < i; j++) { 
        printf("%d\n", arr[j]);
    }

    return (0);
}
