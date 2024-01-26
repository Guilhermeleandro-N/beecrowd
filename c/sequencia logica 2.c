#include <stdio.h>
 
int main() {
 
    int x,y,i,ii=1;
    scanf("%d%d",&x,&y);
    i=x;
    while(ii<=y){
        x=i;
        while(x>0){
            
            if(x>1 && ii<=y){
                printf("%d ",ii);
                ii=ii+1;
            } else if(x==1 && ii<=y){
                 printf("%d\n",ii);
                ii=ii+1;
            }
            x=x-1;
        }
    }
 
    return 0;
}
