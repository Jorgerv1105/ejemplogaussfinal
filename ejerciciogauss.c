#include <stdio.h> 
int main() 
{ 
    int n, i, suma ; 
    printf("\nPorgrama para calcular la sumatoria de numeros naturales con el metodo de Gauss"); 
    printf("\nIngrese un numero natural: "); 
    scanf(" %d", &n);
    if (n==1){

    printf("\nLa sumatoria del numero 1 es 1 \n");

    }
     else{
        for (i=1; i<=n; i++)
        {
            suma=(n*(n+1))/2;
        }
    printf("\nLa sumatoria por el metodo de Gauss del numero %d es: %d\n", n, suma);
    }
    printf("\nGracias por utilizar el programa \n");   
return 0;
}