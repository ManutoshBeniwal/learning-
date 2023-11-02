#include <stdio.h>
#include <math.h>

void s(void);
void t(int,int);
int f(void);
int u(int,int );

struct st{
    char name[5];
    int roll;

};

void main(){
    struct st d;
    /*
    float unit,ans,bill;
    printf("give the units comsumed over the month\n");
    scanf("%f",&unit);

    if (unit<=50){
        ans=unit;
    }
    else if( unit <=100){
        ans=(unit-50)*1.5+50;
        
    }
    else if ( unit <=150){
        ans = (unit-100)*2+50+50*1.5;
        
    }
    else if ( unit <=200 ){
        ans =(unit-150)*2.5+50+50*1.5+50*2;
       
    }
    else {
        ans = (unit-200)*3+50+50*1.5+50*2+50*2.5;
        
    }
    
    bill=0.18*ans+ans;
    printf("\nyour bill is= %f",bill);*/
/*
    int reverse_number=0,n;
    printf("type a number to reverse it \n");
    scanf("%d",&n);
    
    while (n>0){
        int lastdigit= n%10;
        reverse_number=reverse_number*10+lastdigit;
        n=n/10;  
    }
    printf("Reversed number=%d",reverse_number);*/

/*
    int num,last_digit,sum=0,n;
    printf("type a number to check if armstrong\n");
    scanf("%d",&num);
    n=num;
    while (num>0){
        last_digit=num%10;
        sum+=round(pow(last_digit,3));
        //sum+=last_digit*last_digit*last_digit;
        num/=10;
    }
    if (sum==n){
        printf("%d is armstrong number",n);

    }else {printf("non-armstrong");}

*/

/*

int a1,a2,a3;
printf("type ages of ram,shyam and ajay\n");
scanf("%d%d%d",&a1,&a2,&a3);
if (a1<a2){
    if (a1<a3){
        printf("\nram is youngest\n");
    }else{printf("Ajay is youngest \n ");}
}else if (a2<a1){
    if (a2<a3){
       printf("\nshyam is youngest\n"); 
    }else {printf("\nAjay is youngest\n");}
}*/
    

//if arr[5]={1,2} rest values will be zero whereas if arr[]={1,2}and if we print arr[2] then it will be a garbage value.

// int i,j;
// for (i=1;i<=5;i++){
//     for (j=1;j<=5;j++){
//        j<=(5-i)?printf(" "):printf("*");
//     }printf("\n");
// }


    

// int i,j,k;
// for (i=1;i<=5;i++){
//     for(j=1;j<=(5-i);j++){
//         printf(" ");
//     }for (;j<=5;j++){
//         printf("*");}
//     for (k=1;k<=(i-1);k++){
//         printf("*");
//     }
//     printf("\n");
//}


// int arr[5];int sum=0;float avg;
// printf("type marks of five subjects \n");
// for (int i=0;i<5;i++){
//     scanf("%d",&arr[i]);}

// for (int i=0;i<5;i++){
//     sum+=arr[i];
// }
// avg=sum/5;
// printf("%f",avg);


// int m1[3][3],m2[3][3],r[3][3];
// for (int i=0;i<3;i++){
//     for (int j=0;j<3;j++){
//         scanf("%d",&m1[i][j]);
//     }
// }
// for (int i=0;i<3;i++){
//     for (int j=0;j<3;j++){
//         scanf("%d",&m2[i][j]);
//     }
// }


// for (int i=0;i<3;i++){
//     for (int j=0;j<3;j++){
//         r[i][j]=m1[i][j]+m2[i][j];
//         printf("%d\t",r[i][j]);
//         }printf("\n");
// }

//s();
//t(4,2);
// printf("%d",f());
//printf("%d",u(2,3));


gets(d.name);
scanf("%d",&d.roll);

puts(d.name);
printf("%d",d.roll);

}




void s(void){
    
    int a,b;
    printf("type no's ");
    scanf("%d%d",&a,&b);
    printf("%d",a+b);
    printf("%d",a-b);
    printf("%d",a*b);
    printf("%d",a/b);
}
void t(int a,int b){
    printf("%d",a+b);
    printf("%d",a-b);
    printf("%d",a*b);
    printf("%d",a/b);
}
int f(void){
    int a,b;char c;
    printf("give the operation to perform out of +,-,/,* \n");
    scanf("%c",&c);
    printf("type the number to perform that operation respecitively\n");
    scanf("%d%d",&a,&b);

    switch(c){
        case '+':return a+b; break;
        case '-':return a-b;break;
        case '/':return a/b;break;
        case '*':return a*b;break;
        default :printf("tought inn-it\n");
    }
}
int u(int a,int b){
    char c;
    printf("give the operation to perform out of +,-,/,* \n");
    scanf("%c",&c);
    switch(c){
        case '+':return a+b; break;
        case '-':return a-b;break;
        case '/':return a/b;break;
        case '*':return a*b;break;
        default :printf("tough inn-it\n");
    }
}

