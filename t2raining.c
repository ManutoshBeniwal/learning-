#include<stdio.h>


int su(int ,int );
void swap(int *,int *);
int s(int *,int *);
void main()
{
   /* int a;char ans;
    printf ("!!! WELCOME TO THE QUIZ  !!!!\n\n");
    
        printf("Q1. where is the lake fateh sagar located?\n a)Jaipur   b)kota\n c)Udaipur  c)Jaiselmer\n");
        printf("\ntype the option here");
        scanf("%c",&ans);
        if (ans=='c'){
            printf("\nYAY !! you won Rs5000 ");
        }else {printf("oops!! you lost the game:(");}*/

/*
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
        }*/
        
        // int a,b;
        // printf("type two number to add them\n");

        // scanf("%d%d",&a,&b);
        // printf("sum=%d",su(a,b));
        
        
        
        
         int a=10,b=20;
        swap(&a,&b);
        printf("%d\n%d",a,b);


        // int a[5];int *k;
        // for(int i=0;i<5;i++){
        //     scanf("%d",&a[i]);}
        // k=a;
        // for(int i=0;i<5;i++){
        //     printf("%d",*(k+i));
        // }


    // printf("%d",s(&a,&b));


        
        }
    
int su(int a,int b){
    return a+b;
}
void swap(int *x,int *y){
    int  temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
int s(int *x,int *y){
    return *x-*y;
}

