#include <stdio.h>
#include <stdlib.h>

void ex2(int n){
    int fat = 1;
    for (int i = n; i >= 2; i--){
        fat = fat * i;
    }
    printf("%d", fat);
}

int main(){
    int n, fat;

    scanf("%d", &n);
    ex2(n);

    return 0;
}