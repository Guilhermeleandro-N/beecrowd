#include <stdio.h>
 
int main() {
    int a=0,b=0,m=0,l,cont=0;
   do{
       
       if(cont%2==0){
           scanf("%d",&a);
           
       }else if(cont%2==1){
           scanf("%d",&b);
       }
       if(a>=m){
           m=a;
           l=cont;
       } else if (b>=m){
           m=b;
           l=cont;
       }
       
       
       cont=cont+1;
   }while(cont<=100);
   printf("%d\n%d\n",m,l);
   
 
    return 0;
}
