//This programm is prepared by 22CE028 Roshani Dholariya
#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>
void main()  {
int lower, upper, digit;
char pass[10], i;
do{
lower=0;upper=0;digit=0;
printf("\nEnter the password:");
scanf("%s",pass);
 for(i=0;i<=strlen(pass);i++)
 {
 if(islower(pass[i]))
 {lower=1;}
  else if(isupper(pass[i]))
  {upper=1;}
  else if(isdigit(pass[i]))
  {digit=1;}
 }
 if(lower==1&&upper==1&&digit==1)
 {printf("Good Password, You may Proceed");}
 else
 {printf("Password does not satisfy constraints!!! Please try again");}
 }while(lower==0||upper==0||digit==0);
 printf("\n\nBy 22CE028 Roshani Dholariya");

 }
