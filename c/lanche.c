#include <stdio.h>
 
int main() {
 
    int c,q;
    float v;
    v=0;
    scanf("%d%d",&c,&q);
    if (c==1){
        v=q*4;
    }
    if (c==2){
        v=q*4.50;
    }
    if (c==3){
        v=q*5;
    }
    if (c==4){
        v=q*2;
    }
    if (c==5){
        v=q*1.50;
    }
    printf("Total: R$ %.2f\n",v);
    return 0;
}
