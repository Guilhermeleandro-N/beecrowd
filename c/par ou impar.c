#include <stdio.h>

int main()
{
    int n,v,contador=1;
    scanf("%d",&n);
    do{
        scanf("%d",&v);
        if(v%2==0 && v!=0){
            printf("EVEN");
        } 
        else if(v!=0){
                printf("ODD");
            }
        
        if(v==0){
            printf("NULL\n");
        }
        if(v>0){
            printf(" POSITIVE\n");
        }
        else if(v<0){
            printf(" NEGATIVE\n");    
        } 
       contador=contador+1;
    }while(contador<=n);

    return 0;
}
