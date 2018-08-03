#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 100
int main() {
    char str[SIZE], *p = str, *ep = NULL, c;
    printf("Enter numbers with any delimiter\n");
    fgets(str, 100, stdin);
    int li, i = 0;

    do {
        li = strtol(p, &ep, 10);
        printf("%d\n", li);
        p = ep;
        while (!(*p >= '0' && *p <= '9')) p++;
    } while (*ep != '\n');

    return 0;
}