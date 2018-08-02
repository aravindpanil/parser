#include <stdio.h>
#define SIZE 5

int main(){
    int i; 
    int a[10];

    for(i = 0;i<SIZE;i++){
        printf("Enter number %d\n",i);
        scanf("%d",&a[i]); 
    }

    printf("\n\n");
    
    for(i = 0;i<SIZE;i++){
        printf("%d\n",*(a+i)); //a[i] and *(a + i) can be used interchangeably
    }
    return(0);
}