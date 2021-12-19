#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
void show_record();
void reset_score();
void help();
void edit_score(float , char []);
int main()
     {
     int counts,s,s1,count,i,n;
     float score;
     char choice;
     char playername[20];
     mainhome:
     printf("\t\tC PROGRAM QUIZ GAME\n");
     printf("\n\t\t________________________________________");
     printf("\n\n\t\tWelcome to have some Brain time");
     printf("\n\t\t________________________________________");
     printf("\n\t\t________________________________________");
     printf("\n\t\tBECOME A MILLIONAIRE!!!!!!!!!!!    ") ;
     printf("\n\t\t________________________________________");
     printf("\n\t\t________________________________________");
     printf("\n\t\t > Press S to start the game");
     printf("\n\t\t > Press V to view the highest score  ");
     printf("\n\t\t > Press R to reset score");
     printf("\n\t\t > press H for help            ");
     printf("\n\t\t > press Q to quit             ");
     printf("\n\t\t________________________________________\n\n");
     choice=toupper(getch());
     if (choice=='V')
	{
	show_record();
	goto mainhome;
	}
     else if (choice=='H')
	{
	help();
	goto mainhome;
	}
	else if (choice=='R')
	{reset_score();
	goto mainhome;}
	else if (choice=='Q')
	exit(1);
    else if(choice=='S')
    {
     

    printf("\n\n\n\n\n\n\n\n\n\n\t\t\tResister your name please:");
     gets(playername);

    
    printf("\n ------------------  Welcome %s to C Program Quiz Game --------------------------",playername);
    printf("\n\n Here are some tips you might wanna know before playing:");
    printf("\n -------------------------------------------------------------------------");
    printf("\n >> There are 2 rounds in this Quiz Game, The Beginning & The End Game");
    printf("\n >> In the 1st round you will be asked a total of 3 questions to test your");
    printf("\n    general knowledge. You are eligible to play the game if you give atleast 2");
    printf("\n    right answers, otherwise you can't proceed further to the Challenge Round.");
    printf("\n >> Your game starts with CHALLANGE ROUND. In this round you will be asked a");
    printf("\n    total of 10 questions. Each right answer will be awarded $100,000!");
    printf("\n    By this way you can win upto ONE MILLION cash prize!!!!!..........");
    printf("\n >> You will be given 4 options and you have to press A, B ,C or D for the");
    printf("\n    right option.");
    printf("\n >> You will be asked questions continuously, till right answers are given");
    printf("\n >> No negative marking for wrong answers!");
    printf("\n\n\t!!!!!!!!!!!!! ALL THE BEST !!!!!!!!!!!!!");
    printf("\n\n\n Press Y  to start the game!\n");
    printf("\n Press any other key to return to the main menu!");
    if (toupper(getch())=='Y')
		{
		    goto home;
        }
	else
		{
        goto mainhome;
       
       }

     home:
     
     count=0;
     for(i=1;i<=3;i++)
     {
    
     s1=i;


     switch(s1)
		{
		case 1:
		printf("\n\nWhich is the fruit that has same name as a colour from the following?");
		printf("\n\nA.Apple\t\tB.Orange\n\nC.Mango\t\tD.Pear");
		if (toupper(getch())=='B')
			{
			    printf("\n\nCorrect!!!");count++;
			    break;
            }
		else
		       {
		           printf("\n\nWrong!!! The correct answer is B.Orange");
		       break;
		    }

        case 2:
		printf("\n\n\nTotal number of players in the squid game is....");
		printf("\n\nA.1000\t\tB.200\n\nC.456\t\tD.600");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");count++;
			
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is C.456");
		       break;}

        case 3:
		printf("\n\n\nIndia is also known as.....");
		printf("\n\nA.America\t\tB.Hindustan\n\nC.Gumertha\t\tD.Indonesia");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");count++;
			
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.Hindustan");
		       
		       break;}}}

	if(count>=2)
	{goto test;}
	else
	{
	
	printf("\n\nSORRY YOU ARE NOT ELIGIBLE TO PLAY THIS GAME, BETTER LUCK NEXT TIME");
	
	goto mainhome;
	}
     test:
     
     printf("\n\n\t*** CONGRATULATION %s you are eligible to play the Game ***",playername);
     printf("\n\n\n\n\t!Press any key to Start the Game!");
     if(toupper(getch())=='p')
		{goto Endgame;}
Endgame:
     counts=0;
     for(i=1;i<=10;i++)
     {
     s=i;

     switch(s)
		{
		case 1:
		printf("\n\nWhat is the National Game of England?");
		printf("\n\nA.Football\t\tB.Basketball\n\nC.Cricket\t\tD.Baseball");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");counts++;
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is C.Cricket");
		       goto score;
		       break;}

		case 2:
		printf("\n\n\nFull Form of IPL is............,");
		printf("\n\nA.Idhar paav lao\t\tB.Iraq post league\n\nC.Indian Police League\t\tD.Indian Premier League");
		if (toupper(getch())=='D')
			{printf("\n\nCorrect!!!");counts++;
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is D.Indian Premier League");
		      goto score;
		       break;
		       }

        case 3:
		printf("\n\n\n2+2= ");
		printf("\n\nA.6\t\tB.7\n\nC.4\t\tD.9");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");counts++;
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is C.4");
		       goto score;
		       break;}

        case 4:
		printf("\n\n\nWho Found America? ");
		printf("\n\nA.Columbus\t\tB.Vasco da Gama\n\nC.Newton\t\tD.Elon Musk");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");counts++;
			 break;}
		else
		       {
                printf("\n\nWrong!!! The correct answer is A.Columbus");
		       goto score;
		       break;
		       }

        case 5:
		printf("\n\n\nDell is a company which produces.....");
		printf("\n\nA.Electrical Rides\t\tB.Laptops\n\nC.Thermal Power\t\tD.Sarees");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");counts++; break;}
		else
		       {
		           printf("\n\nWrong!!! The correct answer is B.Laptops");
		       
		       goto score;
		       break;
		       }

		case 6:
		printf("\n\n\nWhich one is the largest ocean in the World?");
		printf("\n\nA.Atlantic\t\tB.Pacific\n\nC.Arctic\t\tD.Indian");
		if (toupper(getch())=='B' )
			{printf("\n\nCorrect!!!");counts++;
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.Pacific");goto score;
		       
		       break;}

        case 7:
		printf("\n\n\nWhich country is also known as the 'Land of Rising Sun'?");
		printf("\n\nA.China\t\tB.Japan\n\nC.Myanmar\t\tD.Nepal");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");counts++;
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.Japan");
		       goto score;
		       break;}

        case 8:
		printf("\n\n\nWhich continent has the highest number of countries?");
		printf("\n\nA.Asia\t\tB.Africa\n\nC.Europe\t\tD.North America");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");counts++; break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.Africa");
		       goto score;
		       break;}

        case 9:
		printf("\n\n\nTotal number of countries in the group of the Commonwealth of Nations");
		printf("\n\nA.53\t\tB.26\n\nC.32\t\tD.48");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");counts++; 
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A.53");
		       goto score;
		       break;}

        case 10:
		printf("\n\n\nThe popular social dance 'Salsa' is originated from");
		printf("\n\nA.America\t\tB.India\n\nC.Brazil\t\tD.Mexico");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");counts++; break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A.America");break;goto score;}

        }}}
	score:
    
	score=(float)counts*100000;
	if(score>0.00 && score<1000000)
	{
	   printf("\n\n\t\t**************** CONGRATULATION *****************");
	     printf("\n\t You won $%.2f",score);goto go;}

	 else if(score==1000000.00)
	{
	    printf("\n\n\n \t\t**************** CONGRATULATION ****************");
	    printf("\n\t\t\t\t YOU ARE A MILLIONAIRE!!!!!!!!!");
	    printf("\n\t\t You won $%.2f",score);
	    printf("\t\t Thank You!!");
	}
	 else
{
	 printf("\n\n\t******** SORRY YOU DIDN'T WIN ANY CASH ********");
	    printf("\n\t\t Thanks for your participation");
	    printf("\n\t\t TRY AGAIN");goto go;}

	go:
	puts("\n\n Press Y if you want to play next game");
	puts(" Press any key if you want to go main menu");
	if (toupper(getch())=='Y')
		goto home;
	else
		{
		edit_score(score,playername);
		goto mainhome;}}

void show_record()
    {
	char name[20];
	float scr;
	FILE *f;
	f=fopen("score.txt","r");
	fscanf(f,"%s%f",&name,&scr);
	printf("\n\n\t\t*************************************************************");
	printf("\n\n\t\t %s has secured the Highest Score %0.2f",name,scr);
	printf("\n\n\t\t*************************************************************");
	fclose(f);
    }

void reset_score()
    {
    float sc;
	char nm[20];
	FILE *f;
	f=fopen("score.txt","r+");//Opens a text file for both reading and writing.
	fscanf(f,"%s%f",&nm,&sc);
	sc=0;
	fprintf(f,"%s,%.2f",nm,sc);
    fclose(f);}

void help()
	{
    printf("\n\n                              HELP");
    printf("\n -------------------------------------------------------------------------");
    printf("\n ......................... C program Quiz Game...........");
    printf("\n >> There are two rounds in the game, WARMUP ROUND & CHALLANGE ROUND");
    printf("\n >> In warmup round you will be asked a total of 3 questions to test your general");
    printf("\n    knowledge. You will be eligible to play the game if you can give atleast 2");
    printf("\n    right answers otherwise you can't play the Game...........");
    printf("\n >> Your game starts with the CHALLANGE ROUND. In this round you will be asked");
    printf("\n    total 10 questions each right answer will be awarded $100,000.");
    printf("\n    By this way you can win upto ONE MILLION cash prize in USD...............");
    printf("\n >> You will be given 4 options and you have to press A, B ,C or D for the");
    printf("\n    right option");
    printf("\n >> You will be asked questions continuously if you keep giving the right answers.");
    printf("\n >> No negative marking for wrong answers");

	printf("\n\n\t*********************BEST OF LUCK*********************************");
	printf("\n\n\t*****C PROGRAM QUIZ GAME is developed by Evilpool Technologies(An Aditya Pawar Enterprise********");}

void edit_score(float score, char plnm[20])
	{
	float sc;
	char nm[20];
	FILE *f;
	f=fopen("score.txt","r");
	fscanf(f,"%s%f",&nm,&sc);
	if (score>=sc)
	  { sc=score;
	    fclose(f);
	    f=fopen("score.txt","w");
	    fprintf(f,"%s\n%.2f",plnm,sc);
	    fclose(f);}}