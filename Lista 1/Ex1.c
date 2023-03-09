#include <stdio.h>
#include <stdlib.h>


void ex1(int num){
    if(num % 2 == 1){
        printf("esse numero %d e impar\n",num);
    }
    else{
        printf("esse numero %d e par\n",num);
    }
}

int main ()
{
    int num = 0;

    printf("Enquanto for positivo sera informado se e impar ou par\n");
    while (num >= 0){
        scanf("%d",&num);
        if(num >= 0)
        ex1(num);
    }
}