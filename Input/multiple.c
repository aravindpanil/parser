#include <stdio.h>
#define SIZE 5

void display(int* array){
    int i;
    for(i = 0;i<SIZE;i++){
        printf("%d\n",array[i]);
    }
}

void input(int* array){
    printf("Enter %d numbers seperated by ,",SIZE);
    scanf("%d,%d,%d,%d,%d",&array[0],&array[1],&array[2],&array[3],&array[4]);
}

int main(){
    int i; 
    int a[10];

    for(i = 0;i<SIZE;i++){
        printf("Enter number %d\n",i);
        scanf("%d",&a[i]); 
    }

    printf("\n\n");
    display(a);
    
    getchar();
    input(a);

    return(0);
}
