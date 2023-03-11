#include <stdio.h>

int ex3 (int n){
    int quantidade = 0;
    while (n != 0){
        quantidade++;
        n /= 10;
    }
    return quantidade;
}

int main (){
    int n;
    scanf("%d", &n);

    int quantidade = ex3(n);
    printf("%d", quantidade);
    return 0;
}