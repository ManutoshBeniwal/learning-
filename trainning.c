#include <stdio.h>
void main(){
    float unit,ans,bill;
    printf("give the units comsumed over the month\n");
    scanf("%f",&unit);

    if (unit<=50){
        ans=unit;
    }
    else if(unit>50 && unit <=100){
        ans=(unit-50)*1.5+50;
        
    }
    else if (unit >100 && unit <=150){
        ans = (unit-100)*2+50+50*1.5;
        
    }
    else if (unit >150 && unit <=200 ){
        ans =(unit-150)*2.5+50+50*1.5+50*2;
       
    }
    else {
        ans = (unit-200)*3+50+50*1.5+50*2+50*2.5;
        
    }
    
    bill=0.18*ans+ans;
    printf("\nyour bill is= %f",bill);
    

}