#include<stdio.h>
void main(){
   /* int a;char ans;
    printf ("!!! WELCOME TO THE QUIZ  !!!!\n\n");
    
        printf("Q1. where is the lake fateh sagar located?\n a)Jaipur   b)kota\n c)Udaipur  c)Jaiselmer\n");
        printf("\ntype the option here");
        scanf("%c",&ans);
        if (ans=='c'){
            printf("\nYAY !! you won Rs5000 ");
        }else {printf("oops!! you lost the game:(");}*/


        int percentage;
        printf("type a percentage to get the grade \n");
        scanf("%d",&percentage);
        if (percentage>90){
            printf("grade= A+");
        }else if(percentage>80 ){
            printf("grade= A");
        }else if(percentage>70 ){
            printf("grade= B+");
        }else if (percentage>60 ){
            printf("grade= B");
        }else {
            printf("NAHH!! fail !!! \nn ");
        }
}
