
//find bigest no out of 2 using pointer
#include <stdio.h>


void big(int *x ,int *y, int *z);

int main(){
    int a,b,c;
    printf("Enter 2 nos \n");
    scanf("%d %d",&a,&b);
    big(&a,&b,&c);
    printf("Biggest number is : %d",c);
}

void big(int *x,int *y,int *z){
    
    if(*x>*y){
        *z=*x;
    }
    else{
        *z= *y;
    }
}
//find volume of box 

#include <stdio.h>

void volume(int *x,int *y,int *z,int *m);

int main(){
    int h,l,w,v;
    printf("Enter The Hieght Width Length \n");
    scanf("%d %d %d",&h,&w,&l);
    volume(&h,&w,&l,&v);
    printf("The Volume is:  %d",v);

}

void volume(int *x,int *y,int *z,int *m){
    *m=*x * *y * *z;
}


//find factorial of number
void factorial(int *n,int *m);

int main(){
    int i,p;

    printf("Enter The number");
    scanf("%d",&i);
    factorial(&i,&p);
    printf("factorial is = %d",p);
}

void factorial(int *n,int *m){
    int j=1;
    *m=1;
    while(*n>=j){
        *m=*m*j++;
    }
}

//find which number is even or odd

void evenorodd(int *n ,int *m);

int main(){
    int i,p;

    printf("Enter The number: ");
    scanf("%d",&i);
    evenorodd(&i ,&p);
    if(p==1){
        printf("Number is even");
    }else{
        printf("Number is odd");
    }
    
}

void evenorodd( int *n ,int *m){
    if(*n%2==0){
        *m=1;
    }else{
        *m=0;
    }
}



int main(){
    int a[]= {10,30,20,10};
    int freq[31]={0};
    int result[31];
    int k = 0;

    int n=sizeof(a)/sizeof(a[0]);

    for(int i=0;i<n;i++){
        
        freq[a[i]]++;
    }
    
    for(int i =0;i<31;i++){
        if(freq[i]%2!=0){
            // printf("%d \n",freq[i]);
            result[k]=i;
            k++;
        }
    }
    for (int i = 0; i < k; i++) {
    printf("%d\n", result[i]);
}
    return 0;
}



int main(){
    int num[16],j=-1;

    for(int i=0;i<=29;i++){
        
        {
            j=j+2;
            num[i]=j;
            
        }
    }

    printf("\n numbers are \n");

    for(int i=0;i<=15;i++){
        printf("%d \n",num[i]);
    }
}


// #include <stdio.h>
// int main(){
//     int num[10],a,b=0;

//     printf("Enter the number \n");
//     for(int i=0;i<=9;i++){
        
//         scanf("%d",&a);
//         num[i]=a;
//         if(a>b){
//             b=a;
//         }
//     }


  
//     printf("The biggest number is %d \n",b);
// }


// int main(){
//     int num[10],a,b;


//     printf("Enter the numbers");
//     for(int i=0;i<4;i++){
//         scanf("%d",&a);
//         num[i]=a;
//     }

//     printf("Enter The number which u want to check \n");
//     scanf("%d",&b);

//     for(int i=0;i<4;i++){
//     if(num[i]==b){
//         printf("\n %d is present at index %d \n", b);
        
//     }
//     else{
//         printf("\n Not present");
//     }
// }
    
// }

// int main(){
//     int n,i;
//     printf("Enter The number");
//     scanf("%d",&n);

//     if(n<=1){
//         printf("The number is not prime");
//         return 0;
//     }
    
//     for(i=2;i<n;i++){
//         if (n % i == 0) {
//             printf("Not Prime");
//             return 0;
//         }
//     }

// printf("Prime");
// }


//input roll no and marks and find merit list
#include <stdio.h>

int main() {
    int roll[10], marks[10];
    int tempMarks, tempRoll;

    // Input
    printf("Enter Roll Number and Marks of 10 Students:\n");

    for (int i = 0; i < 4; i++) {
        printf("\nStudent %d\n", i + 1);

        printf("Roll No: ");
        scanf("%d", &roll[i]);

        printf("Marks: ");
        scanf("%d", &marks[i]);
    }

    // Sort marks in descending order
    for (int i = 0; i < 9; i++) {
        for (int j = i + 1; j < 4; j++) {
            if (marks[i] > marks[j]) {

                // Swap marks
                tempMarks = marks[i];
                marks[i] = marks[j];
                marks[i] = tempMarks;

                // Swap corresponding roll numbers
                tempRoll = roll[i];
                roll[i] = roll[j];
                roll[j] = tempRoll;
            }
        }
    }

    // Print Merit List
    printf("\nMerit List\n");
    printf("Rank\tRoll No\tMarks\n");

    for (int i = 0; i < 10; i++) {
        printf("%d\t%d\t%d\n", i + 1, roll[i], marks[i]);
    }

    return 0;
}

//sum of  0th row and 2ndrow
int main(){
    int a[4][4],i,j,s=0,s2=0;

    for(int i=0;i<=3;i++){
        for(int j=0;j<=3;j++){
            scanf("%d",&a[i][j]);
        }
    }

    for(int i=0;i<=3;i++){
        printf("%d\t%d\t%d\t%d\n",a[i][0],a[i][1],a[i][2],a[i][3]);
    }

        for(int i=0;i<=0;i++){
            for(int j=0;j<=3;j++){
                s+=a[0][j];
                s2+=a[3][j];
            }
        }
    printf("The sum is%d the sum of 2 is %d ",s,s2);
}

#include <stdio.h>
// int main(){
//         int a[3][3]={5,8,7,8,7,4,5,8,1},i,j,s=0,s2=0;
//         int b[3][3]={5,8,7,8,7,4,5,8,1};
//         int c[3][3];
//         for(int i=0;i<=2;i++){
//             for(int j=0;j<=2;j++){
//             c[i][j]=a[i][j]-b[i][j];
//             }
//         }



//         for(int i=0;i<=2;i++){
//             printf("%d\t%d\t%d\n",c[i][0],c[i][1],c[i][2]);
//         }
//     printf("Sum is %d",s);

//             for(int i=0;i<4;i++){

                
//                     s+=a[i][3-i];

//             }
        
//         printf("%d",s);
    
// }


// int main(){
//     int i,j;
//     for(i=0;i<=4;i++){
//         for(j=0;j<=i;j++){
           
//           printf("%s","*");
//         }
//         printf("\n");
//     }
//     return 0;
// }






// #include <string.h>
// int* twoSum(int* nums, int numsSize, int target, int* returnSize);
// int main(){
//     int nums[] = {2, 7, 11, 15};
//     int numsSize = 4;
//     int target = 9;
//     int returnSize;
//     int* result = twoSum(nums, numsSize, target, &returnSize);
    
//     return 0;
// }

// int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
//     int i,j;
//     int k[20];
//     int n=numsSize/nums[0];
    
//         for(j=0;j<n;j++){
//             if(nums[i]+nums[j]==target){
//                     k[0]=i;
//                     k[1]=j;
//             }
//         }
//     }
//     return k;
// }















//find  vowels
int main(){
    char a[100];
    char *b="a,e,i,o,u,y";
    int k=0,i;


    scanf("%s",a);
    
    
    
    

    for(i=0;i<=strlen(a);i++){
       for(int j=0;j<=strlen(a);j++){
        if(a[i]==b[j]){
            k++;
        }
    }
    }
    printf(" letter repeted times: %d",k);

}

// *
// **
// ***
// ****
// *****




int main(){
    int i,j;

    for(i=0;i<5;i++){
        for(j=5;j>i;j--){
            printf("%s","*");
        }
        printf("\n");
    }
    printf("%s","*");
    for(i=0;i<5;i++){
        for(j=0;j<i;j++){
            printf("%s","*");
        }
        printf("\n");
    }
}


//RIYA -> AYIR

#include <string.h>
int main(){
    char a[]="RIYA";

    for(int i=0;i<=strlen(a);i++){
        for(int j=0;j<i;j++){
            printf("%c",a[j]);
        }
        printf("\n");
    }
}

//RIYA ->
//R
// I
// Y
// A

int main(){
    char a[]="RIYA";

    for(int i=1;i<7;i++){
        for(int j=1;j<i;j++){
            printf("%d",j);
        }
        printf("\n");
    }
}


// let sort=[...nums].sort((a,b)=>b-a);
// let k=3;
// let nums2=[]
// let nnums=nums.map(x=>{
//     if(x===sort[0]){
//         nums2.push("Gold Medal");
        
// }
// else if(x===sort[1]){
//     nums2.push("Silver Medal");
 
// }
// else if(x===sort[2]){
//     nums2.push("Bronze Medal");
    
// }
// else{
//     nums2.push(String(sort.indexOf(x)+1))
// }

// })
// console.log(nums2)
 #include <stdlib.h>
#include <string.h>
// char** findRelativeRanks(int* score, int scoreSize, int* returnSize);
// int main(){
//      int score[] =  {10,3,8,9,4};
//      int score2[100];
//      int a[100];
//     int scoreSize = sizeof(score) / sizeof(score[0]);
//     int returnSize,i,j,b;
//     char **ans = malloc(scoreSize * sizeof(char *));

//        for (int i = 0; i < scoreSize; i++) {
//         score2[i] = score[i];
//     }

//     for(i=0;i<scoreSize;i++){
//         for(j=0;j<scoreSize;j++){
//             if(score2[j]<score2[i]){
//                 b=score2[i];
//                 score2[i]=score2[j];
//                 score2[j]=b;
//             }
//         }
//     }
   
 
//      for(i=0;i<scoreSize;i++){
//             int index = 0;

//         for (j = 0; j < scoreSize; j++) {
//         if (score[i] == score2[j]) {
//             index = j;
//             break;
//         }
//     }
//         if(score[i]==score2[0]){
//             ans[i]="Golden Medal";
//         }
//         else if(score[i]==score2[1]){
//             ans[i]="Silver Medal";
//         }
//         else if(score[i]==score2[2]){
//             ans[i]="Bronze Medal";
//         }
//         else {
//             ans[i]=malloc(12);
//             sprintf(ans[i], "%d",index+1 );
//         }
//     }
//       for(i=0;i<scoreSize;i++){
//         printf("%s ",ans[i]);
//     }
// }




    //  let res=[]
    // let len=arr.length;
    
    // let muta=arr.map(x=>{
    //     if(x===0){
    //         res.push(0,0)
    //     }else{
    //         res.push(x)
    //     }
    // })
    // let sliced=res.slice(0,len)

    // for (let i = 0; i < len; i++) {
    //     arr[i] = res[i];
        
    // }
    // console.log(arr)


//leet code problem

// void duplicateZeros(int* arr, int arrSize) {

//     int arr=[1,0,2,3,0,4,5,0];
//     int arrSize=strlen(arr)/arr[0];


// }
// int main(){
//         int arr[]={1,0,2,3,0,4,5,0};
//         int arrSize=sizeof(arr)/sizeof(arr[0]);
//         int res[100];
//     int j=0;
//         for(int i=0;i<arrSize;i++){
//             if(arr[i]==0){
//                 res[j++]=0;
//                 res[j++]=0;
//             }else{
//                 res[j++]=arr[i];
//             }
//         }       

//         for(int i=0;i<arrSize;i++){
//             arr[i]=res[i];
        
//         }
        

// }

//Switch problem

// void addition(int *a,int *b,int *c);
// void multiply(int *a,int *b,int *c);
// void average(int *a,int *b,int *c);
// void big(int *a,int *b,int *c);
// void small(int *a,int *b,int *c);


// int main(){

//     int num1;
//     int num2;
//     int num3;
//     int i;
//     char another='Y';   
    
//     while(another=='Y'){
//     printf("\n1. Addition of 3 numbers\n");
//     printf("2. Multipliction of 3 numbers\n");
//     printf("3. Average of 3 numbers\n");
//     printf("4. Biggest out of 3 numbers\n");
//     printf("5. Smallest out of 3 numbers\n");
//     printf("6. Stop\n");
//     printf("Enter your choice: \n");
//     scanf("%d", &i);

//     switch (i) {
//         case 1:
//         printf("Enter The Number 1 \n");
//         scanf("%d",&num1);
//         printf("Enter The Number 2 \n");
//         scanf(" %d",&num2);
//         printf("Enter The Number 3 \n");
//         scanf(" %d",&num3);
//         addition(&num1, &num2, &num3);
//         break;

//         case 2:
//         printf("Enter The Number 1 \n");
//         scanf("%d",&num1);
//         printf("Enter The Number 2 \n");
//         scanf(" %d",&num2);
//         printf("Enter The Number 3 \n");
//         scanf(" %d",&num3);
//         multiply(&num1, &num2, &num3);
//         break;

//         case 3:
//         printf("Enter The Number 1 \n");
//         scanf("%d",&num1);
//         printf("Enter The Number 2 \n");
//         scanf(" %d",&num2);
//         printf("Enter The Number 3 \n");
//         scanf(" %d",&num3);
//         average(&num1, &num2, &num3);
//         break;

//         case 4:
//         printf("Enter The Number 1 \n");
//         scanf("%d",&num1);
//         printf("Enter The Number 2 \n");
//         scanf(" %d",&num2);
//         printf("Enter The Number 3 \n");
//         scanf(" %d",&num3);
//         big(&num1, &num2, &num3);
//         break;
         
//         case 5:
//         printf("Enter The Number 1 \n");
//         scanf("%d",&num1);
//         printf("Enter The Number 2 \n");
//         scanf(" %d",&num2);
//         printf("Enter The Number 3 \n");
//         scanf(" %d",&num3);
//         small(&num1, &num2, &num3);
//         break;
        
//         case 6:
//         another='N';
//         break;

//         default:
//         printf("Invalid choice\n");
//         break;
//     }

    

// }
   

    

  


// }

// void addition(int *a,int *b,int *c){
//     int d=*a+*b+*c;
//     printf("%d",d);
// }

// void multiply(int *a,int *b,int *c){
//     int d=*a * *b * *c;
//     printf("%d",d);
// }
// void average(int *a,int *b,int *c){
//     int d=*a+*b+*c/3;
//     printf("%d",d);
// }
// void big(int *a,int *b, int *c){
  
//     if(*a>*b){
//         if(*a>*c){
//             printf("Biggest number is %d",*a);
//         }
//         else {
//         printf("Biggest number is %d", *c);
//     }
//     }else{
//         if(*b>*c){
//             printf("Biggest number is %d",*b);
//         }
//         else{
//             printf("Biggest number is %d",*c);
//         }
//     }

// }

// void small(int *a,int *b, int *c){
   
//     if(*a<*b){
//         if(*a<*c){
//             printf("smallest number is %d",*a);
//         }else{
//             printf("smallest is %d",*c);
//         }
//     }else{
//         if(*b<*c){
//             printf("smallest number is %d",*b);
//         }
//         else{
//             printf("smallest number is %d",*c);
//         }
//     }

// }

#include <stdbool.h>

// bool main(){

//     int b=121;

//     char str[100];
//     char str2[100];
    
//     sprintf(str,"%d",b);

    
//     int len=strlen(str);
    
//     for(int i=strlen(str)-1,j=0;i>=0;i--,j++){
//         str2[j]=str[i];
        
//     }
//         str2[len] = '\0';

        
//        int num1 = atoi(str);
//        int num2 = atoi(str2);
   

//          if(num1==num2){
//             return true;
//             }
//          else{
//             return false;
//          }
// }

// void isPalindrome(int x) {
  

// }



// int main(){
//     int nums[]={2,2,5,7,8,8,7,1,2,4,1,55};
//     int numsSize=sizeof(nums)/sizeof(nums[0]);
//     int visited[numsSize];
//     for(int i=0;i<numsSize;i++){
//         visited[i] = 0;
//     }
//     for(int i=0;i<numsSize;i++){
//         if(visited[i]==1){
//             continue;
//         }
//         int count =1;

//         for(int j=i+1;j<numsSize;j++){
//             if(nums[i]==nums[j]){
//                 count++;
//                 visited[j]=1;
//             }
//         }
    
//         if(count==1){
//             printf("%d \n", nums[i]);
//         }

// }
// }



// int singleNumber(int* nums, int numsSize) {
    
// }

// sum of negative nums leetcode
int main(){
    int grid[2][3]={{5,1,0},{-1,-3,-3}};
    int neg=0;
    int row=sizeof(grid)/sizeof(grid[0]);
    int col=sizeof(grid[0])/sizeof(grid[0][0]);

    // printf("%d",len);
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("%d ",grid[i][j]);
            if(grid[i][j]<0){
                neg++;
            }
        }
        printf("\n");
    }
    printf("%d",neg);
}