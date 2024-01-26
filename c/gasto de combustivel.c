#include <stdio.h>
 
int main() {
 
    int t;
    double g,v;
    scanf("%d",&t);
    scanf("%lf",&v);
    g=(v*t)/12;
    printf("%.3lf\n", g);
 
    return 0;
}
