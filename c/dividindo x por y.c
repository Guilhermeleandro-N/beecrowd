#include <stdio.h>
 
int main() {
 
    int c,x,y;
    float r;
    scanf("%d",&c);
    for(;c>0;c--){
        scanf("%d%d",&x,&y);
        if(y==0){
           printf("divisao impossivel\n");
        }else {
            r=(float)x/y;
            printf("%.1f\n",r);
        }
    }
 
    return 0;
}
