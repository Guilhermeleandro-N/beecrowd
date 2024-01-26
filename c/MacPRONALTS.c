#include <stdio.h>
float operacao(int qpt);

int main()
{
    int qpt;
    float valor;
    scanf("%d",&qpt);
    valor=operacao(qpt);
    printf("%.2f\n", valor);
    return 0;
}

float operacao(int qpt){
    int nump,qp;
    float valor=0;
    for(qpt;qpt>0;qpt--){
        scanf("%d %d", &nump,&qp);
        if (nump==1001){
            valor+=1.5*qp;
        } else if (nump==1002){
            valor+=2.5*qp;
        } else if (nump==1003){
            valor+=3.5*qp;
        } else if (nump==1004) {
            valor+=4.5*qp;
        } else if(nump=1005){
            valor+=5.5*qp;
        }
    }
    return valor;
}
