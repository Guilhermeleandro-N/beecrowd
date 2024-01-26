#include <stdio.h>
 
int main() {
 
   int u,a=0,b=0,c=0,d=0;
   while(d==0){
       scanf("%d",&u);
       if(u==1){
           a=a+1;
       }
       if(u==2){
           b=b+1;
       }
       if(u==3){
           c=c+1;
       }
       if(u==4){
           d=d+1;
       }
   }
   printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n",a,b,c);
 
    return 0;
}
