#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 100
int main() {
    char str[SIZE], *p = str, *ep = NULL;
    printf("Enter numbers with any delimiter\n");
    fgets(str, 100, stdin);
    int li, i;

    for (i = strlen(str) - 1; i > 0; i--) {
        if (isdigit(str[i])) {
            break;
        }

        else
            str[i] = '\0';
    }

    printf("%s\n", str);
    do {
        li = strtol(p, &ep, 10);
        printf("%d\n", li);
        p = ep;
        while (!(isdigit(*p))) p++;
    } while (*ep != '\0');

    return 0;
}