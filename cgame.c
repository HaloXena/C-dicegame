#include <stdio.h>

#include <stdlib.h>

#include <Windows.h>

#include <time.h>

#include <process.h>



int x = 0;

int y = 0;

int q = 0;

int w = 0;

int flag = 0;

int menu = 0;

int MAL1, MAL2;

int lap1 = 0;

int lap2 = 0;

int finish = 0;



void ConsoleSize() {

	system("mode con: cols=100 lines=100");

	system("pause>>null");

}





void table() {

	printf("　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　");

	printf("　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　");

	printf("　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　");

	printf("　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　");

	printf("　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　");

	printf("　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　");

	printf("　　　　　　　　　　　　　　＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝　　　　　　　　　　　　　　　");

	printf("　　　　　　　　　　　　　　＝　＝　＝　＝　＝　＝　＝　＝　＝　＝　＝　　　　　　　　　　　　　　　");

	printf("　　　　　　　　　　　　　　＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝　　　　　　　　　　　　　　　");

	printf("　　　　　　　　　　　　　　＝　＝　　　　　　　　　　　　　　　＝　＝　　　　　　　　　　　　　　　");

	printf("　　　　　　　　　　　　　　＝＝＝　　　　　　　　　　　　　　　＝＝＝　　　　　　　　　　　　　　　");

	printf("　　　　　　　　　　　　　　＝　＝　　　　　　　　　　　　　　　＝　＝　　　　　　　　　　　　　　　");

	printf("　　　　　　　　　　　　　　＝＝＝　　　　　　　　　　　　　　　＝＝＝　　　　　　　　　　　　　　　");

	printf("　　　　　　　　　　　　　　＝　＝　　　　　　　　　　　　　　　＝　＝　　　　　　　　　　　　　　　");

	printf("　　　　　　　　　　　　　　＝＝＝　　　　　　　　　　　　　　　＝＝＝　　　　　　　　　　　　　　　");

	printf("　　　　　　　　　　　　　　＝　＝　　　　　　　　　　　　　　　＝　＝　　　　　　　　　　　　　　　");

	printf("　　　　　　　　　　　　　　＝＝＝　　　　　　　　　　　　　　　＝＝＝　　　　　　　　　　　　　　　");

	printf("　　　　　　　　　　　　　　＝　＝　　　　　　　　　　　　　　　＝　＝　　　　　　　　　　　　　　　");

	printf("　　　　　　　　　　　　　　＝＝＝　　　　　　　　　　　　　　　＝＝＝　　　　　　　　　　　　　　　");

	printf("　　　　　　　　　　　　　　＝　＝　　　　　　　　　　　 　　　 ＝　＝　　　　　　　　　　　　　　　");

	printf("　　　　　　　　　　　　　　＝＝＝　　　　　　　　　　　　　　　＝＝＝　　　　　　　　　　　　　　　");

	printf("　　　　　　　　　　　　　　＝　＝　　　　　　　　　　　　　　　＝　＝　　　　　　　　　　　　　　　");

	printf("　　　　　　　　　　　　　　＝＝＝　　　　　　　　　　　　　　　＝＝＝　　　　　　　　　　　　　　　");

	printf("　　　　　　　　　　　　　　＝　＝　　　　　　　　　　　　　　　＝　＝　　　　　　　　　　　　　　　");

	printf("　　　　　　　　　　　　　　＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝　　　　　　　　　　　　　　　");

	printf("　　　　　　　　　　　　　　＝　＝　＝　＝　＝　＝　＝　＝　＝　＝　＝　　　　　　　　　　　　　　　");

	printf("　　　　　　　　　　　　　　＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝　　　　　　　　　　　　　　　");

	printf("　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　");

	printf("　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　");

	printf("　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　");

	printf("　　　　　　　　　　　　　　　　　　　　　　　　　　 　　 　　　　　　　　　　　　　　　　　　　　　");

	printf("　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　");

	system("pause>null");

}

void CursorView(char show)

{

	HANDLE hConsole;

	CONSOLE_CURSOR_INFO ConsoleCursor;

	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	ConsoleCursor.bVisible = show;

	ConsoleCursor.dwSize = 1;

	SetConsoleCursorInfo(hConsole, &ConsoleCursor);

}

void gotoxy(int x, int y) {

	COORD Pos = { x , y };

	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);

}

void gotoqw(int q, int w) {

	COORD Pos = { q , w };

	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);

}

void mainmenu() {



	int menu1;

	gotoxy(32, 12);

	printf("』【』 1.Game Start    【』【 \n");

	gotoxy(32, 14);

	printf("』【』 2.Choose a dice! 【』【 \n");

	gotoxy(32, 16);

	printf("』【』 3. Game termination    【』【 \n");



	gotoxy(32, 20);

	printf("Choose : "); scanf("%d", &menu1);



	switch (menu1)

	{

	case 3: printf("Game is over.\n");

		exit(0);

	}

	system("pause>null");

	menu = menu1;

	system("cls");

}



int Dice()

{

	char ch;

	while (1) {

		gotoxy(36, 30);

		printf(" type enter to roll the dice  ");

		scanf("%c", &ch);

		srand((unsigned)time(NULL));

		int dice = (rand() % 6) + 1;

		gotoxy(45, 32);

		printf("number is %d. \n", dice);

		system("pause > null");

		return dice;

	}

}







Player_1_Init() {

	x = 66;

	y = 25;

	gotoxy(x, y);

	printf("【");

}

Player_2_Init() {

	q = 30;

	w = 25;

	gotoxy(q, w);

	printf("＋");

}



void Player_1_Move() {  //爽紫是人 戚疑敗呪

	int i;

	i = 0;

	int x2 = 0;

	int y2 = 0;



	while (flag == 0) {









		i = Dice();



		gotoxy((x), (y));

		printf("　");



		if ((x == 66) && (y == 25))  //什展特

		{

			x -= i * 4;

			gotoxy(x, y);

			printf("【");

			flag = 1;

		}

		else if ((y == 25) && (x <= 66) && (x >= 34)) {  //購匝

			x2 = x;

			x -= i * 4;

			if (x < 30)

			{

				y = y - ((i - ((x2 - 30) / 4)) * 2) ;

				x = 30;

			}

			gotoxy(x, y);

			printf("【");

			flag = 1;

		}

		else if ((x == 30) && (y >= 9) && (y <= 25)) {    //図楕匝

			y2 = y;

			y -= i * 2;

			if (y <= 7)

			{

				y = 7;

				x = x + ((i - ((y2 - 7) / 2))*4);

			}

			gotoxy(x, y);

			printf("【");

			flag = 1;

		}

		else if ((y == 7) && (x >= 30) && (x <= 64)) {    //性匝

			x2 = x;

			x += i * 4;



			if (x >= 66)

			{

				x = 66;

				y = y + ((i - ((66 - x2) / 4)) * 2);

			}

			gotoxy(x, y);

			printf("【");

			flag = 1;

		}

		else if ((x == 66) && (y >= 7) && (y <= 23)) //神献楕匝

		{

			y2 = y;

			y += i * 2;

			if (y >= 25)

			{

				y = 25;

				x -= ((i - ((25 - y2) / 2)) * 4);

				gotoxy(25, 38);

				printf("Player 1:");

				gotoxy(25, 40);

				printf("廃郊訂 害紹柔艦陥.\n");

				lap1++;

			}

				gotoxy(x, y);

				printf("【");

				flag = 1;

			}



		}

	}





void Player_2_Move() {  //爽紫是人 戚疑敗呪

	int p;

	p = 0;

	int q2 = 0;

	int w2 = 0;



	while (flag == 1) {

		gotoxy(q, w);

		printf("　");

		p = Dice();





		if ((q == 30) && (w == 25))  //什展特

		{

			w -= p * 2;

			gotoxy(q, w);

			printf("＋");

			flag = 0;

		}

		else if ((q == 30) && (w >= 9) && (w <= 25)) {    //図楕匝

			w2 = w;

			w -= p * 2;

			if (w <= 7)

			{

				w = 7;

				q = q + ((p - ((w2 - 7) / 2)) * 4);

			}

			gotoxy(q, w);

			printf("＋");

			flag = 0;

		}

		else if ((w == 7) && (q >= 30) && (q <= 64)) {    //性匝

			q2 = q;

			q += p * 4;



			if (q >= 66)

			{

				q = 66;

				w = w + ((p - ((66 - q2) / 4)) * 2);

			}

			gotoxy(q, w);

			printf("＋");

			flag = 0;

		}

		else if ((q == 66) && (w >= 7) && (w <= 23)) //神献楕匝

		{

			w2 = w;

			w += p * 2;

			if (w >= 25)

			{

				w = 25;

				q -= ((p - ((25 - w2) / 2)) * 4);

			}

			gotoxy(q, w);

			printf("＋");

			flag = 0;

		}

		else if ((w == 25) && (q <= 66) && (q >= 34)) {  //購匝

			q2 = q;

			q -= p * 4;

			if (q <= 30)

			{

				q = 30;

				w = w - ((p - ((q2 - 30) / 4)) * 2);

				gotoxy(75, 38);

				printf("Player2 :");

				gotoxy(75, 40);

				printf("廃郊訂 害紹柔艦陥.\n");

				lap2++;

			}

			gotoxy(q, w);

			printf("＋");

			flag = 0;

		}

	}

}



void Victory(int x)

{

	if (x == 1)

	{

		gotoxy(36, 15);

		printf("『『『『VICTORY!『『『『");

		gotoxy(45, 17);

		printf("Player 1");

	}

	else if (x == 2)

	{

		gotoxy(36, 15);

		printf("『『『『VICTORY!『『『『");

		gotoxy(45, 17);

		printf("Player 2");

	}

}



void main() {

New:

		ConsoleSize();

		CursorView(0);

		mainmenu();

		table();

		Player_1_Init();

		Player_2_Init();

		for (;;) {

			Player_1_Move();

			if (lap1 == 2)

			{

				Victory(1);

			}



			Player_2_Move();

			if (lap2 == 2)

			{

				Victory(2);

			}

			if (lap1 == 2 || lap2 == 2) {

				gotoxy(38, 15);

				printf("1. 歯 惟績 獣拙");

				gotoxy(43, 17);

				printf("2. 惟績 曽戟");

				scanf("%d", &finish);



				if (finish == 1)

				{

					system("cls");

					goto New;

				}

				else

					exit(0);

			}

		}

	}
