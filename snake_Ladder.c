#include <stdio.h>
#include <stdlib.h>

int dice_generator()
{
	int rem;
A:
	rem = rand() % 7;
	if (rem == 0)
		goto A;
	else
		return rem;
}

void print_booklet(int current_position, int current_position1, char player[4], char player1[4])
{
	int var = 100;
	printf("%d %d\n", current_position, current_position1);
	if (current_position == 100)
	{
		printf("Congratulations!!!!!! \n\nPlayer %s wins\n", player);
		exit(0);
	}

	if(current_position1 == 100)
	{
		printf("Congratulations!!!!!! \n\nPlayer %s wins\n", player1);
		exit(0);
	}
	for (int i = 0; i < 10; i++)
	{
		if (i % 2 == 0)
		{
			for (int j = 0; j < 10; j++)
			{
				if (var != current_position && var!= current_position1)
				{
					printf("%d\t", var--);
				}
				else
				{
					//printf("%dh\t", var);
					if(current_position1 == current_position)
						printf("%s %s\t","P1", "P2");
					else if(var == current_position)
						printf("%s\t", player);
					else if(var == current_position1)
						printf("%s\t", player1);
					
					var--;
				}
			}
			var++;
		}
		else
		{
			for (int j = 0; j < 10; j++)
			{
				if (var != current_position && var!= current_position1)
				{
					printf("%d\t", var++);
				}
				else
				{
					//printf("%dh\t", var);
					if(current_position1 == current_position)
						printf("%s %s\t","P1", "P2");
					else if(var == current_position)
						printf("%s\t", player);
					else if(var == current_position1)
						printf("%s\t", player1);
						
					var++;
				}
			}
			var--;
		}
		var -= 10;

		printf("\n\n");
	}

	printf("**************************************************************************\n");
}

void main()
{
	
	int i, dice, player_1 = 0, player_2 = 0, flg = -1;
	char ch;
	while (1)
	{
		X:
		printf("Snakes: | 25 to 9  | 65 to 40 | 99 to 1  |\nLadder: | 13 to 42 | 60 to 83 | 70 to 93 |\n\n");
		printf("Choose your option\n");
		printf("Enter 1 for - Player 1 \n");
		printf("Enter 2 for - Player 2 \n");
		printf("Enter 3 to exit\n");
		scanf("%s", &ch);
        if(flg == 1 && ch != '1'){
            printf("\nPlayer 1 will play again!\n\n");
            goto X;
        }
        else if(flg == 0 && ch != '2'){
            printf("\nPlayer 2 will play again!\n\n");
            goto X;
        }
		switch (ch)
		{
		case '1':
            if(flg == 1 || flg == 0)
                flg = -1;
			dice = dice_generator();

			printf("\n\n**************************************************************************\n");
			printf("\t\t\t    Snakes And Ladders\n");
			printf("**************************************************************************\n");
			player_1 = dice + player_1;
			if (player_1 < 101)
			{
				if (player_1 == 99)
				{
					player_1 = 1;
					print_booklet(1, player_2,  "-P1-", "-P2-");
				}
				if (player_1 == 65)
				{
					player_1 = 40;
					print_booklet(40, player_2,  "-P1-", "-P2-");
				}
				if (player_1 == 25)
				{
					player_1 = 9;
					print_booklet(9, player_2,  "-P1-", "-P1-");
				}
				if (player_1 == 70)
				{
					player_1 = 93;
					print_booklet(93, player_2,  "-P1-", "-P2-");
				}
				if (player_1 == 60)
				{
					player_1 = 83;
					print_booklet(83, player_2,  "-P1-", "-P2-");
				}
				if (player_1 == 13)
				{
					player_1 = 42;
					print_booklet(42, player_2, "-P1-", "-P2-");
				}
				else
				{
					print_booklet(player_1,player_2, "-P1-", "-P2-");
				}
				printf("\t\t\t\tDice = %d\n", dice);
				//printf("**************************************************************************\n");
			}
			else
			{
				player_1 = player_1 - dice;
				printf("Range exceeded of Player 1.\n");
				print_booklet(player_1,player_2,"-P1-", "-P1-");
			}
            if(dice == 6){
                printf("\t\tPlayer 1 got a 6, He gets another chance\n");
				printf("**************************************************************************\n");
                flg = 0;
                goto X;
            }
			printf("\t\t\t  Player 2 will play\n");
			printf("**************************************************************************\n");

			break;
		case '2':
			if(flg == 1 || flg == 0)
                flg = -1;
			dice = dice_generator();

			printf("\n\n**************************************************************************\n");
			printf("\t\t\t    Snakes And Ladders\n");
			printf("**************************************************************************\n");
			player_2 = dice + player_2;
			if (player_2 < 101)
			{
				if (player_2 == 99)
				{
					player_2 = 1;
					print_booklet(1, player_1,  "-P2-", "-P1-");
				}
				if (player_2 == 65)
				{
					player_2 = 40;
					print_booklet(40, player_1,  "-P2-", "-P1-");
				}
				if (player_2 == 25)
				{
					player_2 = 9;
					print_booklet(9, player_1,  "-P2-", "-P1-");
				}
				if (player_2 == 70)
				{
					player_2 = 93;
					print_booklet(93, player_1,  "-P2-", "-P1-");
				}
				if (player_2 == 60)
				{
					player_2 = 83;
					print_booklet(83, player_1,  "-P2-", "-P1-");
				}
				if (player_2 == 13)
				{
					player_2 = 42;
					print_booklet(42, player_1, "-P2-", "-P1-");
				}
				else
				{
					print_booklet(player_2,player_1, "-P2-", "-P1-");
				}
				printf("\t\t\t\tDice = %d\n", dice);
				//printf("**************************************************************************\n");
			}
			else
			{
				player_2 = player_2 - dice;
				printf("Range exceeded of Player 2.\n");
				print_booklet(player_2,player_1,"-P2-", "-P1-");
			}
            if(dice == 6){
                printf("\t\tPlayer 2 got a 6, He gets another chance\n");
				printf("**************************************************************************\n");
                flg = 0;
                goto X;
            }
			printf("\t\t\t  Player 1 will play\n");
			printf("**************************************************************************\n");

			break;
		case '3':
			exit(0);
			break;

		default:
			printf("Incorrect choice.Try Again\n");
		}
	}
	//print_booklet(4,0,"-P1-", "-P2");
}