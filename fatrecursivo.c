#include <stdio.h>

int fatorial(int x){
    if(x==1 || x==0){
        return 1;
    }
    else{
        return ( x * fatorial(x -1));
    }
}

int main(void){
    int n;
    scanf("%d", &n);

    int resultado = fatorial(n);

    printf("%d\n", resultado);

    return 0;
}