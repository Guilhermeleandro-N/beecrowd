#include <stdio.h>
#include <math.h> 
int main() {
 
    float a,b,c,d,x1,x2;
    scanf("%f%f%f", &a,&b,&c);
    d= (b*b)-4*a*c;
    x1= (-b+sqrt(d))/(2*a);
    x2= (-b-sqrt(d))/(2*a);
    if (d>0 && !(a==0)) {
        printf("R1 = %.5f\nR2 = %.5f\n",x1,x2);
    }
    if ((d==0) && !(a==0)){
        printf("R1 = %.5f\nR2 = %.5f\n",x1,x2);
    }
    if (d<0 || a==0) {
        printf("Impossivel calcular\n");
    }
    
    return 0;
}
