#include<stdio.h>
#include<conio.h>
char b[3][3];
void p_board();
int main()
{
	b[0][0]='7';b[0][1]='8';b[0][2]='9';b[1][0]='4';b[1][1]='5';b[1][2]='6';b[2][0]='1';b[2][1]='2';b[2][2]='3';
	int p1,p2,x=1,y=1,z=1;
	printf("\t\t\t\t \f Tic Tac Toe \f\n\n");
	printf("Welcome to the game , I have assumed that you are already fimiliar with this\ngame so i am not repeating the rules!\n\nThe Representation of players are\nPlayer 1 : O\nPlayer 2 : X\n\nTry To Enter Correct number and don't cheat! :P\nFor Friendlier Play Use Num-Pad. \n\nPress any key to start!\n");
	getch();
	while(x!=0 && x<=5)
	{
		while(y!=0)
		{
		system("cls");
		p_board();
		printf("\nPlayer 1 Enter Number: ");
		scanf("%d",&p1);
		switch(p1)
		{
			case 1:
			{
				if(b[2][0]=='x')
				break;
				else b[2][0]='o';
				break;
			}
			case 2:
			{
				if(b[2][1]=='x')
				break;
				else b[2][1]='o';
				break;
			}
			case 3:
			{
				if(b[2][2]=='x')
				break;
				else b[2][2]='o';
				break;
			}
			case 4:
			{
				if(b[1][0]=='x')
				break;
				else b[1][0]='o';
				break;
			}
			case 5:
			{
				if(b[1][1]=='x')
				break;
				else b[1][1]='o';
				break;
			}
			case 6:
			{
				if(b[1][2]=='x')
				break;
				else b[1][2]='o';
				break;
			}
			case 7:
			{
				if(b[0][0]=='x')
				break;
				else b[0][0]='o';
				break;
			}
			case 8:
			{
				if(b[0][1]=='x')
				break;
				else b[0][1]='o';
				break;
			}
			case 9:
			{
				if(b[0][2]=='x')
				break;
				else b[0][2]='o';
				break;
			}
			default:
			{
				printf("Wrong Selection!\n");
				break;
			}
		}
		y=0;
		}
		if( (b[0][0]=='o' && b[0][1]=='o' && b[0][2]=='o') || (b[1][0]=='o' && b[1][1]=='o' && b[1][2]=='o') || (b[2][0]=='o' && b[2][1]=='o' && b[2][2]=='o') || (b[0][0]=='o' && b[1][0]=='o' && b[2][0]=='o') || (b[0][1]=='o' && b[1][1]=='o' && b[2][1]=='o') || (b[0][2]=='o' && b[1][2]=='o' && b[2][2]=='o') || (b[0][0]=='o' && b[1][1]=='o' && b[2][2]=='o') || (b[2][0]=='o' && b[1][1]=='o' && b[0][2]=='o'))
		{
		y=10;z=0;
		break;
		}
		system("cls");
		while(z!=0)
		{
		p_board();
		printf("\nPlayer 2 Enter Number: ");
		scanf("%d",&p2);
		switch(p2)
		{
			case 1:
			{
				if(b[2][0]=='o')
				break;
				else b[2][0]='x';
				break;
			}
			case 2:
			{
				if(b[2][1]=='o')
				break;
				else b[2][1]='x';
				break;
			}
			case 3:
			{
				if(b[2][2]=='o')
				break;
				else b[2][2]='x';
				break;
			}
			case 4:
			{
				if(b[1][0]=='o')
				break;
				else b[1][0]='x';
				break;
			}
			case 5:
			{
				if(b[1][1]=='o')
				break;
				else b[1][1]='x';
				break;
			}
			case 6:
			{
				if(b[1][2]=='o')
				break;
				else b[1][2]='x';
				break;
			}
			case 7:
			{
				if(b[0][0]=='o')
				break;
				else b[0][0]='x';
				break;
			}
			case 8:
			{
				if(b[0][1]=='o')
				break;
				else b[0][1]='x';
				break;
			}
			case 9:
			{
				if(b[0][2]=='o')
				break;
				else b[0][2]='x';
				break;
			}
			default:
			{
				printf("Wrong Selection!\n");
				break;
			}
		}
		z=0;
		}
		if( (b[0][0]=='x' && b[0][1]=='x' && b[0][2]=='x') || (b[1][0]=='x' && b[1][1]=='x' && b[1][2]=='x') || (b[2][0]=='x' && b[2][1]=='x' && b[2][2]=='x') || (b[0][0]=='x' && b[1][0]=='x' && b[2][0]=='x') || (b[0][1]=='x' && b[1][1]=='x' && b[2][1]=='x') || (b[0][2]=='x' && b[1][2]=='x' && b[2][2]=='x') || (b[0][0]=='x' && b[1][1]=='x' && b[2][2]=='x') || (b[2][0]=='x' && b[1][1]=='x' && b[0][2]=='x'))
		{
			z=10;y=0;
			break;
		}
		if(y==10 || z==10)
		x=0;
		else 
		{
		y=1;
		z=1;
		x++;
		}
	}
system("cls");
if(y==10)
printf("\n> Player 1 Wins!\n");
else if(z==10)
printf("\n> Player 2 Wins!\n");
else if(x==6)
printf("\n> Game Tied!\n");
getch();
}
void p_board()
{
	int i,j;
	printf("\n");
	for(i=0;i<3;i++)
	{
		printf("\n");
		for(j=0;j<3;j++)
		{
			printf("     %c",b[i][j]);
			if(j<2)
			printf("    %c",179);
		}
		printf("\n");
		if(i<2)
		printf("    %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",196,196,196,196,196,196,197,196,196,196,196,196,196,196,196,196,196,197,196,196,196,196,196,196,196);
	}
}