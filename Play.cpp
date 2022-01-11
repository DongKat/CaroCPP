#include "Play.h"

void fixConsoleWindow()
{
	HWND consoleWindow = GetConsoleWindow();
	LONG style = GetWindowLong(consoleWindow, GWL_STYLE);
	style = style &~(WS_MAXIMIZEBOX)&~(WS_THICKFRAME);
	SetWindowLong(consoleWindow, GWL_STYLE, style);
}
void setConsoleWindow(int width, int height)
{
	HWND console = GetConsoleWindow();
	RECT r;
	GetWindowRect(console, &r);

	MoveWindow(console, r.left, r.top, width, height, TRUE);
}
void Textcolor(int color)
{
	HANDLE hConsoleColor;
	hConsoleColor = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsoleColor, color);
}
void gotoXY (int collumn, int line)
{
    //screen: goto [x,y]
	COORD coord;
	coord.X = collumn;
	coord.Y = line;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}
void AnTroChuot()
{
	CONSOLE_CURSOR_INFO Info;
	Info.bVisible = FALSE;
	Info.dwSize = 20;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &Info);
}
void HienTroChuot()
{
	CONSOLE_CURSOR_INFO Info;
	Info.bVisible = TRUE;
	Info.dwSize = 20;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &Info);
}

void moveUp (int x, int y, int size)
{
    if (y - 2 < size * 4 + 1)
        gotoXY(x,y - 2);    
}
void moveDown (int x, int y, int size)
{
    if (y + 2 < size * 2)
        gotoXY(x,y + 2);
}
void moveLeft(int x, int y, int size)
{
    if (x - 4 > 0)
        gotoXY(x - 4, y);
}
void moveRight(int x, int y, int size)
{
    if (x + 4 < size * 4 + 1)
        gotoXY(x + 4, y);
}

void printBoard(int size)
{
    system("cls");

	// Crosses
	for (int i = 0; i < size * 2 + 1; i++)
	{
		gotoXY(0, i);
        if (i % 2 == 0)
        {
            // Horizontal
            for (int j = 0; j < size * 4 + 1; j++)
            {
                Sleep(5);
                if (j % 4 == 0)
                    cout << char(197);
                else
                cout << char(196);
            }
        }
        else
        {
            // Vertical
            for (int j = 0; j < size * 4 + 1; j++)
            {
                Sleep(5);
                if (j % 4 == 0)
                {
                    gotoXY(j,i);
                    cout << char(179);
                }
            }
        }
	}

	// Right col
	for (int i = 0; i < size * 2 + 1; i++)
	{
		Sleep(5);
		gotoXY(size * 4, i);
		if (i % 2 == 0)
			cout << char(182);
		else
			cout << char(186);
	}

    // Left col
	for (int i = 0; i < size * 2 + 1; i++)
	{
		Sleep(5);
		gotoXY(0, i);
		if (i % 2 == 0)
			cout << char(199);
		else
			cout << char(186);
	}

	// First row
	gotoXY(0, 0);
	for (int i = 0; i < size * 4 + 1; i++)
	{
		Sleep(5);
		if (i % 4 == 0)
			cout << char(209);
		else
			cout << char(205);
	}
	gotoXY(0, 0);               cout << char(201);
	gotoXY(size * 4, 0);  cout << char(187);

	// Ve dong cuoi
	gotoXY(0, size * 2);
	for (int i = 0; i < size * 4 + 1; i++)
	{
		Sleep(5);
		if (i % 4 == 0)
			cout << char(207);
		else
			cout << char(205);
	}
    gotoXY(0, size * 2);              cout << char(200);
	gotoXY(size * 4, size * 2); cout << char(188);
}

void PrintScoreBoard(char icon_1, char icon_2, int size)
{

	Textcolor(White);
	Sleep(1);
	
	// Bang 1
	Sleep(1);
	gotoXY(size * 4 + 19, 4);
	cout << char(219) << char(205) << char(205) << char(205) << char(205) << char(254);
	for (int i = 0; i < 8; i++){
		Sleep(1);
		gotoXY(size * 4 + 25, i+1);
		cout << char(219);
	}
	for (int i = 0; i < 8; i++){
		Sleep(1);
		gotoXY(size * 4 + 61, i+1);
		cout << char(219);
	}
	gotoXY(size * 4 + 25, 0);
	for (int i = 0; i < 37; i++){ 
		Sleep(1);
		cout << char(220); 
	}
	gotoXY(size * 4 + 25, 8+1);
	for (int i = 0; i < 37; i++){ 
		Sleep(1);
		cout << char(223); 
	}
	//Bang 2
	gotoXY(size * 4 + 9, (size * 2 - 1) / 2 + 1);
	cout << char(219) << char(205) << char(205) << char(205) << char(205) << char(254);
	for (int i = 0; i < 8; i++){
		Sleep(1);
		gotoXY(size * 4 + 25, 11+i);
		cout << char(219);
	}
	for (int i = 0; i < 8; i++){
		Sleep(1);
		gotoXY(size * 4 + 61, 11+i);
		cout << char(219);
	}
	gotoXY(size * 4 + 25, 10);
	for (int i = 0; i < 37; i++){ 
		Sleep(1);
		cout << char(220);
	}
	gotoXY(size * 4 + 25, 11+8);
	for (int i = 0; i < 37; i++){ 
		Sleep(1);
		cout << char(223);
	}
	// Bang 3
	Sleep(1);
	gotoXY(size * 4 + 19, (size * 2 - 1) -3);
	cout << char(219) << char(205) << char(205) << char(205) << char(205) << char(254);
	for (int i = 0; i < 10; i++){
		Sleep(1);
		gotoXY(size * 4 + 25, size * 2 -i);
		cout << char(219);
	}
	for (int i = 0; i < 10; i++){
		Sleep(1);
		gotoXY(size * 4 + 61, size * 2 - i);
		cout << char(219);
	}
	gotoXY(size * 4 + 25, size * 2);
	for (int i = 0; i < 37; i++){ 
		Sleep(1);
		cout << char(223);
	}
	gotoXY(size * 4 + 25, size * 2 - 10);
	for (int i = 0; i < 37; i++){ 
		Sleep(1);
		cout << char(220); 
	}




	gotoXY(size * 4 + 40, 2);
	cout << "PLAYER 1";
	gotoXY(size * 4 + 30, 4);
	cout << "So quan " << icon_1 << ": ";
	gotoXY(size * 4 + 30, 5);
	cout << "So tran da thang : ";


	gotoXY(size * 4 + 40, 12);
	cout << "PLAYER 2";
	gotoXY(size * 4 + 30, 14);
	cout << "So quan " << icon_2 << ": ";
	gotoXY(size * 4 + 30, 15);
	cout << "So tran da thang : ";




	gotoXY(size * 4 + 30, 27);
	cout << "-----------------------";
	gotoXY(size * 4 + 30, 28);
	cout << " W A S D : Move ";
	gotoXY(size * 4 + 30, 29);
	cout << " ESC : Exit ";

	gotoXY(2,1);
} // IN BANG DIEM

int pvp(char icon_1, char icon_2, int size)
{
	HienTroChuot;
    printBoard(size);
    PrintScoreBoard(icon_1, icon_2, size);
	int cursor_x, cursor_y;

	while(true)
	{
		if (_kbhit())
		{
			switch(_getch())
			{
				case 119: case 87: // W
					moveUp(cursor_x, cursor_y, size);
					break;
				case 115: case 83: // S
					moveDown(cursor_x, cursor_y, size);
					break;
				case 97: case 65:  // A
					moveRight(cursor_x, cursor_y, size);
					break;
				case 100: case 68: // D
					moveLeft(cursor_x, cursor_y, size);
					break; 
			}
		}
	}
}

int main() //Debug
{
	char icon_1, icon_2;
    printBoard(16);
    PrintScoreBoard(16, icon_1, icon_2);
    _getch();
}