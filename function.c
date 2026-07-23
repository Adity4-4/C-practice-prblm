#include <stdio.h>

int volume(int ,int ,int);

int main(){
    int v,l,h,w;

    printf("Entet l h w");
    scanf("%d %d %d",&l,&h,&w);
    v=volume(l,h,w);
    printf("The Volume is: %d",v);
}


int volume(int x,int y,int z){
    int m=x*y*z;
    return m;
}
# include <stdio.h>
#include <string.h> 
#include <stdlib.h>
long long sumAndMultiply(int n) {
    int i,j=0;
    char str[30];
    char *endptr;
    char newArray[30];
    
    

    snprintf(str, sizeof(str),"%d",n);

    printf("String %s \n",str);
    size_t length=strlen(str);
    printf("The length of string %zu\n",length);

  for(i=0;i<length;i++){
    if(str[i]!='0'){
        newArray[j]=str[i];
        j++;
    }
  
}
  newArray[j] = '\0';
//   printf("%s\n", newArray);

    int num = atoi(newArray);

    printf("%d\n", num);

}

int main(){
   
    long long result=sumAndMultiply(330);
    printf("%d",result);
}

// long long result = sumAndMultiply(102);
// printf("%lld\n", result);
