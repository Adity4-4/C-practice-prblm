#include <stdio.h>

int main() {
    int a,b,c;
    printf("Enter 3 nos");
    scanf("%d %d %d",&a,&b,&c);

    if(b>a){
        if(c>a){
            printf("%d smallest number",a);
        }
        else{
            printf("%d smallest number" ,c);
        }
    }
    else{
        if(b>c){
            printf("%d smallest number",c);
        }
        else{
            printf("%d smallest number",b);
        }
    }
    return 0;
}

#include <stdio.h>
int main(){
    int p,d,si,r;
    printf("Enter the Principal,amount and duration");
    scanf("%d %d", &p,&d);
  

    if(p<=8000){
        r=10;
    }else{
        r=15;
    }
    si=(p*r*d)/100;
     printf("Rate = %d%%\n", r);
      printf("Simple Interest = %d\n", si);
    return 0;
}

#include <stdio.h>

int main(){
    int i,l,w,h,v;

    i=0;

    while(i<6){
        printf("\nEnter length, width, hieght ");
        scanf("%d %d %d",&l,&w,&h);
        v=l*w*h;

        printf("The volume is %d",v);
        i=i+1;
    }
    return 0;
}


#include <stdio.h>

int main(){

    int i,p,r,t,s;
    i=0;

    while(i<7){
        printf("\nEnter The Principal, Rate, Duration");
        scanf("%d %d %d",&p,&r,&t);
        s=p*r*t;
        printf("The Simple intrest is %d",s);
        i=i+1;
    }
    return 0;
}
#include <stdio.h>

int main(){
    int i;
    float t,f,tem;
    i=0;
    while(i<10){
        printf("\nEnter The Temperature");
        scanf("%f" ,&t);
        f=(t*1.8)+32;
        printf("The Ferhnite is %f\n",f);
        tem=(f-32)/1.8;

        printf("The Temperature is %.2f\n",tem);
        i=i+1;
    }
    return 0;
}


#include <stdio.h>

int main(){
    int i,n1,n2,n3,avg;
    i=0;

    while(i<2){
        printf("\nEnter the number of set 1 one by one");
        scanf("%d %d %d",&n1,&n2,&n3);
        avg=(n1+n2+n3)/3;
        printf("The average of set is %d",avg);
        i=i+1;
    }
    return 0;
}


#include <stdio.h>

int main(){
    int i,l,b,p,a,w;
    i=0;
    while(i<8){
        printf("\nEnter the length, breadth, width");
        scanf("%d %d %d",&l,&b,&w);

        a=l*b;

      printf("The Area of Rec is %d",a);

        p=(l+w)*2;
  
        printf("\nThe Perimetr of Rec is %d",p);

        i=i+1;
    }
    return 0;
}

#include <stdio.h>

int main(){
    int i;
    i=2;
    while(i<20){
        printf("\n %d",i);
        i=i+2;
    }
    return 0;

}


#include <stdio.h>

int main(){
    int i;
    i=1;
    while(i<15){
        printf("\n %d",i);
        i=i+2;
    }
    return 0;
}

#include <stdio.h>

int main(){
    int i;
    i=10;

    while(i<=30){
        printf("\n %d",i);
        i+=2;
    }
    return 0;
}

#include <stdio.h>

int main(){
    int i;
    i=1;
    while(i<=25){
        printf("\n %d",i);
        i+=4;
    }
    return 0;
}


#include <stdio.h>


int main(){
    int i;
    i=3;
    while(i<40){
        printf("\n %d",i);
        i+=6;
    }
    return 0;
}


#include <stdio.h>

int main(){
    int i;
    i=2;
    while(i<=37){
        printf("\n %d",i);
        i+=5;
    }
    return 0;
}


#include <stdio.h>

int main(){
    float i=0, s=0, t=0;
    while(i<12){
        i=i+2;
        t=1/i;
        printf("\n %.2f",t);
        s+=t;
    }
    printf("\n sum is %.2f",s);
    return 0;
}

#include <stdio.h>

int main(){
    float i=-1,s=0,t=0;

    while(i<15){
        i=i+2;
        t=1/i;
        s=s+t;
    }
    printf("\n %.2f",s);
}

#include <stdio.h>

int main(){
    float i=0,t=1,s=0,n=0;

    while(i<9&&t<10){
        i=i+1;
        t=t+1;
        n=i/t;
        printf("\n %2f ",i);
        printf(" %2f ",t);
        s=s+n;
       }
       printf("The sum is %2f",s);
}

#include <stdio.h>

int main(){
    int i=0,s=0,sum=0;
    while(i<5){
        i=i+1;
        s=i*i;
        printf("\n %d",s);
        sum=sum+s;
    }
    printf("\n %d",sum);
}

#include <stdio.h>

int main(){
    float i=-1,t=0,n=0, s=0;

    while(i<11&&t<12){
        i=i+2;
        t=t+2;
        n=i/t;
        printf("\n %.2f",i);
        printf(" %.2f",t);
        s=s+n;

    }
    printf("\n %.2f",s);
}


#include <stdio.h>

int main(){
    int i=0,s=0;

    while(i<28){
        i=i+4;
        printf("\n %d",i);
        s=s+i;
    }
    printf("\n %d",s-10);
}