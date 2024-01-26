#include <stdio.h>
 
int main() {
 
    int n,r;
    scanf("%d",&n);
    r=n;
    while(n>1){
        n=n-1;
        r=r*n;
    }
    printf("%d\n",r);
    return 0;
}
