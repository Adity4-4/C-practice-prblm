// #include <stdio.h>
// int main(){
//     int n,c=0,s=0;
//     while(1){
        
//         printf("Enter the num");
//         scanf("%d",&n);
//         c=c+1;
//        if (n % 2 == 1) {
//            continue;
            

          
//         } 
        
//     if (c == 5) {
//                 break;
//             }
//     }
//     printf("Sum is %d \n",s);
//     return 0;    
// }



#include <stdio.h>

int main() {
    int i;
    float price, discount, netPrice;

    while (1) {
        printf("\nEnter Group Code (1-7): ");
        scanf("%d", &i);

       
          if(i==7){
        break;
    }    
        printf("Enter Price: ");
        scanf("%f", &price);

        switch(i){
        case 1: 
            discount = price * 0.10;
            break;
        
        
        case 2:   
        case 3: 
            discount = price * 0.20;
            break;
        
        case 4:    
        case 5:
            discount = price * 0.30;
            break;
        case 6:
            discount = price * 0.40;
            break;
        
        default: 
            printf("Invalid Group Code\n");
            continue;
        
    
   
}
   
        netPrice = price - discount;

        printf("Discount = %.2f\n", discount);
        printf("Net Price = %.2f\n", netPrice);
    }

    printf("Program Ended\n");

    return 0;
}