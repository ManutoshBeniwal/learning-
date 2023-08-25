#include <stdio.h>
#include <math.h>
void main(){
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
}
    




    

}