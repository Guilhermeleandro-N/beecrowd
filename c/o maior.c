#include <stdio.h>
#include <stdlib.h>
 
int main() {
    
    int a,b,c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    a= (a+b+abs(a-b))/2;
    a= (a+c+abs(a-c))/2;
    printf("%d eh o maior\n",a);
    
    return 0;
}
