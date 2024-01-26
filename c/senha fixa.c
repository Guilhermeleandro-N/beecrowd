#include <stdio.h>
 
int main() {
 
    int usenha,c=0;
    while(c==0){
        scanf("%d",&usenha);
        if(usenha==2002){
            printf("Acesso Permitido\n");
            c=1;
        }else{
            printf("Senha Invalida\n");
        }
    }
 
    return 0;
}
