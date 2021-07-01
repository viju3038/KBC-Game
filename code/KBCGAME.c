#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>
#include<stdbool.h>

void homepage();
void intro();
void box();
void gotoxy();
void login();
void life(char choice,char *fift1,char *a,char *b,char *c,char *d,char *fift2,int odd,int exp,int fift,int change,char ch1,char ans2,char ans3,int life[2]);
int password();
void loadingpage();
void line();
void q1();//1000 a
void q2();//5000 d
void q3();//10000 a
void q4();//50000 b
void q5();//100000 b
void q6();//300000 d
void q7();//500000 d
void q8();//700000 c
void q9();//900000 c
void q10();//1000000 c
void q11();//5000000 b
void q12();//10000000 a

main()
{
	static int fift=1;
	static int change=1;
	static int exp=1;
	static int odd=1;
	int clife[4]={0,0,0,0};
	char choice,ans,ans1,ans2,ans3;
	char *fift1,*fift2,*a,*b,*c,*d;
	char ch1;
	int x=1;
	char ch;
	system("color 0C");
	homepage();
	printf("\n");
	printf("Press enter for playing game.\n");
	printf("Press any key and enter for leaving.\n");
	ch=fgetc(stdin);
	switch(x==1)
		case 1:if(ch==0x0A)
		{
			
			system("CLS");
			system("color 0C");
			login();
			system("CLS");
			system("color 0C");
			line();
			loadingpage();
			gotoxy(0,22);
			line();
			sleep(2);
			system("CLS");
			intro();
			system("CLS");
			system("color 0C");
			box(79,30,77);
			gotoxy(10,10);
			printf("**** This Question is for Rs. 1000 *****\n");
			gotoxy(10,14);
			q1();
			printf("enter your answer:\n");
			scanf("\n%c",&choice);
			//Q1 code start

			if(choice=='A' || choice=='a' || choice=='e'|| choice=='E')
			{	

				if(choice=='E' || choice=='e')
				{
					fift1="A) Mesopotamian Civilization";
					fift2="C) Harappan Civilization";
					a="AAAAAAAAAAAAAAAAA 60%";
					b="BBB 15%";
					c="CC 5%";
					d="DDDDD 20%";
					ans2='a';
					ans3='A';
					life(choice,fift1,a,b,c,d,fift2,odd,exp,fift,change,ch1,ans2,ans3,clife);
					
					getch();
				}
				else if(choice=='A' || choice=='a')
				{
					printf("\ncorrect answer You are Eligibility for next Question .\n");
					system("CLS");
					system("color 0C");
					box(79,30,77);
					gotoxy(15,15);
					printf("\a\a\a\a");
					printf("CONGRATULATIONS YOU WON 1000 RS.");
					printf("\a\a\a\a");
					getch();
				}
				system("CLS");
				system("color 0C");
				box(79,30,77);
				gotoxy(10,10);
				printf("**** This Question is for Rs. 5000 *****\n\n");
				gotoxy(10,14);
				q2();
				printf("enter your answer:\n");
				scanf("\n%c",&choice);
				//Q2 code start

				if(choice=='D' || choice=='d' || choice=='e'|| choice=='E')
				{	

					if(choice=='E' || choice=='e')
					{
						fift1="D) Egypt";
						fift2="C) Iraq";
						a="AAAA 10%";
						b="BB 5%";
						c="CCCCC 15%";
						d="DDDDDDDDDDDDDDDDDDDD 70%";
						ans2='D';
						ans3='d';
						life(choice,fift1,a,b,c,d,fift2,odd,exp,fift,change,ch1,ans2,ans3,clife);
						getch();
					}
					else if(choice=='D' || choice=='d')
					{
						printf("\ncorrect answer You are Eligibility for next Question .\n");
						system("CLS");
						system("color 0C");
						box(79,30,77);
						gotoxy(15,15);
						printf("\a\a\a\a");
						printf("CONGRATULATIONS YOU WON 5000 RS.");
						printf("\a\a\a\a");
						getch();
					}
					system("CLS");
					system("color 0C");
					box(79,30,77);
					gotoxy(10,10);
					printf("**** This Question is for Rs. 10,000 *****\n\n");
					gotoxy(10,14);
					q3();
					printf("enter your answer:\n");
					scanf("\n%c",&choice);
					//Q3 code start

					if(choice=='A' || choice=='a' || choice=='e'|| choice=='E')
					{	

						if(choice=='E' || choice=='e')
						{
							fift1="A) largest railway station";
							fift2="D) None of the above";
							a="AAAAAAAAAAAAAAAAAAAAAAA 80%";
							b="B 2%";
							c="CCCC 8%";
							d="DDDDD 10%";
							ans2='A';
							ans3='a';
							life(choice,fift1,a,b,c,d,fift2,odd,exp,fift,change,ch1,ans2,ans3,clife);
						
							getch();
						}
						else if(choice=='A' || choice=='a')
						{
							printf("\ncorrect answer You are Eligibility for next Question .\n");
							system("CLS");
							system("color 0C");
							box(79,30,77);
							gotoxy(15,15);
							printf("\a\a\a\a");
							printf("CONGRATULATIONS YOU WON 10000 RS.");
							printf("\a\a\a\a");
							getch();
						}
						system("CLS");
						system("color 0C");
						box(79,30,77);
						gotoxy(10,10);
						printf("**** This Question is for Rs. 50,000 *****\n\n");
						gotoxy(10,14);
						q4();
						printf("enter your answer:\n");
						scanf("\n%c",&choice);
						//Q4 code start

						if(choice=='B' || choice=='b' || choice=='e'|| choice=='E')
						{	

							if(choice=='E' || choice=='e')
							{
								fift1="B) Africa";
								fift2="C) Europe";
								a="AAAA 8%";
								b="BBBBBBBBBBBBBBBBBBBBB 70%";
								c="CCC 6%";
								d="DDDDDDDDDD 16%";
								ans2='B';
								ans3='b';
								life(choice,fift1,a,b,c,d,fift2,odd,exp,fift,change,ch1,ans2,ans3,clife);
							
								getch();
							}
							else if(choice=='B' || choice=='b')
							{
								printf("\ncorrect answer You are Eligibility for next Question .\n");
								system("CLS");
								system("color 0C");
								box(79,30,77);
								gotoxy(15,15);
								printf("\a\a\a\a");
								printf("CONGRATULATIONS YOU WON 50000 RS.");
								printf("\a\a\a\a");
								getch();
							}
							system("CLS");
							system("color 0C");
							box(79,30,77);
							gotoxy(10,10);
							printf("**** This Question is for Rs. 1,00,000 *****\n\n");
							gotoxy(10,14);
							q5();
							printf("enter your answer:\n");
							scanf("\n%c",&choice);
							//Q5 code start
				
							if(choice=='B' || choice=='b' || choice=='e'|| choice=='E')
							{	
				
								if(choice=='E' || choice=='e')
								{
									fift1="B) Film Finance Corporation";
									fift2="D) None of the above";
									a="AAAA 8%";
									b="BBBBBBBBBBBBBBBBBBBBB 70%";
									c="CCC 6%";
									d="DDDDDDDDDD 16%";
									ans2='B';
									ans3='b';
									life(choice,fift1,a,b,c,d,fift2,odd,exp,fift,change,ch1,ans2,ans3,clife);
									
									getch();
								}
								else if(choice=='B' || choice=='b')
								{
									printf("\ncorrect answer You are Eligibility for next Question .\n");
									system("CLS");
									system("color 0C");
									box(79,30,77);
									gotoxy(15,15);
									printf("\a\a\a\a");
									printf("CONGRATULATIONS YOU WON 100000 RS.");
									printf("\a\a\a\a");
									getch();
								}
								system("CLS");
								system("color 0C");
								box(79,30,77);
								gotoxy(10,10);
								printf("**** This Question is for Rs. 3,00,000 *****\n\n");
								gotoxy(10,14);
								q6();
								printf("enter your answer:\n");
								scanf("\n%c",&choice);
								//Q6 code start
					
								if(choice=='D' || choice=='d' || choice=='e'|| choice=='E')
								{	
					
									if(choice=='E' || choice=='e')
									{
										fift1="D) None of these";
										fift2="C) Aryabhatta";
										a="AAAA 10%";
										b="BB 5%";
										c="CCCCC 15%";
										d="DDDDDDDDDDDDDDDDDDDD 70%";
										ans2='D';
										ans3='d';
										life(choice,fift1,a,b,c,d,fift2,odd,exp,fift,change,ch1,ans2,ans3,clife);
								
										getch();
									}
									else if(choice=='D' || choice=='d')
									{
										printf("\ncorrect answer You are Eligibility for next Question .\n");
										system("CLS");
										system("color 0C");
										box(79,30,77);
										gotoxy(15,15);
										printf("\a\a\a\a");
										printf("CONGRATULATIONS YOU WON 300000 RS.");
										printf("\a\a\a\a");
										getch();
									}
									system("CLS");
									system("color 0C");
									box(79,30,77);
									gotoxy(10,10);
									printf("**** This Question is for Rs. 5,00,000 *****\n\n");
									gotoxy(10,14);
									q7();
									printf("enter your answer:\n");
									scanf("\n%c",&choice);
									//Q7 code start
						
									if(choice=='D' || choice=='d' || choice=='e'|| choice=='E')
									{	
						
										if(choice=='E' || choice=='e')
										{
											fift1="D) Charminar -Lucknow";
											fift2="B) Taj Mahal -Agra";
											a="AAAA 10%";
											b="BB 5%";
											c="CCCCC 15%";
											d="DDDDDDDDDDDDDDDDDDDD 70%";
											ans2='D';
											ans3='d';
											life(choice,fift1,a,b,c,d,fift2,odd,exp,fift,change,ch1,ans2,ans3,clife);
						
											getch();
										}
										else if(choice=='D' || choice=='d')
										{
											printf("\ncorrect answer You are Eligibility for next Question .\n");
											system("CLS");
											system("color 0C");
											box(79,30,77);
											gotoxy(15,15);
											printf("\a\a\a\a");
											printf("CONGRATULATIONS YOU WON 500000 RS.");
											printf("\a\a\a\a");
											getch();
										}
										system("CLS");
										system("color 0C");
										box(79,30,77);
										gotoxy(10,10);
										printf("**** This Question is for Rs. 7,00,000 *****\n\n");
										gotoxy(10,14);
										q8();
										printf("enter your answer:\n");
										scanf("\n%c",&choice);
										//Q8 code start
							
										if(choice=='C' || choice=='c' || choice=='e'|| choice=='E')
										{	
							
											if(choice=='E' || choice=='e')
											{
												fift1="C) Crucification 'of Jesus Christ";
												fift2="A) Birth of Jesus Christ";
												a="AAAAAAA 25%";
												b="BBBB 15%";
												c="CCCCCCCCCCCCCCCC 50%";
												d="DDD 10%";
												ans2='C';
												ans3='c';
												life(choice,fift1,a,b,c,d,fift2,odd,exp,fift,change,ch1,ans2,ans3,clife);
											
												getch();
											}
											else if(choice=='C' || choice=='c')
											{
												printf("\ncorrect answer You are Eligibility for next Question .\n");
												system("CLS");
												system("color AE");
												box(79,30,77);
												gotoxy(15,15);
												printf("\a\a\a\a");
												printf("CONGRATULATIONS YOU WON 700000 RS.");
												printf("\a\a\a\a");
												getch();
											}
											system("CLS");
											system("color 0C");
											box(79,30,77);
											gotoxy(10,10);
											printf("**** This Question is for Rs. 9,00,000 *****\n\n");
											gotoxy(10,14);
											q9();
											printf("enter your answer:\n");
											scanf("\n%c",&choice);
											//Q9 code start
								
											if(choice=='C' || choice=='c' || choice=='e'|| choice=='E')
											{	
								
												if(choice=='E' || choice=='e')
												{
													fift1="C) 29th August";
													fift2="B) 26th  july";
													a="AAAAAAA 25%";
													b="BBBB 15%";
													c="CCCCCCCCCCCCCCCC 50%";
													d="DDD 10%";
													ans2='C';
													ans3='c';
													life(choice,fift1,a,b,c,d,fift2,odd,exp,fift,change,ch1,ans2,ans3,clife);
												
													getch();
												}
												else if(choice=='C' || choice=='c')
												{
													printf("\ncorrect answer You are Eligibility for next Question .\n");
													system("CLS");
													system("color 0C");
													box(79,30,77);
													gotoxy(15,15);
													printf("\a\a\a\a");
													printf("CONGRATULATIONS YOU WON 900000 RS.");
													printf("\a\a\a\a");
													getch();
												}
												system("CLS");
												system("color 0C");
												box(79,30,77);
												gotoxy(10,10);
												printf("**** This Question is for Rs. 10,00,000 *****\n\n");
												gotoxy(10,14);
												q10();
												printf("enter your answer:\n");
												scanf("\n%c",&choice);
												//Q10 code start
									
												if(choice=='C' || choice=='c' || choice=='e'|| choice=='E')
												{	
									
													if(choice=='E' || choice=='e')
													{
														fift1="C) Tamil Nadu";
														fift2="D) Andhra Pradesh";
														a="AAAAAAA 25%";
														b="BBBB 15%";
														c="CCCCCCCCCCCCCCCC 50%";
														d="DDD 10%";
														ans2='C';
														ans3='c';
														life(choice,fift1,a,b,c,d,fift2,odd,exp,fift,change,ch1,ans2,ans3,clife);
													
														getch();
													}
													else if(choice=='C' || choice=='c')
													{
														printf("\ncorrect answer You are Eligibility for next Question .\n");
														system("CLS");
														system("color 0C");
														box(79,30,77);
														gotoxy(15,15);
														printf("\a\a\a\a");
														printf("CONGRATULATIONS YOU WON 1000000 RS.");
														printf("\a\a\a\a");
														getch();
													}
													system("CLS");
													system("color 0C");
													box(79,30,77);
													gotoxy(10,10);
													printf("**** This Question is for Rs. 50,00,000 *****\n\n");
													gotoxy(10,14);
													q11();
													printf("enter your answer:\n");
													scanf("\n%c",&choice);
													//Q11 code start
										
													if(choice=='B' || choice=='b' || choice=='e'|| choice=='E')
													{	
										
														if(choice=='E' || choice=='e')
														{
															fift1="B) Fiji";
															fift2="D) India";
															a="AAAA 8%";
															b="BBBBBBBBBBBBBBBBBBB 80%";
															c="C 2%";
															d="DDDDD 10%";
															ans2='B';
															ans3='b';
															life(choice,fift1,a,b,c,d,fift2,odd,exp,fift,change,ch1,ans2,ans3,clife);
														
															getch();
														}
														else if(choice=='B' || choice=='b')
														{
															printf("\ncorrect answer You are Eligibility for next Question .\n");
															system("CLS");
															system("color 0C");
															box(79,30,77);
															gotoxy(15,15);
															printf("\a\a\a\a");
															printf("CONGRATULATIONS YOU WON 5000000 RS.");
															printf("\a\a\a\a");
															getch();
														}
														system("CLS");
														system("color 0C");
														box(79,30,77);
														gotoxy(10,10);
														printf("**** This Question is for Rs. 1,00,00,000 *****\n\n");
														gotoxy(10,14);
														q12();
														printf("enter your answer:\n");
														scanf("\n%c",&choice);
														//Q12 code start
												
														if(choice=='A' || choice=='a' || choice=='e'|| choice=='E')
														{	
											
															if(choice=='E' || choice=='e')
															{
																fift1="A) 1839";
																fift2="B) 1843";
																a="AAAAAAAAAAAAAA 60%";
																b="BBBBBBB 30%";
																c="CCC 10%";
																d=" 0%";
																ans2='A';
																ans3='a';
																life(choice,fift1,a,b,c,d,fift2,odd,exp,fift,change,ch1,ans2,ans3,clife);
															
																getch();
															}
															else if(choice=='A' || choice=='a')
															{
																printf("\ncorrect answer You are Eligibility for next Question .\n");
																system("CLS");
																system("color 0C");
																box(79,30,77);
																gotoxy(15,15);
																printf("\a\a\a\a");
																printf("CONGRATULATIONS YOU WON 10000000 RS.");
																printf("\a\a\a\a");
																getch();
															}
																
														}
														else
														{
															printf("\a\a\a\a\a\a\a");
															printf("\nsorry you lose game.\n");
															printf("BETTER LUCK NEXT TIME ");
															getch();
															break;
														}
													}
													else
													{
														printf("\a\a\a\a\a\a\a");
														printf("\nsorry you lose game.\n");
														printf("BETTER LUCK NEXT TIME ");
														getch();
														break;
													}
												}
												else
												{
													printf("\a\a\a\a\a\a\a");
													printf("\nsorry you lose game.\n");
													printf("BETTER LUCK NEXT TIME ");
													getch();
													break;
												}
											}
											else
											{
												printf("\a\a\a\a\a\a\a");
												printf("\nsorry you lose game.\n");
												printf("BETTER LUCK NEXT TIME ");
												getch();
												break;
											}
										}
										else
										{
											printf("\a\a\a\a\a\a\a");
											printf("\nsorry you lose game.\n");
											printf("BETTER LUCK NEXT TIME ");
											getch();
											break;
										}
									}
									else
									{
										printf("\a\a\a\a\a\a\a");
										printf("\nsorry you lose game.\n");
										printf("BETTER LUCK NEXT TIME ");
										getch();
										break;
									}
								}
								else
								{
									printf("\a\a\a\a\a\a\a");
									printf("\nsorry you lose game.\n");
									printf("BETTER LUCK NEXT TIME ");
									getch();
									break;
								}
							}
							else
							{
								printf("\a\a\a\a\a\a\a");
								printf("\nsorry you lose game.\n");
								printf("BETTER LUCK NEXT TIME ");
								getch();
								break;
							}
						}
						else
						{
							printf("\a\a\a\a\a\a\a");
							printf("\nsorry you lose game.\n");
							printf("BETTER LUCK NEXT TIME ");
							getch();
							break;
						}
					}
					else
					{
						printf("\a\a\a\a\a\a\a");
						printf("\nsorry you lose game.\n");
						printf("BETTER LUCK NEXT TIME ");
						getch();
						break;
					}
				}
				else
				{
					printf("\a\a\a\a\a\a\a");
					printf("\nsorry you lose game.\n");
					printf("BETTER LUCK NEXT TIME ");
					getch();
					break;
				}
			}
			else
			{
				printf("\a\a\a\a\a\a\a");
				printf("\nsorry you lose game.\n");
				printf("BETTER LUCK NEXT TIME ");
				getch();
				break;
			}
		}
		else
		{
			printf("\a\a\a\a\a\a\a");
			break;
		}
		system("CLS");
		
}

void homepage()
{
	FILE *f1;
	char c;
	f1 = fopen("homepage.txt","r");
	if (f1 == NULL) 
    { 
        printf("Cannot open file \n"); 
        exit(0); 
    } 
  
    // Read contents from file 
    c = fgetc(f1); 
    while (c != EOF) 
    { 
        printf ("%c", c); 
        c = fgetc(f1); 
    } 
  
    fclose(f1);
}
void login()
{
	
	int flag,a,user_name;
	a:
	box(79,30,77);
	gotoxy(20,14);
	printf("Enter your name  :");
	scanf("%s", &user_name);
	gotoxy(20,16);
	flag = password();

	if (flag==1)
	{
		printf("\nLogin successful."); //write program logic here
	}
	else
	{
		printf("\nretry...");
		system("CLS");
		goto a;
	}
}
int password()
{
	int i=0;
	char ch, temp[20], password[20]={"12345"};
	printf("Enter your password:");
	ch = getch();
	while(ch!=13 && i<20)
	{
		printf("*");
		temp[i]=ch;
		ch = getch();
		i++;	
	}
	temp[i]='\0';
	
	if(strcmp(temp, password)==0)
		return 1;
	else
		return 0;
}
void gotoxy(int xpos, int ypos)  // just take this function as it is.
{
    COORD scrn;
    HANDLE hOuput = GetStdHandle(STD_OUTPUT_HANDLE);
    scrn.X = xpos; 
	scrn.Y = ypos;
    SetConsoleCursorPosition(hOuput,scrn);
}
void loadingpage()
{
	int i;
	gotoxy(10,12);
	for(i=0;i<10;i++)
	{
		printf("%c",254);
	}
	gotoxy(12,14);
	printf("LOADING........");
	printf("20 %.......");
	sleep(1);
	gotoxy(20,12);
	for(i=0;i<16;i++)
	{
		printf("%c",254);
	}
	gotoxy(12,14);
	printf("LOADING........");
	printf("50 %.......");
	sleep(1);
	gotoxy(30,12);
	for(i=0;i<32;i++)
	{
		printf("%c",254);
	}
	gotoxy(12,14);
	printf("LOADING........");
	printf("100 %.......");
	sleep(2);
}
void intro()
{
	system("color 0C");
	box(79,30,77);
	gotoxy(12,6);
	printf("***** Welcome to KAUN BANEGA CROREPATI*****\n");
	gotoxy(12,8);
	printf("Please Follow the Rulse  \n");
	gotoxy(12,10);
	printf("Give Ans in uppercase or lowercase (A,B,C,D,a,b,c,d)   \n");
	gotoxy(12,12);
	printf(" ****           OR       ****  \n");
	gotoxy(12,14);
	printf("If you Need a Life Line Press (E/e)\n");
	gotoxy(12,16);
	printf("If you Need a Fifty Fifty Press (1)\n");
	gotoxy(12,18);
	printf("If you Need a Change Question Press (2)\n");
	gotoxy(12,20);
	printf("If you Need a expert advice Press (3)\n");
	gotoxy(12,22);
	printf("If you Need a audience call Press (4)\n");
	gotoxy(12,24);
	printf("Life Line can be use only one time \n");
	gotoxy(12,26);
	printf("Press Any Key to continue :");
	getch();
}
void line()
{
	int i;
	for(i=0;i<80;i++)
	{
		printf("%c",254);
	}
}
void box(int x,int y,int z)
{
	int a,b,c,d,e;
    	for(a=1;a<=x;a++)
        {
            printf("*");
        }
            printf("\n");
	for(b=1;b<=y;b++)
    {
    	for(c=1;c<=1;c++)
        {
        	printf("*");
        }
        for(d=1;d<=z;d++)
        {
            printf(" ");
        }
        printf("*\n");
	}
	for(e=1;e<=x;e++)
 	{
 		printf("*");
 	}
}
void life(char choice,char *fift1,char *a,char *b,char *c,char *d,char *fift2,int odd,int exp,int fift,int change,char ch1,char ans2,char ans3,int life[4])
{
	int select=0;
	switch(select==0)
		case 1:
			if(choice=='E' || choice=='e')
			{
				lstart:
				printf("\n\nSelect Your life line\n\n");
				if(life[0]==0)
				{
					printf(">1 Fifty Fifty\n");
				}
				else
				{
					printf(" ");
				}
				if(life[1]==0){
					printf(">2 Change Question \n");
				}
				else
				{
					printf(" ");
				}
				if(life[2]==0){
					printf(">3 Expert Advice \n");
				}
				else
				{
					printf(" ");
				}
				if(life[3]==0){
					printf(">4 Audience Call \n");
				}
				else
				{
					printf(" ");
				}
				fflush(stdin);
				printf("enter which lifeline you want to take :");
				scanf("%d",&select);
				if(life[0]>0 && select==1)
				{
					goto lstart;
				}
				if(life[1]>0 && select==2)
				{
					goto lstart;
				}
				if(life[2]>0 && select==3)
				{
					goto lstart;
				}
				if(life[3]>0 && select==4)
				{
					goto lstart;
				}
				//fift life line is start
				if(select==1)
				{
					life[0]++;
					if(life[0]==1)
					{
		    			if(fift==1)
		    			{
							printf("%s\n\n%s\n",fift1,fift2);
							printf("Enter Your Answer :");
							scanf("\n%c",&ch1);
							if (ch1==ans2 || ch1 == ans3)
							{
								system("CLS");
								system("color 0C");
								box(79,30,77);
								gotoxy(15,15);
								printf("\ncorrect answer You are Eligibility for next Question .\n");
								printf("\a\a\a\a");
								getch();
							}
							else
							{
								system("COLOR 0C");
								printf("\a");
								printf("\nSorry you lose the game. ");
								printf("\n%s is a correct answer.\n",ans2);
								getch();
								exit(1);
								break;
							}
							fift=0;
						}
				    	else
						{
							printf("Not Available\n");
							getch();
						}
					}
					else
					{
						printf("Not Available\n");
						getch();
					}
				}// fift life line logic end
				if(select==2)
				{
					life[1]++;
					if(life[1]==1)
					{	
		                if(change==1)
		                {
		                   	system("CLS");
							system("color 0C");
							box(79,30,77);
							gotoxy(15,10);
		                   	printf("New Question is. who is the founder of java ?");
		                   	printf("\n\n\t\tA.James Gosling\t\tB. Billy Joy\n");
		                   	printf("\n\n\t\tC.Dennis Ritchie\tD.Larry Wall\n\n\n\n");
		                   	printf("Enter your answer :");
		                   	scanf("\n%c",&ch1);
		                   	if (ch1=='A' || ch1 == 'a')
		                   	{
		                   		system("CLS");
		                       	printf("A is a correct answer You are Eligibility for next Question .");
								system("color 0C");
								box(79,30,77);
								gotoxy(15,15);
								printf("\a\a\a\a");
								printf("CONGRATULATIONS THE ANSWER IS CORRECT");
								printf("\a\a\a\a");
								getch();
							}
		                    else
		                    {   
								system("COLOR 0C");
								printf("\a");
		                        printf("\nSorry You LOSS the game. \n Better luck next time.\n");
		                        getch();
		                        exit(1);
		                        break;
							}
		        			change=0;
		                }
		                else if(change!=1)
		               	{
							system("COLOR 0C");
		                   	printf("\nYour Change Life Line is Over.\n");
		            		printf("  ");
						}			
		    		}
				}// fift life line logic end
				/*else
				{
					system("COLOR 0C");
					break;
				}// fift life D bugging point end*/
				else if(select==3)
				{
					life[2]++;
					if(life[2]==1)
					{
		    			if(exp==1)
		    			{
							printf("\n%s\n",fift1);
							printf("Enter Your Answer :");
							scanf("\n%c",&ch1);
							if (ch1==ans2 || ch1 == ans3)
							{
								system("CLS");
								system("color 0C");
								box(79,30,77);
								gotoxy(15,15);
								printf("\ncorrect answer You are Eligibility for next Question .\n");
								printf("\a\a\a\a");
								getch();
							}
							else
							{
								system("COLOR 0C");
								printf("\a");
								printf("\nSorry you lose the game. ");
								printf("\n%s is a correct answer.\n",ans2);
								getch();
								exit(1);
								break;
							}
							exp=0;
						}
				    	else
						{
							printf("Not Available\n");
							getch();
						}
					}
					else
					{
						printf("Not Available\n");
						getch();
					}
				}
				else if(select==4)
				{
					life[3]++;
					if(life[3]==1)
					{
		    			if(odd==1)
		    			{
		    				line(15);
							printf("(A)\t|");
							printf("%s\n",a);
							printf("(B)\t|");
							printf("%s\n",b);
							printf("(C)\t|");
							printf("%s\n",c);
							printf("(D)\t|");
							printf("%s\n",d);
							line(15);
							printf("Enter Your Answer :");
							scanf("\n%c",&ch1);
							if (ch1==ans2 || ch1 == ans3)
							{
								system("CLS");
								system("color 0C");
								box(79,30,77);
								gotoxy(15,15);
								printf("\ncorrect answer You are Eligibility for next Question .\n");
								printf("\a\a\a\a");
								getch();
							}
							else
							{
								system("COLOR 0C");
								printf("\a");
								printf("\nSorry you lose the game. ");
								printf("\n%s is a correct answer.\n",ans2);
								getch();
								exit(1);
								break;
							}
							odd=0;
						}
				    	else
						{
							printf("Not Available\n");
							getch();
						}
					}
					else
					{
						printf("Not Available\n");
						getch();
					}
				}
			}
			else
			{
				break;
			}
}
void q1()
{
	FILE *f2;
	char c;
	f2 = fopen("q1.txt","r");
	if (f2 == NULL) 
    { 
        printf("Cannot open file \n"); 
        exit(0); 
    } 
  
    // Read contents from file 
    c = fgetc(f2); 
    while (c != EOF) 
    { 
        printf ("%c", c); 
        c = fgetc(f2); 
    } 
  
    fclose(f2);
}
void q2()
{
	FILE *f3;
	char c;
	f3 = fopen("q2.txt","r");
	if (f3 == NULL) 
    { 
        printf("Cannot open file \n"); 
        exit(0); 
    } 
  
    // Read contents from file 
    c = fgetc(f3); 
    while (c != EOF) 
    { 
        printf ("%c", c); 
        c = fgetc(f3); 
    } 
  
    fclose(f3);
}
void q3()
{
	FILE *f4;
	char c;
	f4 = fopen("q3.txt","r");
	if (f4 == NULL) 
    { 
        printf("Cannot open file \n"); 
        exit(0); 
    } 
  
    // Read contents from file 
    c = fgetc(f4); 
    while (c != EOF) 
    { 
        printf ("%c", c); 
        c = fgetc(f4); 
    } 
  
    fclose(f4);
}
void q4()
{
	FILE *f5;
	char c;
	f5 = fopen("q4.txt","r");
	if (f5 == NULL) 
    { 
        printf("Cannot open file \n"); 
        exit(0); 
    } 
  
    // Read contents from file 
    c = fgetc(f5); 
    while (c != EOF) 
    { 
        printf ("%c", c); 
        c = fgetc(f5); 
    } 
  
    fclose(f5);
}
void q5()
{
	FILE *f6;
	char c;
	f6 = fopen("q5.txt","r");
	if (f6 == NULL) 
    { 
        printf("Cannot open file \n"); 
        exit(0); 
    } 
  
    // Read contents from file 
    c = fgetc(f6); 
    while (c != EOF) 
    { 
        printf ("%c", c); 
        c = fgetc(f6); 
    } 
  
    fclose(f6);
}
void q6()
{
	FILE *f7;
	char c;
	f7 = fopen("q6.txt","r");
	if (f7 == NULL) 
    { 
        printf("Cannot open file \n"); 
        exit(0); 
    } 
  
    // Read contents from file 
    c = fgetc(f7); 
    while (c != EOF) 
    { 
        printf ("%c", c); 
        c = fgetc(f7); 
    } 
  
    fclose(f7);
}
void q7()
{
	FILE *f8;
	char c;
	f8 = fopen("q7.txt","r");
	if (f8 == NULL) 
    { 
        printf("Cannot open file \n"); 
        exit(0); 
    } 
  
    // Read contents from file 
    c = fgetc(f8); 
    while (c != EOF) 
    { 
        printf ("%c", c); 
        c = fgetc(f8); 
    } 
  
    fclose(f8);
}
void q8()
{
	FILE *f9;
	char c;
	f9 = fopen("q8.txt","r");
	if (f9 == NULL) 
    { 
        printf("Cannot open file \n"); 
        exit(0); 
    } 
  
    // Read contents from file 
    c = fgetc(f9); 
    while (c != EOF) 
    { 
        printf ("%c", c); 
        c = fgetc(f9); 
    } 
  
    fclose(f9);
}
void q9()
{
	FILE *f10;
	char c;
	f10 = fopen("q9.txt","r");
	if (f10 == NULL) 
    { 
        printf("Cannot open file \n"); 
        exit(0); 
    } 
  
    // Read contents from file 
    c = fgetc(f10); 
    while (c != EOF) 
    { 
        printf ("%c", c); 
        c = fgetc(f10); 
    } 
  
    fclose(f10);
}
void q10()
{
	FILE *f11;
	char c;
	f11 = fopen("q10.txt","r");
	if (f11 == NULL) 
    { 
        printf("Cannot open file \n"); 
        exit(0); 
    } 
  
    // Read contents from file 
    c = fgetc(f11); 
    while (c != EOF) 
    { 
        printf ("%c", c); 
        c = fgetc(f11); 
    } 
  
    fclose(f11);
}
void q11()
{
	FILE *f12;
	char c;
	f12 = fopen("q11.txt","r");
	if (f12 == NULL) 
    { 
        printf("Cannot open file \n"); 
        exit(0); 
    } 
  
    // Read contents from file 
    c = fgetc(f12); 
    while (c != EOF) 
    { 
        printf ("%c", c); 
        c = fgetc(f12); 
    } 
  
    fclose(f12);
}
void q12()
{
	FILE *f13;
	char c;
	f13 = fopen("q12.txt","r");
	if (f13 == NULL) 
    { 
        printf("Cannot open file \n"); 
        exit(0); 
    } 
  
    // Read contents from file 
    c = fgetc(f13); 
    while (c != EOF) 
    { 
        printf ("%c", c); 
        c = fgetc(f13); 
    } 
  
    fclose(f13);
}
