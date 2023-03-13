#include <stdio.h>
#include <stdlib.h>


void ex1(int num){
    if(num % 2 == 1){
        printf("impar");
    }
    else{
        printf("par");
    }
}

int main ()
{
    int num = 0;

    while (num >= 0){
        scanf("%d",&num);
        if(num >= 0)
        ex1(num);
    }
}