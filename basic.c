#include<stdio.h>

int main(){
    int a;
    char c;
    float b;
    char* str;
    printf("Enter basic integer and float input\n");
    scanf("%d%f",&a,&b);
    printf("%d\n%f\n",a,b);
    printf("Enter character\n");

    /*scanf for %c does not strip away whitespace characters where %d does.
    Hence, when you type previous input it scans. Then you press enter which
    goes into the input. Hence scanf reads the enter or newline first thus
    giving you a blank. To avoid this, use " %c" instead of "%c". This tells 
    scanf with character to avoid any trailing whitespace and newline.
    */
    scanf(" %c",&c); 
    printf("%c\n",c);

    /*it is still not recommended to use scanf as it can cause buffer overflow.
    The recommended option is fgets for character and string*/
    
    return(0);
}