#include <stdio.h>
 
int main() {
 
    int n,cont=1;
    scanf("%d",&n);
    do{
        printf("%d x %d = %d\n",cont,n,(n*cont));
        cont=cont+1;    
    }while(cont<=10);
    
    return 0;
}
