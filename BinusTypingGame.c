#include <time.h>
#include <conio.h>
#include <stdio.h>
#include <windows.h>
#include <stdlib.h>

COORD coord = {0, 0};

void gotoxy(int x, int y);
void gotoxy(int x, int y)
{
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void setcolor(int ForgC)
{
    WORD wColor;

    HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO csbi;

    if (GetConsoleScreenBufferInfo(hStdOut, &csbi))
    {
        wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
        SetConsoleTextAttribute(hStdOut, wColor);
        
    }
    return;
}

void startgame();

int main()
{
    int ch;
    system("color F5");
    time_t t;
    time(&t);
    system("cls");
    gotoxy(33, 1);
    printf("++++++++++++++++++++++++++++++++++++++\n");
    gotoxy(33, 2);
    printf("| Welcome to BINUS Typing Game |\n");
    gotoxy(33, 3);
    printf("++++++++++++++++++++++++++++++++++++++\n");
    gotoxy(33, 4);
    printf("|                                    |\n");
    gotoxy(33, 5);
    printf("|                                    |\n");
    gotoxy(33, 6);
    printf("|                                    |\n");
    gotoxy(33, 7);
    printf("|                                    |\n");
    gotoxy(33, 8);
    printf("|                                    |\n");
    gotoxy(33, 9);
    printf("|                                    |\n");
    gotoxy(33, 10);
    printf("|                                    |\n");
    gotoxy(33, 11);
    printf("|                                    |\n");
    gotoxy(33, 12);
    printf("|                                    |\n");
    gotoxy(33, 13);
    printf("|                                    |\n");
    gotoxy(33, 14);
    printf("|                                    |\n");
    gotoxy(33, 15);
    printf("|                                    |\n");
    gotoxy(33, 16);
    printf("|                                    |\n");
    gotoxy(33, 17);
    printf("|                                    |\n");
    gotoxy(33, 18);
    printf("|                                    |\n");
    gotoxy(33, 19);
    printf("++++++++++++++++++++++++++++++++++++++\n");
    gotoxy(25, 20);
    printf("        ++++++++++++++++++++++++++++++++++++++\n");
    gotoxy(25, 21);
    printf("        |    Tugas game SOCS - Jay & Vince   |\n");
    gotoxy(25, 22);
    printf("        ++++++++++++++++++++++++++++++++++++++\n");
    gotoxy(54, 6);


    gotoxy(36, 8);
    printf("  Main Menu");
    gotoxy(37, 10);
    printf("1. Start the Game");
    gotoxy(37, 11);
    printf("0. Exit");
    gotoxy(37, 13);
    printf("Select the Any Option ");
    scanf("%d", &ch);

    switch (ch)
    {
    case 1:
        startgame();
        break;
    case 0:
        system("cls");
        gotoxy(17, 10);
        exit(1);
        break;
    default:
        main();
    }

    getch();
}

void startgame()
{
    char alphabets[138] = "Perguruan tinggi Bina Nusantara Wahana tuk semaikan benih harapan Mendidik dan memberdayakan sesama Membangun nusa berkiprah untuk bangsa";
    time_t t;
    time(&t);
    int score = 0, count = 0, i = -1, index = 39;
    
    char r;
    int letter, ch;

    while (1 && i < 137)
    {
        system("cls");
        i++;
        if (i == 137)
        {
            break;
        }
        r = alphabets[i];
        gotoxy(33, 1);
        printf("++++++++++++++++++++++++++++++++++++++\n");
        gotoxy(33, 2);
        printf("|.....Type HYMNE BINUS NUSANTARA.....|\n");
        gotoxy(33, 3);
        printf("++++++++++++++++++++++++++++++++++++++\n");
        gotoxy(33, 4);
        printf("|                                    |\n");
        gotoxy(33, 5);
        printf("|                                    |\n");
        gotoxy(33, 6);
        printf("| Max Score                 137      |\n");
        gotoxy(33, 7);
        printf("|                                    |\n");
        gotoxy(33, 8);
        printf("| Perguruan tinggi Bina Nusantara    |\n");
        gotoxy(33, 9);
		printf("| Wahana tuk semaikan                |\n");
		gotoxy(33, 10);			
		printf("| benih harapan Mendidik dan         |\n");
		gotoxy(33, 11);			
		printf("| memberdayakan sesama Membangun     |\n");
		gotoxy(33, 12);			
		printf("| nusa berkiprah untuk bangsa        |\n");
		gotoxy(33, 13);
		printf("|                                    |\n");
		gotoxy(33, 14);
		printf("|                                    |\n");
        gotoxy(33, 15);
        printf("|                     ++++++++++     |\n");
        gotoxy(33, 16);
        printf("| Current letter      |        |     |\n");
        gotoxy(33, 17);
        printf("|                     ++++++++++     |\n");
        gotoxy(33, 18);
        printf("|                                    |\n");
        gotoxy(33, 19);
        printf("|                                    |\n");
        gotoxy(33, 20);
        printf("|                                    |\n");
        gotoxy(33, 21);
        printf("|                                    |\n");
        gotoxy(33, 22);
        printf("|                                    |\n");
        gotoxy(33, 23);
        printf("|                                    |\n");
        gotoxy(33, 24);
        printf("|                                    |\n");
        gotoxy(25, 25);
        printf("        ++++++++++++++++++++++++++++++++++++++\n");
        gotoxy(25, 26);
        printf("        |    Tugas game SOCS - Jay & Vince   |\n");
        gotoxy(25, 27);
  	    printf("        ++++++++++++++++++++++++++++++++++++++\n");
        gotoxy(58, 16);
        printf(" %c", r);
        gotoxy(index, 9);
        letter = getch();
        index++;
        if (letter != r)
        {
            break;
        }
    }

    gotoxy(33, 1);
    printf("++++++++++++++++++++++++++++++++++++++\n");
    gotoxy(33, 2);
    printf("|............Game Over!!!!...........|\n");
    gotoxy(33, 3);
    printf("++++++++++++++++++++++++++++++++++++++\n");
    gotoxy(33, 4);
    printf("|                                    |\n");
    gotoxy(33, 5);
    printf("|                                    |\n");
    gotoxy(33, 6);
    printf("|                                    |\n");
    gotoxy(33, 7);
    printf("|                                    |\n");
    gotoxy(33, 8);
    printf("|                                    |\n");
    gotoxy(33, 9);
    printf("|                                    |\n");
    gotoxy(33, 10);
    printf("|                                    |\n");
    gotoxy(33, 11);
    printf("|                                    |\n");
    gotoxy(33, 12);
    printf("|                                    |\n");
    gotoxy(33, 13);
    printf("|                                    |\n");
    gotoxy(33, 14);
    printf("|                                    |\n");
    gotoxy(33, 15);
    printf("|                                    |\n");
    gotoxy(33, 16);
    printf("|                                    |\n");
    gotoxy(33, 17);
    printf("|                                    |\n");
	gotoxy(33, 18);
    printf("|                                    |\n");
    gotoxy(33, 19);
    printf("|                                    |\n");
    gotoxy(33, 20);
    printf("|                                    |\n");
    gotoxy(33, 21);
    printf("|                                    |\n");
    gotoxy(33, 22);
    printf("|                                    |\n");
    gotoxy(33, 23);
    printf("|                                    |\n");
    gotoxy(33, 24);
    printf("|                                    |\n");
    gotoxy(25, 25);
    printf("        ++++++++++++++++++++++++++++++++++++++\n");
    gotoxy(25, 26);
    printf("        |    Tugas game SOCS - Jay & Vince   |\n");
    gotoxy(25, 27);
    printf("        ++++++++++++++++++++++++++++++++++++++\n");
    
if (i < 30)
{
    gotoxy(35, 7);
    printf("Try again! :') ");
    gotoxy(35, 8);
    printf("current Score : %d ", i);
}
else 
{

    if (i < 500 && i > 100)
    {
        gotoxy(35, 6);
        printf("CONGRATS YOU ARE WIN!!! ");
        gotoxy(35, 8);
    	printf("current Score : %d ", i);
    }
    else if (i < 100 && i >= 0)
    {
        gotoxy(35, 7);
        printf("Nice Try! Better luck next time.");
        gotoxy(35, 8);
    	printf("current Score : %d ", i);
    }
}



    gotoxy(35, 9);
    printf("Max Score: 137");
    gotoxy(35, 10);
    printf("                       ");
    gotoxy(35, 13);
    printf("1. Play Again");
    gotoxy(35, 14);
    printf("2. Main Menu");
    gotoxy(35, 15);
    printf("3. Exit");
    gotoxy(35, 17);
    printf("Select the Any Option ");
    gotoxy(59, 17);
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
        startgame();
        break;
    case 2:
        main();
        break;
    case 3:
        gotoxy(17, 10);
        system("cls");
        exit(1);
        break;
    }
}