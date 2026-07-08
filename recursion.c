#include <stdio.h>

    int natural(int x);

    int main(){
        int i,c;
        printf("Enter the number from u wana print: \n");
        scanf("%d",&i);
        natural(i);
        
    }

    int natural(int x){
      
        if(x==1){
            printf("%d \n", x);
            return 1;
        }
        else{
            natural(x-1);
            printf("%d \n",x);
            
        }
    }