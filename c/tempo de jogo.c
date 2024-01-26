#include <stdio.h>
#include <stdlib.h>
int main() {
 
 int a,b,t;
 scanf("%d%d",&a,&b);
 if(a>b){
     t=abs(a-24)+b;
 }
 if(a<b){
     t=abs(a-b);
 }
 if(a==b){
     t=24;
 }
 printf("O JOGO DUROU %d HORA(S)\n",t);
    return 0;
}
