#include <stdio.h>
 
int main() {
 
   float s,n;
   int r;
   scanf("%f",&s);
   if(s<=400){
       n=s*1.15;
       r=15;
   }
   if((s>400) && (s<=800)){
       n=s*1.12;
       r=12;
   }
   if((s>800) && (s<=1200)){
       n=s*1.10;
       r=10;
   }
   if((s>1200) && (s<=2000)){
       n=s*1.07;
       r=7;
   }
   if(s>2000){
       n=s*1.04;
       r=4;
   }
   printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %%\n",n,n-s,r);
 
    return 0;
}
