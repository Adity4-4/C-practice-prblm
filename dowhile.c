#include <stdio.h>

int main(){
    int i=0,l,w,h,v;
    do{
        printf("\n Enter l,w,h: \n");
        scanf("%d %d %d",&l, &h, &w);
        v=l*w*h;
        printf("\n The Volume is %d",v);
        i=i+1;
    }
    while(i<2);
        return 0;
    
}