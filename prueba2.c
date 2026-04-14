#include <stdio.h>

int sumar_recursivo (int a, int b){
    if (b == 0){
        return a;
    }
    return sumar_recursivo (a+1, b-1);
}

int main(){
    int a = 5, b = 9;
    int total = sumar_recursivo(a, b);

    printf ("La suma de %d y %d es: %d\n",a, b, total);

    return 0;
}