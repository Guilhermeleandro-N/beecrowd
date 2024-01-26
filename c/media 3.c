#include <stdio.h>
 
int main() {
 
    float n1,n2,n3,n4,m1,m2,e;
    scanf("%f%f%f%f",&n1,&n2,&n3,&n4);
    m1= (n1*2+n2*3+n3*4+n4)/(10);
    if (m1>=7){
        printf("Media: %.1f\nAluno aprovado.\n",m1);
    }
    if (m1<5){
        printf("Media: %.1f\nAluno reprovado.\n",m1);
    }
    if ((m1>=5)&& (m1<7)){
        printf("Media: %.1f\nAluno em exame.\n",m1);
        scanf("%f",&e);
        m2=(m1+e)/2;
        printf("Nota do exame: %.1f\n",e);
        if (m2>=5) {
            printf("Aluno aprovado.\n");
        }
        if (m2<5){
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1f\n",m2);
        
    }
    return 0;
}
