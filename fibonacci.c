#include <stdio.h>

int fibonacci(int x){
    if(x==0 || x==1){
        return x;
    }
    else{
        return (fibonacci(x-1)+fibonacci(x-2));
    }
}

int main(void){
    int n;
    scanf("%d", &n);

    int resultado = fibonacci(n);

    printf("%d\n", resultado);

    return 0;
}