#include <stdio.h>
 
int main() {
 
    float s,i;
    scanf("%f",&s);
    if (s<=2000){
        printf("Isento\n");
    }
    if(s>2000 && s<=3000){
        i=(s-2000)*0.08;
    }
    if(s>3000 && s<=4500){
        i=(1000*0.08)+(s-3000)*0.18;
    }
    if(s>4500){
        i=(1000*0.08)+(1500)*0.18+(s-4500)*0.28;
    }
    if(s>2000){
        printf("R$ %.2f\n",i);
        
    }
    return 0;
}
