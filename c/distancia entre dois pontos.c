 
#include <stdio.h>
#include <math.h>
float operacao(float x1, float y1, float x2, float y2);

int main()
{
    float x1,y1,x2,y2,distancia;
    scanf("%f %f",&x1,&y1);
    scanf("%f %f",&x2, &y2);
    distancia=operacao(x1,y1,x2,y2);
    printf("%.4f\n",distancia);
    return 0;
}

float operacao(float x1, float y1, float x2, float y2){
    float distancia;
    distancia=sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
    return distancia;
}
