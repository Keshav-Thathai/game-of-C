#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int  main()
{

int  computerchoice=rand() %3+1;
printf("enter your choice(0 for rock,1 for paper,2 for scissors):");
int userchoice;
scanf("%d",&userchoice);printf("computerchose:");
printf("Computer choice");
switch(computerchoice)
{
case 0:
printf("rock\n");
break;
case 1:
printf("paper\n");
case 2:
printf("Scissors\n");
break;
}
switch(userchoice)
{
case 0:
printf("rock\n");
break;
case 1:
printf("paper\n");
case 2:
printf("Scissors\n");
break;
}
if(userchoice==computerchoice){
printf("It is a Tie \n");}
else if((userchoice==0&&computerchoice==2||(userchoice==1&&computerchoice==0)||userchoice==2&&computerchoice==1))
{
printf("You win\n");
} else
{
printf("computer wins\n"); }
return 0;
}

