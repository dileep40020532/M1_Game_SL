#include<stdio.h>
#include<stdlib.h>
int rd()
{
	int rem;
	A:rem=rand()%7;
	if(rem==0)
		goto A;
	else
		return rem;
}
void displaychart(int curp,char player[4])
{	int i,j,t,c,sft=0,diceres,pos1,pos2;
	
		
		if(curp==100)
		{
			printf("*****Congratulations*****\n\n\nPlayer %s wins\n",player);
			scanf("%*s");
			exit(0);
		}
	
	for(i=10;i>0;i--)
	{
		t=i-1;
		if((sft%2)==0)
		{
			c=0;
			for(j=10;j>=1;j--)
			{
				diceres=(i*j)+(t*c++);
				
				if(curp==diceres)
					printf("%s\t",player);
				else
				printf("%d\t",diceres);
		
			}
			sft++;
		}
		else
		{
			c=9;
			for(j=1;j<=10;j++)
			{
				diceres=(i*j)+(t*c--);
				
				if(curp==diceres)
					printf("%s\t",player);
				else
					printf("%d\t",diceres);
			}
		
			
			sft++;
		}
		printf("\n\n");
	}

	

	printf("--------------------------------------------------------------------------\n");
}
void main()
{
	int i,dice,cur_pos1=0,cur_pos2=0;
	char ch;
	while(1)
	{	
		printf("Snakes:- 20 to 7,\t 64 to 48,\t 98 to 25.\nLadder:- 57 to 94,\t 18 to 44,\t 5 to 27.\n");
		printf("Choose your option\n");
		printf("1. Player 1 plays\n");
		printf("2. Player 2 plays\n");
		printf("3. Exit\n");
		scanf("%s",&ch);
	
		switch(ch)
		{
			
			case '1':dice=rd();
			system("cls");
					printf("\t\t\t\tDice = %d\n\n",dice);
					if(dice==6)
					printf("Dice=6: You have earned a chance to play one more time.\n");
					cur_pos1=dice+cur_pos1;
					if(cur_pos1<101){
						if(cur_pos1==98)
						{
						displaychart(25,"$P1$");//snake
						}
						if(cur_pos1==64)
						{
						displaychart(48,"$P1$");//snake
						}
						if(cur_pos1==20)
						{
						displaychart(7,"$P1$");//snake
						}
						if(cur_pos1==5)
						{
						displaychart(27,"$P1$");//ladder
						}
						if(cur_pos1==18)
						{
						displaychart(44,"$P1$");//ladder
						}
						if(cur_pos1==57)
						{
						displaychart(94,"$P1$");//ladder
						}
						else{
							displaychart(cur_pos1,"$P1$");
						}
						
					}
					else{
						cur_pos1=cur_pos1-dice;
						printf("Range exceeded of Player 1.\n");
						displaychart(cur_pos1,"$P1$");
					}
					printf("Player 2 position is %d\n",cur_pos2);
			
				break;
			case '2':dice=rd();
			system("cls");
					printf("\t\t\t\tDice = %d\n\n",dice);
					cur_pos2=dice+cur_pos2;
					if(cur_pos2<101){
						if(cur_pos2==98)	//snake
						{
						displaychart(25,"$P2$");
						}
						if(cur_pos2==64)	//snake
						{
						displaychart(48,"$P2$");
						}
						if(cur_pos2==20)	//snake
						{
						displaychart(7,"$P2$");
						}
						if(cur_pos2==5)	//ladder
						{
						displaychart(27,"$P2$");
						}
						if(cur_pos2==18)	//ladder
						{
						displaychart(44,"$P2$");
						}
						if(cur_pos2==57) 	//ladder
						{
						displaychart(94,"$P2$");
						}
						else{
							displaychart(cur_pos2,"$P2$");
						}
					}
						
					else{
						cur_pos2=cur_pos2-dice;
						printf("Range exceeded of Player 2.\n");
						displaychart(cur_pos2,"$P2$");
					}
					printf("Player 1 position is %d\n",cur_pos1);
				break;
			case '3':exit(0);
				break;
			
			default:printf("Incorrect choice.Try Again\n");
				
		}
		
	}
	
}