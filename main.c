#include<stdio.h>
#include<stdlib.h>
#include "HIGHLIGHT.h"
void main()
{
    float pr,cr;
     float unit;
    float amount,preamt,tot_amt;
    float tax,t;
    system("color 30");
    gotoxy(35,2);
    col_back(15,13);
    printf(".......WELCOME.......");
    gotoxy(32,5);
    col_back(25,14);
    printf(" ELECTRICITY BILLING SYSTEM ");
    col_back(15,19);
    gotoxy(20,20);
    printf("Enter any key....");
    _getch();
    system("cls");
    system("color 30");
    gotoxy(18,5);
    col_back(15,19);
    printf("ENTER YOUR PREVIOUS ELECTRICITY METER READING:-  ");
    col_back(20,19);
    scanf("%f",&pr);
    gotoxy(73,5);
    col_back(15,19);
    printf(" unit");
    gotoxy(18,7);
    col_back(15,19);
    printf("ENTER YOUR CURRENT ELECTRICITY METER READING:-   ");
    col_back(20,19);
    scanf("%f",&cr);
    gotoxy(73,7);
    col_back(15,19);
    printf(" unit");
    gotoxy(18,9);
    col_back(15,19);
    printf("YOUR CURRENT ELECTRICITY CUSUMBPTION IS:-        ");
    col_back(20,19);
    unit=pr-cr;
    unit=(-1)*(unit);
    printf("%.1f",unit);
    gotoxy(73,9);
    col_back(15,19);
    printf(" unit");
    gotoxy(20,20);
    printf("Enter any key....");
    _getch();
    system("cls");
    system("color 30");

    if(unit<=100)
    {

      amount = unit * 3;
    }
     else if(unit>100 && unit <=200)
    {
      amount = unit * 3.5;
    }
     else if(unit>200 && unit<=350)
    {
      amount = unit * 4;
    }
     else if(unit>350 && unit <=500)
    {
      amount = unit * 4.5;
    }
     else if(unit>500)
    {
      amount = unit * 5;
    }

    gotoxy(18,5);
    col_back(15,19);
    printf("Amount of Electricity bill is ");
    col_back(20,19);
    printf("%f",amount);
    gotoxy(55,5);
    col_back(15,19);
    printf(" Rupees");
    gotoxy(18,10);
    col_back(15,19);
    printf("Enter previous amount if any  ");
    col_back(20,19);
    scanf("%f",&preamt);
    gotoxy(55,10);
    col_back(15,19);
    printf(" Rupees");
    gotoxy(18,15);
    col_back(15,19);
    printf("Enter tax in percentage  ");
    col_back(20,19);
    scanf("%f",&tax);
    t=amount*(tax/100);
    gotoxy(46,15);
    col_back(15,19);
    printf("%c",'%');

    tot_amt=amount+preamt+t;
    gotoxy(18,20);
    col_back(15,19);
    printf("Your total electricity bill is  ");
    col_back(20,19);
    printf("%.3f",tot_amt);
    gotoxy(60,20);
    col_back(15,19);
    printf("Rupees");
    _getch();
    gotoxy(10,23);
    col_back(15,19);
    printf("Enter any key exit");
    _getch();
}
