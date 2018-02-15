#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
int main()
{
char name[20];
float a,b,c;
int count,i,r1,n;
char choice;
int score;
mainhome:
system ("cls");
printf("\t\t\t   M&V SOLUTIONS PVT LTD\n");
printf("\n\t\t****************************************");
printf("\t\n\n      SELECTION");
printf("\n\t\t     	PROCESS ");
printf("\n\t\t      	TEST.");     	
printf("\n\t\t****************************************");
printf("\n\t\t****************************************");
printf("\n\t\t      	GET READY!      	");
printf("\n\t\t****************************************");
printf("\n\t\t  >> PRESS ‘S’ TO START THE PROCESS.   ");
printf("\n\t\t____________________________\n\n");
choice=toupper(getch());
if(choice=='S')
{
system ("cls");
printf("\n\n\n\n\n\n\t\t\t\t\t\t	CANDIDATE NAME:");
scanf("%s",name);
system ("cls");
printf("\n------------------- Good morning! %s-----------------------",name);
printf("\n\n BEST OF LUCK FOR UR CAREER");
printf("\n Here are some instructions you might know before the selection process exam :");
printf("\n---------------------------------------------");
printf("\n >> There are 2Rounds in this selection process");
printf ("\n >> First Round is nothing but checking the candidate is eligible for attending the interview or not based on their previous results");
printf("\n >> On the Second Round you have to attend the Aptitude Questions");
printf("\n >> Based on the marks obtained in aptitude round you are allowed to attend the Group Discussion and HR round");
printf("\n *NOTE* : The pass percentage on 10th 12th & Cgpa should more than 80 to attend the apptitude round.It will be checked and shortlisted in first round.The candidates who are all attending the Aptitude Round should score more than 60 to appear in further rounds.");
printf("\n !!!!!!!! ALL THE BEST !!!!!!!!");
printf("\n Press Y to go into the FIRST ROUND");
printf("\n Press any other key to return to main menu");
if(toupper(getch())=='Y')
{
   goto home;
}
home:
system("cls");
printf("\n Enter your 10th 12th & CGPA ");
scanf("\n%f%f%f",&a,&b,&c);
if((a>=80) && (b>=80) && (c>=80))
{
   	printf("\n You are eligible to attend the Aptitude Round");
   	goto home1;
}
else 
{
	printf("\nSorry you are not eligible to attend the apptitude round");
	exit(1);
}
home1:
system("cls");
count=0;
for(i=0;i<=10;i++)
{
system("cls");
r1=i;
switch(r1)
{
	case 1:
          	printf("\n\n1) Which of the following is palindrome?");
           	printf("\nA.1010\t\tB.1111\nC.2020\t\tD.22202");
         	if(toupper(getch())=='B')
          	{
           	printf("\nCorrect!");
           	count++;
           	getch();
           	break;
          	}
        	else
          	{
             	printf("\nWrong!");
             	getch();
              	break;
           	}
    case 2:
          	printf("\n\n2) A train 125 m long passes a man, running at 5 km/hr in the same direction in which the train is going, in 10 seconds. The speed of the train is:?");
           	printf("\nA.45 km/hr\t\tB.50 km/hr\nC.54 km/hr\t\tD.55 km/hr");
         	if(toupper(getch())=='B')
          	{
           	printf("\nCorrect!");
           	count++;
           	getch();
           	break;
          	}
        	else
          	{
             	printf("\nWrong!");
             	getch();
              	break;
           	}
	case 3:
          	printf("\n\n3) The length of the bridge, which a train 130 metres long and travelling at 45 km/hr can cross in 30 seconds, is:?");
           	printf("\nA.200 m\t\tB.225 m\nC.245 m\t\tD.250 m");
         	if(toupper(getch())=='C')
          	{
           	printf("\nCorrect!");
           	count++;
           	getch();
           	break;
          	}
        	else
          	{
             	printf("\nWrong!");
             	getch();
              	break;
           	}
    case 4:
            printf("\n\n4) The cost price of 20 articles is the same as the selling price of x articles. If the profit is 25%, then the value of x is:?");   
            printf("\nA.15\t\tB.16\nC.18\t\tD.25");
            if(toupper(getch())=='B')
          	{
           	printf("\nCorrect!");
           	count++;
           	getch();
           	break;
          	}
        	else
          	{
             	printf("\nWrong!");
             	getch();
              	break;
           	}
    case 5:
           printf("\n\n5) If selling price is doubled, the profit triples. Find the profit percent");   
           printf("\nA.66*2/3\t\tB.	100\nC.	105*1/3\t\tD.	120");
        if(toupper(getch())=='B')
          	{
           	printf("\nCorrect!");
           	count++;
           	getch();
           	break;
          	}
        	else
          	{
             	printf("\nWrong!");
             	getch();
              	break;
          	}
    case 6:
            printf("\n\n6) In a shower, 5 cm of rain falls. The volume of water that falls on 1.5 hectares of ground is:?");
            printf("\n\nA.75 cu. m\t\tB.750 cu. m\nC.7500 cu. m\t\tD.75000 cu. m");
          	if(toupper(getch())=='B')
          	{
           	printf("\nCorrect!");
           	count++;
           	getch();
           	break;
          	}
        	else
          	{
             	printf("\nWrong!");
             	getch();
              	break;
          	}
    case 7:
            printf("\n\n7) The average of 20 numbers is zero. Of them, at the most, how many may be greater than zero? ");
            printf("\nA.0\t\tB.1C.\n10\t\tD.19");
            if(toupper(getch())=='D')
          	{
           	printf("\nCorrect!");
           	count++;
           	getch();
           	break;
          	}
        	else
          	{
             	printf("\nWrong!");
             	getch();
              	break;
          	}
    case 8:
            printf("\n\n8) The average weight of A, B and C is 45 kg. If the average weight of A and B be 40 kg and that of B and C be 43 kg, then the weight of B is:?");
            printf("\nA.17 kg\t\tB.20 kg\nC.26 kg\t\tD.31 kg");
            if(toupper(getch())=='D')
          	{
           	printf("\nCorrect!");
           	count++;
           	getch();
           	break;
          	}
        	else
          	{
             	printf("\nWrong!");
             	getch();
              	break;
          	}
    case 9:
            printf("\n\n9) A float is 4 bytes wide, whereas a double is 8 bytes wide.");
            printf("\nA.True\t\tB.False");
            if(toupper(getch())=='A')
          	{
           	printf("\nCorrect!");
           	count++;
           	getch();
           	break;
          	}
        	else
          	{
             	printf("\nWrong!");
             	getch();
              	break;
          	}
    case 10:
            printf("\n\n10) Size of short integer and long integer can be verified using the sizeof() operator");
            printf("\nA.True\t\tB.False");
            if(toupper(getch())=='A')
          	{
           	printf("\nCorrect!");
           	count++;
           	getch();
           	break;
          	}
        	else
          	{
             	printf("\nWrong!");
             	getch();
              	break;
          	}}
}
score=count*10;
if(score>=60)
{
   printf ("\n\n Your are eligible to attend the GROUP DISCUSSION Round if you successfully qualified on GD round you will be calling for HR round.If you successfully complete that too YOUR APPOINTMENT ORDER WILL COME BY POST SOON");
}
else 
{
printf("\n\n Sorry! Better Luck Next Time Keep Practicing and attend more APPTITUDE questions you will suely succeeded in any others ");
}
}
}




