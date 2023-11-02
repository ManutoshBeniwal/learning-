#include<stdio.h>
#include <stdlib.h>

void quiz(void);



int main(){
        printf("\n!!! WELCOME TO THE QUIZ OF THE YEAR !!!!\n");
        printf("\nTHE QUESTIONS IN THIS QUIZ IS SO EAZY THAT A KID OF 5TH GRADE CAN ATTEMPT EASLIY\n");
        printf("\nSO IF YOU GO WRONG THEN YOU SHOULD CONSIDER SEEING A DOCTOR AND CONFIRM THAT YOU'RE RETARTED !!!\n");
        printf("\n!!! GOOD LUCK AND ALL THE BEST  !!!\n\n\n");
        quiz();

    return 0;
}

void quiz(void){
        int arr[5]={},r,i=0,j,score=0,ans;



        while (score!=-1 && score<5){
                 
           r=rand()%5;
           

           if (arr[r]!=1){
            arr[r]=1;
           
        switch(r){
case 0:printf("You're 4th place right now in a race.What place will you be in when you pass the person in 3rd place?\n1.1st\n2.2nd\n3.3rd\n4.None\n");
        break;
case 1:printf("What is the capital of France?\n 1)Paris\n 2)London\n 3)Berlin\n 4)Madrid\n");
        break;
case 2:printf("Which planet is known as the Red Planet?\n 1)Venus\n 2)Mars\n 3) Jupiter\n 4)Saturn\n");
        break;
case 3:printf("What is the largest mammal in the world?\n 1)Elephant\n 2)Giraffe\n 3)Blue Whale\n 4)Cheetah\n");
        break;    
case 4:printf("What gas do plants absorb from the atmosphere?\n 1)Nitrogen\n 2)Oxygen\n 3)Hydrogen\n 4)Carbon Dioxide\n");
        break; 

}
printf("ANSWER: ");
scanf("%d",&ans);

if (r==0 && ans==3)
{score++; if (score<4)printf("\n !!! YOU WON !!! %d RUBBEL \n\n YOUR NEXT QUESTION :\n\n",score*6000);}
else if (r==1 && ans==1)
{score++;if (score<4)printf("\n !!! YOU WON !!! %d RUBBEL\n\n YOUR NEXT QUESTION :\n\n",score*6000);}
else if (r==2 && ans==2)
{score++;if (score<4)printf("\n !!! YOU WON !!!%d RUBBEL\n\n YOUR NEXT QUESTION :\n\n",score*6000);}
else if (r==3 && ans==3)
{score++;if (score<4)printf("\n !!! YOU WON !!!%d RUBBEL\n\n YOUR NEXT QUESTION :\n\n",score*6000);}
else if (r==4 && ans==4)
{score++;if (score<4)printf("\n !!! YOU WON !!!%d RUBBEL\n\n YOUR NEXT QUESTION :\n\n",score*6000);}
else{score=-1; 
printf("\n\n !!! OPPS I FORGOT WHAT THE ANSWER WAS BUT I KNOW YOU'RE WRONG SO HOME !!!\n\n");}

        }}

        if (score==5){
            printf("\n!!!! YAY YOU WON %d Rubbel !!!\n!!! ENJOY :) !!!!",score*6000);
        }
        

        
}