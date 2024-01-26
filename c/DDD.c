#include <stdio.h>
 
int main() {
 
   int d;
   scanf("%d",&d);
   if (d==61){
       printf("Brasilia\n");
   }
   if (d==71){
       printf("Salvador\n");
   }
   if (d==11){
       printf("Sao Paulo\n");
   }
   if (d==21){
       printf("Rio de Janeiro\n");
   }
   if (d==32){
       printf("Juiz de Fora\n");
   }
   if (d==19){
       printf("Campinas\n");
   }
   if (d==27){
       printf("Vitoria\n");
   }
   if (d==31){
       printf("Belo Horizonte\n");
   }
   if (!((d==61 || d==71) ||( d==11 || d==21 )|| (d==32 || d==19 )|| (d==27 || d==31))){
       printf("DDD nao cadastrado\n");
   }
   
 
    return 0;
}
