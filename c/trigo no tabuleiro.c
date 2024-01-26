#include <stdio.h>
#include <tgmath.h>
unsigned long long int potencia(int casa);
int main()
{
    int c,casa;
    unsigned long long int resultado;
    scanf("%d", &c);
    for(c;c>0;c--){
        scanf("%d", &casa);
        resultado=0;
        resultado=potencia(casa);
        printf("%llu kg\n",resultado/12000);
    }
    return 0;
}
unsigned long long int potencia(int casa){
    unsigned long long int potencia=0;
    casa=casa-1;
    for (casa;casa>=0;casa--){
        potencia=potencia+(1ULL<<casa);
    }
    return potencia;
}
