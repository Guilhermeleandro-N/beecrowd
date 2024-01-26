#include <stdio.h>

float rafael(float x, float y);
//r(x, y) = (3x)² + y².
float beto(float x, float y);
// b(x, y) = 2(x²) + (5y)².
float carlos(float x, float y);
// c(x, y) = -100x + y³.
int main()
{
    int cnt;
    float r,b,c,x,y;
    scanf("%d",&cnt);
    for(cnt;cnt>0;cnt--){
        scanf("%f %f", &x, &y);
        r=rafael(x, y);
        b=beto(x, y);
        c=carlos(x,y);
        if (r>b && r>c){
            printf("Rafael ganhou\n");
        } else if(b>r && b>c){
            printf("Beto ganhou\n");
        } else if (c>r && c>b){
            printf("Carlos ganhou\n");
        }
    }

    return 0;
}
float rafael(float x, float y){
    return ((3*x)*(3*x))+(y*y);
}
float beto(float x, float y){
    return (2*(x*x))+((5*y)*(5*y));
}
float carlos(float x, float y){
    return (-100*x)+(y*y*y);
}

