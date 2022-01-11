#include "Menu.h"

char icon_p1 ,icon_p2;
int bsize, bgm;

void clr() // clear Totoro
{
	for(int i = 16; i <= 28; i++)
	{
		gotoXY(40,i); std::cout << "                                                     ";
	}
}
void Totoro()
{
    gotoXY(40, 17); std::cout << "   _____                              ";                          
    gotoXY(40, 18); std::cout << "  /     \\                            ";                       
    gotoXY(40, 19); std::cout << "  vvvvvvv  /|__/|                     ";                  
    gotoXY(40, 20); std::cout << "     I   /O,O   |                     ";                  
    gotoXY(40, 21); std::cout << "     I /_____   |     /|/|            ";        
    gotoXY(40, 22); std::cout << "     J|/^ ^ ^\\  |   /00  |     _//|  ";
    gotoXY(40, 23); std::cout << "     |^ ^ ^ ^ |W|  |/^^\\ |    /oo |  ";
    gotoXY(40, 24); std::cout << "      \\m___m__|_|   \\m_m_|    \\mm_|";
    gotoXY(50, 25); std::cout << " Loading...";
    Sleep(300);
	clr();
    gotoXY(40, 16); std::cout << "  _____                              ";
    gotoXY(40, 17); std::cout << " /     \\                            "; 
    gotoXY(40, 18); std::cout << " vvvvvvv  /|__/|                     "; 
    gotoXY(40, 19); std::cout << "    I   /O,O   |                     ";
    gotoXY(40, 20); std::cout << "    I /_____   |                     ";
    gotoXY(40, 21); std::cout << "    J|/^ ^ ^\\  |       /|/|         ";
    gotoXY(40, 22); std::cout << "    |^ ^ ^ ^ |W|     /00  |    _//|  ";
    gotoXY(40, 23); std::cout << "     \\m___m__|_|    |/^^\\ |   /oo |";  
    gotoXY(40, 24); std::cout << "                     \\m_m_|   \\mm_|";
    gotoXY(50, 25); std::cout << " Loading...";
    Sleep(30);
	clr();
    gotoXY(40, 17); std::cout << "  _____                              ";
    gotoXY(40, 18); std::cout << " /     \\                            ";
    gotoXY(40, 19); std::cout << " vvvvvvv  /|__/|                     ";
    gotoXY(40, 20); std::cout << "    I   /O,O   |      /|/|           ";
    gotoXY(40, 21); std::cout << "    I /_____   |    /00  |           ";
    gotoXY(40, 22); std::cout << "    J|/^ ^ ^\\  |   |/^^\\ |     _//|";
    gotoXY(40, 23); std::cout << "    |^ ^ ^ ^ |W|    \\m_m_|    /oo | ";
    gotoXY(40, 24); std::cout << "     \\m___m__|_|              \\mm_|";
    gotoXY(50, 25); std::cout << " Loading...";
    Sleep(300);
	clr();
    gotoXY(40, 17); std::cout << "   _____                            ";
    gotoXY(40, 18); std::cout << "  /     \\                          ";
    gotoXY(40, 19); std::cout << "  vvvvvvv  /|__/|                   ";
    gotoXY(40, 20); std::cout << "     I   /O,O   |                   ";
    gotoXY(40, 21); std::cout << "     I /_____   |     /|/|    _//|  ";
    gotoXY(40, 22); std::cout << "     J|/^ ^ ^\\  |   /00  |   /oo | ";
    gotoXY(40, 23); std::cout << "     |^ ^ ^ ^ |W|  |/^^\\ |   \\mm_|";   
    gotoXY(40, 24); std::cout << "      \\m___m__|_|   \\m_m_|        ";
    gotoXY(50, 25); std::cout << " Loading...";
    Sleep(300);
}
void Title1()
{
	int x = 25, y = 0;

	Textcolor(rand()%15+1);

	gotoXY(x, y);				   std::cout << "ooooooooooooo"; 
	gotoXY(x-3, y+1);			std::cout << "oooooooooooooooo";
	gotoXY(x - 5, y + 2);    std::cout << "oooooooooooooooooo";
	gotoXY(x - 6, y + 3);   std::cout << "ooooooooooooooooooo";
	gotoXY(x - 7, y + 4);  std::cout << "ooooooo";
	gotoXY(x - 8, y + 5); std::cout << "ooooooo";
	gotoXY(x - 8, y + 6); std::cout << "ooooooo";
	gotoXY(x - 8, y + 7); std::cout << "ooooooo";
	gotoXY(x - 8, y + 8); std::cout << "ooooooo";
	gotoXY(x - 8, y + 9); std::cout << "ooooooo";
	gotoXY(x - 8, y + 10);std::cout << "ooooooo";
	gotoXY(x - 7, y + 11); std::cout << "ooooooo";
	gotoXY(x - 6, y + 12);  std::cout << "ooooooooooooooooooo";
	gotoXY(x - 5, y + 13);   std::cout << "oooooooooooooooooo";
	gotoXY(x - 3, y + 14);		std::cout << "oooooooooooooooo";
	gotoXY(x, y+15);			   std::cout << "ooooooooooooo";

	Textcolor(rand() % 15 + 1);

	gotoXY(x - 4 + 22, y + 4);				    std::cout << "ooooooooooo";
	gotoXY(x - 4 + 22 - 2, y + 5);		      std::cout << "ooooooooooooooo";
	gotoXY(x - 4 + 22 - 3, y + 6);		     std::cout << "ooooooooooooooooo";
	gotoXY(x - 4 + 22 - 3, y + 7);			 std::cout << "ooooooooooooooooo";
	gotoXY(x - 4 + 22 - 3, y + 8);			 std::cout << "oooooo     oooooo";
	gotoXY(x - 4 + 22 - 3, y + 9);			 std::cout << "oooooo     oooooo";
	gotoXY(x - 4 + 22 - 3, y + 10);		 std::cout << "oooooo     oooooo";
	gotoXY(x - 4 + 22 - 3, y + 11);		 std::cout << "ooooooooooooooooo";
	gotoXY(x - 4 + 22 - 3, y + 12);		 std::cout << "oooooo     oooooo";
	gotoXY(x - 4 + 22 - 3, y + 13);		 std::cout << "oooooo     oooooo";
	gotoXY(x - 4 + 22 - 3, y + 14);		 std::cout << "oooooo     oooooo";
	gotoXY(x - 4 + 22 - 3, y + 15);		 std::cout << "oooooo     oooooo";

	Textcolor(rand() % 15 + 1);

	gotoXY(x  + 33, y + 4);			std::cout << "ooooo   ooooooooo";
	gotoXY(x  + 33, y + 5);			std::cout << "oooooooooooooooooo";
	gotoXY(x  + 33, y + 6);			std::cout << "ooooooooooooooooooo";
	gotoXY(x  + 33, y + 7);			std::cout << "oooooooooooooooooooo";
	gotoXY(x + 1 + 33, y + 8);			 std::cout << "ooooooo     ooooooo";
	gotoXY(x + 1 + 33, y + 9);			 std::cout << "ooooooo     ooooooo";
	gotoXY(x + 1 + 33, y + 10);		 std::cout << "ooooooo";
	gotoXY(x + 1 + 33, y + 11);		 std::cout << "ooooooo";
	gotoXY(x + 1 + 33, y + 12);		 std::cout << "ooooooo";
	gotoXY(x + 1 + 33, y + 13);		 std::cout << "ooooooo";
	gotoXY(x + 1 + 33, y + 14);		 std::cout << "ooooooo";
	gotoXY(x + 1 + 33, y + 15);		 std::cout << "ooooooo";

    Textcolor(rand()%15+1);

	gotoXY(x + 57, y + 4);					std::cout << "ooooooooooo";
	gotoXY(x + 57 - 2, y + 5);			  std::cout << "ooooooooooooooo";
	gotoXY(x + 57 - 3, y + 6);			 std::cout << "ooooooooooooooooo";
	gotoXY(x + 57 - 3, y + 7);			 std::cout << "ooooooooooooooooo";
	gotoXY(x + 57 - 3, y + 8);			 std::cout << "oooooo     oooooo";
	gotoXY(x + 57 - 3, y + 9);			 std::cout << "oooooo     oooooo";
	gotoXY(x + 57 - 3, y + 10);		 std::cout << "oooooo     oooooo";
	gotoXY(x + 57 - 3, y + 11);		 std::cout << "oooooo     oooooo";
	gotoXY(x + 57 - 3, y + 12);		 std::cout << "ooooooooooooooooo";
	gotoXY(x + 57 - 3, y + 13);		 std::cout << "ooooooooooooooooo";
	gotoXY(x + 57 - 2, y + 14);		  std::cout << "ooooooooooooooo";
	gotoXY(x + 57, y + 15);				std::cout << "ooooooooooo";	
}     
void Title3() // No flashing
{
	int x = 25, y = 0;
	Textcolor(Red);
	gotoXY(x, y);				   std::cout << "ooooooooooooo";
	gotoXY(x - 3, y + 1);			std::cout << "oooooooooooooooo";
	gotoXY(x - 5, y + 2);    std::cout << "oooooooooooooooooo";
	gotoXY(x - 6, y + 3);   std::cout << "ooooooooooooooooooo";
	gotoXY(x - 7, y + 4);  std::cout << "ooooooo";
	gotoXY(x - 8, y + 5); std::cout << "ooooooo";
	gotoXY(x - 8, y + 6); std::cout << "ooooooo";
	gotoXY(x - 8, y + 7); std::cout << "ooooooo";
	gotoXY(x - 8, y + 8); std::cout << "ooooooo";
	gotoXY(x - 8, y + 9); std::cout << "ooooooo";
	gotoXY(x - 8, y + 10); std::cout << "ooooooo";
	gotoXY(x - 7, y + 11); std::cout << "ooooooo";
	gotoXY(x - 6, y + 12);  std::cout << "ooooooooooooooooooo";
	gotoXY(x - 5, y + 13);   std::cout << "oooooooooooooooooo";
	gotoXY(x - 3, y + 14);		std::cout << "oooooooooooooooo";
	gotoXY(x, y + 15);			   std::cout << "ooooooooooooo";
	Textcolor(Green);
	gotoXY(x - 4 + 22, y + 4);				    std::cout << "ooooooooooo";
	gotoXY(x - 4 + 22 - 2, y + 5);		      std::cout << "ooooooooooooooo";
	gotoXY(x - 4 + 22 - 3, y + 6);		     std::cout << "ooooooooooooooooo";
	gotoXY(x - 4 + 22 - 3, y + 7);			 std::cout << "ooooooooooooooooo";
	gotoXY(x - 4 + 22 - 3, y + 8);			 std::cout << "oooooo     oooooo";
	gotoXY(x - 4 + 22 - 3, y + 9);			 std::cout << "oooooo     oooooo";
	gotoXY(x - 4 + 22 - 3, y + 10);		 std::cout << "oooooo     oooooo";
	gotoXY(x - 4 + 22 - 3, y + 11);		 std::cout << "ooooooooooooooooo";
	gotoXY(x - 4 + 22 - 3, y + 12);		 std::cout << "oooooo     oooooo";
	gotoXY(x - 4 + 22 - 3, y + 13);		 std::cout << "oooooo     oooooo";
	gotoXY(x - 4 + 22 - 3, y + 14);		 std::cout << "oooooo     oooooo";
	gotoXY(x - 4 + 22 - 3, y + 15);		 std::cout << "oooooo     oooooo";
	Textcolor(Blue);

	gotoXY(x + 33, y + 4);			std::cout << "ooooo   ooooooooo";
	gotoXY(x + 33, y + 5);			std::cout << "oooooooooooooooooo";
	gotoXY(x + 33, y + 6);			std::cout << "ooooooooooooooooooo";
	gotoXY(x + 33, y + 7);			std::cout << "oooooooooooooooooooo";
	gotoXY(x + 1 + 33, y + 8);			 std::cout << "ooooooo     ooooooo";
	gotoXY(x + 1 + 33, y + 9);			 std::cout << "ooooooo     ooooooo";
	gotoXY(x + 1 + 33, y + 10);		 std::cout << "ooooooo";
	gotoXY(x + 1 + 33, y + 11);		 std::cout << "ooooooo";
	gotoXY(x + 1 + 33, y + 12);		 std::cout << "ooooooo";
	gotoXY(x + 1 + 33, y + 13);		 std::cout << "ooooooo";
	gotoXY(x + 1 + 33, y + 14);		 std::cout << "ooooooo";
	gotoXY(x + 1 + 33, y + 15);		 std::cout << "ooooooo";
	Textcolor(Yellow);
	gotoXY(x + 57, y + 4);					std::cout << "ooooooooooo";
	gotoXY(x + 57 - 2, y + 5);			  std::cout << "ooooooooooooooo";
	gotoXY(x + 57 - 3, y + 6);			 std::cout << "ooooooooooooooooo";
	gotoXY(x + 57 - 3, y + 7);			 std::cout << "ooooooooooooooooo";
	gotoXY(x + 57 - 3, y + 8);			 std::cout << "oooooo     oooooo";
	gotoXY(x + 57 - 3, y + 9);			 std::cout << "oooooo     oooooo";
	gotoXY(x + 57 - 3, y + 10);		 std::cout << "oooooo     oooooo";
	gotoXY(x + 57 - 3, y + 11);		 std::cout << "oooooo     oooooo";
	gotoXY(x + 57 - 3, y + 12);		 std::cout << "ooooooooooooooooo";
	gotoXY(x + 57 - 3, y + 13);		 std::cout << "ooooooooooooooooo";
	gotoXY(x + 57 - 2, y + 14);		  std::cout << "ooooooooooooooo";
	gotoXY(x + 57, y + 15);				std::cout << "ooooooooooo";
	Textcolor(defaultColor);

}
void Play()
{
    int x = 50, y = 21;
	char s[30] = " ";
    gotoXY(50, 18);
    std::cout << "PLAY";
    gotoXY(50, 21);
    Textcolor(BW);
    std::cout << "Plaver Vs Player" << std::endl;
    Textcolor(defaultColor);
    gotoXY(50, 22);
    std::cout << "Player Vs Computer" << std::endl;
    gotoXY(50, 22);
    std::cout << "Player Vs Computer (Easy)" << std::endl;
    gotoXY(50, 23);
    std::cout << "Player Vs Computer (Medium)" << std::endl;
    gotoXY(50, 24);
    std::cout << "Player Vs Computer (Hard)" << std::endl;
    while (true)
	{
		if (_kbhit())
		{
			switch (_getch())
			{
                case 119:
                    if (y > 21)
                    {
                        y--;
                        gotoXY(x,y);
                    }
                    else 
                    {
                        y = 24;
                    }
                    switch (y)
                    {
                        case 21:
                            gotoXY(50, 18);
                            std::cout << "PLAY";
                            gotoXY(50, 21);
                            Textcolor(BW);
                            std::cout << "Plaver Vs Player" << std::endl;
                            Textcolor(defaultColor);
                            gotoXY(50, 22);
                            std::cout << "Player Vs Computer (Easy)" << std::endl;
                            gotoXY(50, 23);
                            std::cout << "Player Vs Computer (Medium)" << std::endl;
                            gotoXY(50, 24);
                            std::cout << "Player Vs Computer (Hard)" << std::endl;
                            break;
                        case 22:
                            gotoXY(50, 18);
                            std::cout << "PLAY";
                            gotoXY(50, 21);
                            std::cout << "Plaver Vs Player" << std::endl;
                            gotoXY(50, 22);
                            Textcolor(BW);
                            std::cout << "Player Vs Computer (Easy)" << std::endl;
                            Textcolor(defaultColor);
                            gotoXY(50, 23);
                            std::cout << "Player Vs Computer (Medium)" << std::endl;
                            gotoXY(50, 24);
                            std::cout << "Player Vs Computer (Hard)" << std::endl;
                            break;
                        case 23:
                            gotoXY(50, 18);
                            std::cout << "PLAY";
                            gotoXY(50, 21);
                            std::cout << "Plaver Vs Player" << std::endl;
                            gotoXY(50, 22);
                            std::cout << "Player Vs Computer (Easy)" << std::endl;
                            gotoXY(50, 23);
                            Textcolor(BW);
                            std::cout << "Player Vs Computer (Medium)" << std::endl;
                            Textcolor(defaultColor);
                            gotoXY(50, 24);
                            std::cout << "Player Vs Computer (Hard)" << std::endl;
                            break;
                        case 24:
                            gotoXY(50, 18);
                            std::cout << "PLAY";
                            gotoXY(50, 21);
                            std::cout << "Plaver Vs Player" << std::endl;
                            gotoXY(50, 22);
                            std::cout << "Player Vs Computer (Easy)" << std::endl;
                            gotoXY(50, 23);
                            std::cout << "Player Vs Computer (Medium)" << std::endl;
                            gotoXY(50, 24);
                            Textcolor(BW);
                            std::cout << "Player Vs Computer (Hard)" << std::endl;
                            Textcolor(defaultColor);
                            break;
                    }
                    break;
                case 115:
                    if (y < 24)
                    {
                        y++;
                        gotoXY(x,y);
                    }
                    else 
                    {
                        y = 21;
                    }
                    switch (y)
                    {
                        case 21:
                            gotoXY(50, 18);
                            std::cout << "PLAY";
                            gotoXY(50, 21);
                            Textcolor(BW);
                            std::cout << "Plaver Vs Player" << std::endl;
                            Textcolor(defaultColor);
                            gotoXY(50, 22);
                            std::cout << "Player Vs Computer (Easy)" << std::endl;
                            gotoXY(50, 23);
                            std::cout << "Player Vs Computer (Medium)" << std::endl;
                            gotoXY(50, 24);
                            std::cout << "Player Vs Computer (Hard)" << std::endl;
                            break;
                        case 22:
                            gotoXY(50, 18);
                            std::cout << "PLAY";
                            gotoXY(50, 21);
                            std::cout << "Plaver Vs Player" << std::endl;
                            gotoXY(50, 22);
                            Textcolor(BW);
                            std::cout << "Player Vs Computer (Easy)" << std::endl;
                            Textcolor(defaultColor);
                            gotoXY(50, 23);
                            std::cout << "Player Vs Computer (Medium)" << std::endl;
                            gotoXY(50, 24);
                            std::cout << "Player Vs Computer (Hard)" << std::endl;
                            break;
                        case 23:
                            gotoXY(50, 18);
                            std::cout << "PLAY";
                            gotoXY(50, 21);
                            std::cout << "Plaver Vs Player" << std::endl;
                            gotoXY(50, 22);
                            std::cout << "Player Vs Computer (Easy)" << std::endl;
                            gotoXY(50, 23);
                            Textcolor(BW);
                            std::cout << "Player Vs Computer (Medium)" << std::endl;
                            Textcolor(defaultColor);
                            gotoXY(50, 24);
                            std::cout << "Player Vs Computer (Hard)" << std::endl;
                            break;
                        case 24:
                            gotoXY(50, 18);
                            std::cout << "PLAY";
                            gotoXY(50, 21);
                            std::cout << "Plaver Vs Player" << std::endl;
                            gotoXY(50, 22);
                            std::cout << "Player Vs Computer (Easy)" << std::endl;
                            gotoXY(50, 23);
                            std::cout << "Player Vs Computer (Medium)" << std::endl;
                            gotoXY(50, 24);
                            Textcolor(BW);
                            std::cout << "Player Vs Computer (Hard)" << std::endl;
                            Textcolor(defaultColor);
                            break;
                    }
                    break;
                case 13: // Enter key
                    if (y == 21)
                    {
                        //pvp();
                        continue;
                    }
                    if (y == 22)
                    {
                        //pve();
                        continue;
                    }
                    if (y == 23)
                    {
                        //pve1();
                        continue;
                    }
                    if (y == 24)
                    {
                        //pve2();
                        continue;
                    }
                    break;
            }
        }
    }
}
int Setting()
{
    Title3();
    int bgm = 0;
    int che_do[3] = {3,5,7};
    int b_size = che_do[bsize];
    int x = 50, y = 21;
    std::string bg = (bgm == 1) ? "ON" : "OFF" ;
    gotoXY(50, 18); std::cout << "Settings"; 
    gotoXY(30, 21); std::cout << "Player 1's Icon:" ;
    Textcolor(BW);
    gotoXY(50, 21); std::cout << icon_p1;
    Textcolor(defaultColor);
    gotoXY(30, 22); std::cout << "Player 2's Icon: " ;
    gotoXY(50, 22); std::cout << icon_p2;
    gotoXY(30, 23); std::cout << "Board's size: ";
    gotoXY(50, 23); std::cout << b_size << " x " << b_size;
    gotoXY(30, 24); std::cout << "BGM: \t" ;
    gotoXY(50, 24); std::cout << bg;
    gotoXY(50, 25); std::cout << "Back";
    gotoXY(30, 28); std::cout << "Press ENTER to change player's icon, board size and toggle bgm";
    while (true)
	{
        AnTroChuot();
		if (_kbhit())
		{
			switch (_getch())
			{
			    case 119: case 87:
                    if (y > 21)
                    {
                        y--;
                        gotoXY(x,y);
                    }
                    else 
                    {
                        y = 25;
                    }
                    switch(y)
                    {
                        case 21:
                            gotoXY(50, 18); std::cout << "Settings"; 
                            gotoXY(30, 21); std::cout << "Player 1's Icon:" ;
                            Textcolor(BW);
                            gotoXY(50, 21);  std::cout << icon_p1;
                            Textcolor(defaultColor);
                            gotoXY(30, 22); std::cout << "Player 2's Icon: " ;
                            gotoXY(50, 22); std::cout << icon_p2;
                            gotoXY(30, 23); std::cout << "Board's size: ";
                            gotoXY(50, 23); std::cout << b_size << " x " << b_size;
                            gotoXY(30, 24); std::cout << "BGM: \t" ;
                            gotoXY(50, 24); std::cout << bg;
                            gotoXY(50, 25); std::cout << "Back";
                            break;
                        case 22:
                            gotoXY(50, 18); std::cout << "Settings"; 
                            gotoXY(30, 21); std::cout << "Player 1's Icon:" ;
                            gotoXY(50, 21);  std::cout << icon_p1;
                            gotoXY(30, 22); std::cout << "Player 2's Icon: " ;
                            Textcolor(BW);
                            gotoXY(50, 22); std::cout << icon_p2;
                            Textcolor(defaultColor);
                            gotoXY(30, 23); std::cout << "Board's size: ";
                            gotoXY(50, 23); std::cout << b_size << " x " << b_size;
                            gotoXY(30, 24); std::cout << "BGM: \t" ;
                            gotoXY(50, 24); std::cout << bg;
                            gotoXY(50, 25); std::cout << "Back";
                            break;  
                        case 23:
                            gotoXY(50, 18); std::cout << "Settings"; 
                            gotoXY(30, 21); std::cout << "Player 1's Icon:" ;
                            gotoXY(50, 21);  std::cout << icon_p1;
                            gotoXY(30, 22); std::cout << "Player 2's Icon: " ;
                            gotoXY(50, 22); std::cout << icon_p2;
                            gotoXY(30, 23); std::cout << "Board's size: ";
                            Textcolor(BW);
                            gotoXY(50, 23); std::cout << b_size << " x " << b_size;
                            Textcolor(defaultColor);
                            gotoXY(30, 24); std::cout << "BGM: \t" ;
                            gotoXY(50, 24); std::cout << bg;
                            gotoXY(50, 25); std::cout << "Back";
                            break;
                        case 24:
                            gotoXY(50, 18); std::cout << "Settings"; 
                            gotoXY(30, 21); std::cout << "Player 1's Icon:" ;
                            gotoXY(50, 21);  std::cout << icon_p1;
                            gotoXY(30, 22); std::cout << "Player 2's Icon: " ;
                            gotoXY(50, 22); std::cout << icon_p2;
                            gotoXY(30, 23); std::cout << "Board's size: ";
                            gotoXY(50, 23); std::cout << b_size << " x " << b_size;
                            gotoXY(30, 24); std::cout << "BGM: \t" ;
                            Textcolor(BW);
                            gotoXY(50, 24); std::cout << bg;
                            Textcolor(defaultColor);
                            gotoXY(50, 25); std::cout << "Back";
                            break;
                        case 25:
                            gotoXY(50, 18); std::cout << "Settings"; 
                            gotoXY(30, 21); std::cout << "Player 1's Icon:" ;
                            gotoXY(50, 21);  std::cout << icon_p1;
                            gotoXY(30, 22); std::cout << "Player 2's Icon: " ;
                            gotoXY(50, 22); std::cout << icon_p2;
                            gotoXY(30, 23); std::cout << "Board's size: ";
                            gotoXY(50, 23); std::cout << b_size << " x " << b_size;
                            gotoXY(30, 24); std::cout << "BGM: \t" ;
                            gotoXY(50, 24); std::cout << bg;
                            Textcolor(BW);
                            gotoXY(50, 25); std::cout << "Back";
                            Textcolor(defaultColor);
                            break;
                    }
				    break;
                case 115: case 83:
                    if (y < 25)
                    {
                        y++;
                        gotoXY(x,y);
                    }
                    else y = 21;
                    switch(y)
                    {
                        case 21:
                            gotoXY(50, 18); std::cout << "Settings"; 
                            gotoXY(30, 21); std::cout << "Player 1's Icon:" ;
                            Textcolor(BW);
                            gotoXY(50, 21);  std::cout << icon_p1;
                            Textcolor(defaultColor);
                            gotoXY(30, 22); std::cout << "Player 2's Icon: " ;
                            gotoXY(50, 22); std::cout << icon_p2;
                            gotoXY(30, 23); std::cout << "Board's size: ";
                            gotoXY(50, 23); std::cout << b_size << " x " << b_size;
                            gotoXY(30, 24); std::cout << "BGM: \t" ;
                            gotoXY(50, 24); std::cout << bg;
                            gotoXY(50, 25); std::cout << "Back.";
                            break;
                        case 22:
                            gotoXY(50, 18); std::cout << "Settings"; 
                            gotoXY(30, 21); std::cout << "Player 1's Icon:" ;
                            gotoXY(50, 21);  std::cout << icon_p1;
                            gotoXY(30, 22); std::cout << "Player 2's Icon: " ;
                            Textcolor(BW);
                            gotoXY(50, 22); std::cout << icon_p2;
                            Textcolor(defaultColor);
                            gotoXY(30, 23); std::cout << "Board's size: ";
                            gotoXY(50, 23); std::cout << b_size << " x " << b_size;
                            gotoXY(30, 24); std::cout << "BGM: \t" ;
                            gotoXY(50, 24); std::cout << bg;
                            gotoXY(50, 25); std::cout << "Back.";
                            break;  
                        case 23:
                            gotoXY(50, 18); std::cout << "Settings"; 
                            gotoXY(30, 21); std::cout << "Player 1's Icon:" ;
                            gotoXY(50, 21); std::cout << icon_p1;
                            gotoXY(30, 22); std::cout << "Player 2's Icon: " ;
                            gotoXY(50, 22); std::cout << icon_p2;
                            gotoXY(30, 23); std::cout << "Board's size: ";
                            Textcolor(BW);
                            gotoXY(50, 23); std::cout << b_size << " x " << b_size;
                            Textcolor(defaultColor);
                            gotoXY(30, 24); std::cout << "BGM: \t" ;
                            gotoXY(50, 24); std::cout << bg;
                            gotoXY(50, 25); std::cout << "Back.";
                            break;
                        case 24:
                            gotoXY(50, 18); std::cout << "Settings"; 
                            gotoXY(30, 21); std::cout << "Player 1's Icon:" ;
                            gotoXY(50, 21); std::cout << icon_p1;
                            gotoXY(30, 22); std::cout << "Player 2's Icon: " ;
                            gotoXY(50, 22); std::cout << icon_p2;
                            gotoXY(30, 23); std::cout << "Board's size: ";
                            gotoXY(50, 23); std::cout << b_size << " x " << b_size;
                            gotoXY(30, 24); std::cout << "BGM: \t" ;
                            Textcolor(BW);
                            gotoXY(50, 24); std::cout << bg;
                            Textcolor(defaultColor);
                            gotoXY(50, 25); std::cout << "Back.";
                            break;
                        case 25:
                            gotoXY(50, 18); std::cout << "Settings"; 
                            gotoXY(30, 21); std::cout << "Player 1's Icon:" ;
                            gotoXY(50, 21); std::cout << icon_p1;
                            gotoXY(30, 22); std::cout << "Player 2's Icon: " ;
                            gotoXY(50, 22); std::cout << icon_p2;
                            gotoXY(30, 23); std::cout << "Board's size: ";
                            gotoXY(50, 23); std::cout << b_size << " x " << b_size;
                            gotoXY(30, 24); std::cout << "BGM: \t" ;
                            gotoXY(50, 24); std::cout << bg;
                            Textcolor(BW);
                            gotoXY(50, 25); std::cout << "Back.";
                            Textcolor(defaultColor);
                            break;
                    }
                    break;
                case 13: // Enter key
                    if (y == 21)
                    {
                        HienTroChuot();
                        gotoXY(50, 21);
                        Textcolor(defaultColor);
                        std::cout << " ";
                        gotoXY(50, 21);
                        icon_p1 = _getch();
                        Textcolor(BW);
                        gotoXY(50, 21);
                        std::cout << icon_p1;
                        Textcolor(defaultColor);
                        AnTroChuot();
                    }
                    if (y == 22)
                    {
                        HienTroChuot();
                        gotoXY(50, 22);
                        Textcolor(defaultColor);
                        std::cout << " ";
                        gotoXY(50, 22);
                        icon_p2 = _getch();
                        Textcolor(BW);
                        gotoXY(50, 22);
                        std::cout << icon_p2;
                        Textcolor(defaultColor);
                        AnTroChuot();
                    }
                    if (y == 23)
                    {
                        Textcolor(BW);
                        n++;
                        if(n == 3) n = 0;
                        b_size = che_do[n];
                        gotoXY(50, 23); std::cout << "     ";
                        gotoXY(50, 23); std::cout << b_size << " x " << b_size;
                        Textcolor(defaultColor);
                    }
                    if (y == 24)
                    {
                        Textcolor(defaultColor);
                        if (bgm == 1) bgm = 0;
                        else if (bgm == 0) bgm = 1;
                        gotoXY(50, 24); std::cout << "   ";
                        Textcolor(BW);
                        bg = (bgm == 1) ? "ON" : "OFF" ; // string bg
                        gotoXY(50, 24); std::cout << bg;
                        gotoXY(50, 24);
                        Textcolor(defaultColor);
                    }
                    if (y == 25) 
                    {
                        system("cls");
                        return 1;
                    }
                    break;
            }        
        }
    }
}	
void About()
{
    Title3();
	gotoXY(30, 18); std::cout << "ABOUT";
	gotoXY(30, 21);	std::cout << "DO AN GAME CARO - LOP 20CTT2" << std::endl;
	gotoXY(30, 22); std::cout << "MSSV  :\t20125087." << std::endl;
	gotoXY(30, 23); std::cout << "Ho ten:\tHuynh Ba Dong Cat" << std::endl;
	gotoXY(30, 24); std::cout << "Lop   :\t20CTT2." << std::endl;
    Textcolor(BW);
	gotoXY(50, 30); std::cout << "Back";
    Textcolor(defaultColor);
	char command = ' ';
	command = _getch();			
	system("cls");
}
void Help()
{
    Title3();
	gotoXY(50, 18); std::cout << "HELP";
	gotoXY(50, 21); std::cout << "HUONG DAN" << std::endl;
	gotoXY(20, 22); std::cout << "1. Ba kich thuoc bang 3x3, 5x5, 7x7" << std::endl;
	gotoXY(20, 23); std::cout << "2. Su dung cac phim W A S D de di chuyen va Enter de danh." << std::endl;
	gotoXY(20, 24); std::cout << "3. Dieu kien chien thang: 5 quan co X hoac O (3 quan doi voi bang 3x3) theo hang ngang, doc, cheo." << std::endl;
    gotoXY(20, 25); std::cout << "4. Co the doi icon cua player va kich thuoc bang trong setting ";
	gotoXY(20, 26); std::cout << "5. Luat choi tuan theo quy dinh chan 2 dau " << std::endl;
	gotoXY(20, 27); std::cout << "6. Moi nguoi hay choi game vui ve" << std::endl;
    Textcolor(BW);
	gotoXY(50, 30); std::cout << "BACK";
    Textcolor(defaultColor);
	char command = ' ';
	command = _getch();
	system("cls");
}
void ScreenStartGame()
{
	int x = 50, y = 20;
	char s[30] = " ";
    for (int i = 0; i < 5; i++)
    {
        Title1();
        Totoro();
        Sleep(10);
    }
    if (bgm == 1)
    {
        PlaySound(TEXT("bgm.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
    }
    system("cls");
    Title3();
	AnTroChuot();
    Textcolor(BW);
	gotoXY(50, 20); std::cout << "Play";
    Textcolor(defaultColor);	
    gotoXY(50, 21); std::cout << "Setting";
	gotoXY(50, 22); std::cout << "Help";
	gotoXY(50, 23); std::cout << "About";
	gotoXY(50, 24); std::cout << "Exit";
	gotoXY(50, 28); std::cout << "W - S : Move ( Off Unikey - Off Caps Lock ) ";
	gotoXY(50, 29); std::cout << "Enter : Select ";
    gotoXY(50, 30); std::cout << "Note: default game board's size is 3x3";
    //if (bgm == 1)
	while (true)
	{
		if (_kbhit())
		{
			switch (_getch())
			{
                case 119: case 87:
                    if (y > 20)
                    {
                        y--;
                        gotoXY(x,y);
                    }
                    else y = 24;
                    switch(y)
                    {
                        case 20:
                        
                            Textcolor(BW);
                            gotoXY(50, 20); std::cout << "Play";
                            Textcolor(defaultColor);
                            gotoXY(50, 21); std::cout << "Setting";
                            gotoXY(50, 22); std::cout << "Help";
                            gotoXY(50, 23); std::cout << "About";
                            gotoXY(50, 24); std::cout << "Exit";
                            break;
                        case 21:
                        
                            gotoXY(50, 20); std::cout << "Play";
                            Textcolor(BW);
                            gotoXY(50, 21); std::cout << "Setting";
                            Textcolor(defaultColor);
                            gotoXY(50, 22); std::cout << "Help";
                            gotoXY(50, 23); std::cout << "About";
                            gotoXY(50, 24); std::cout << "Exit";
                            break;
                        case 22:
                        
                            gotoXY(50, 20); std::cout << "Play";
                            gotoXY(50, 21); std::cout << "Setting";
                            Textcolor(BW);
                            gotoXY(50, 22); std::cout << "Help";
                            Textcolor(defaultColor);
                            gotoXY(50, 23); std::cout << "About";
                            gotoXY(50, 24); std::cout << "Exit";
                            break;  
                        case 23:
                        
                            gotoXY(50, 20); std::cout << "Play";
                            gotoXY(50, 21); std::cout << "Setting";
                            gotoXY(50, 22); std::cout << "Help";
                            Textcolor(BW);
                            gotoXY(50, 23); std::cout << "About";
                            Textcolor(defaultColor);
                            gotoXY(50, 24); std::cout << "Exit";
                            break;
                        case 24:
                        
                            gotoXY(50, 20); std::cout << "Play";
                            gotoXY(50, 21); std::cout << "Setting";
                            gotoXY(50, 22); std::cout << "Help";
                            gotoXY(50, 23); std::cout << "About";
                            Textcolor(BW);
                            gotoXY(50, 24); std::cout << "Exit";
                            Textcolor(defaultColor);
                            break;
                    }
				    break;
                case 115: case 83:
                    if (y < 24)
                    {
                        y++;
                        gotoXY(x,y);
                    }
                    else y = 20;
                    switch(y)
                    {
                        case 20:
                        
                            Textcolor(BW);
                            gotoXY(50, 20); std::cout << "Play";
                            Textcolor(defaultColor);
                            gotoXY(50, 21); std::cout << "Setting";
                            gotoXY(50, 22); std::cout << "Help";
                            gotoXY(50, 23); std::cout << "About";
                            gotoXY(50, 24); std::cout << "Exit";
                            break;
                        case 21:
                            gotoXY(50, 20); std::cout << "Play";
                            Textcolor(BW);
                            gotoXY(50, 21); std::cout << "Setting";
                            Textcolor(defaultColor);
                            gotoXY(50, 22); std::cout << "Help";
                            gotoXY(50, 23); std::cout << "About";
                            gotoXY(50, 24); std::cout << "Exit";
                            break;
                        case 22:
                            gotoXY(50, 20); std::cout << "Play";
                            gotoXY(50, 21); std::cout << "Setting";
                            Textcolor(BW);
                            gotoXY(50, 22); std::cout << "Help";
                            Textcolor(defaultColor);
                            gotoXY(50, 23); std::cout << "About";
                            gotoXY(50, 24); std::cout << "Exit";
                            break;  
                        case 23:
                            gotoXY(50, 20); std::cout << "Play";
                            gotoXY(50, 21); std::cout << "Setting";
                            gotoXY(50, 22); std::cout << "Help";
                            Textcolor(BW);
                            gotoXY(50, 23); std::cout << "About";
                            Textcolor(defaultColor);
                            gotoXY(50, 24); std::cout << "Exit";
                            break;
                        case 24:
                            gotoXY(50, 20); std::cout << "Play";
                            gotoXY(50, 21); std::cout << "Setting";
                            gotoXY(50, 22); std::cout << "Help";
                            gotoXY(50, 23); std::cout << "About";
                            Textcolor(BW);
                            gotoXY(50, 24); std::cout << "Exit";
                            Textcolor(defaultColor);
                            break;
                    }
                    break;
                case 13:
                    if (y == 20)
                    {
                        system("cls");
                        Play();
                        ScreenStartGame();
                    }
                    if (y == 21)
                    {
                        system("cls");
                        Setting();
                        ScreenStartGame();
                    }
                    if (y == 22)
                    {
                        system("cls");
                        Help();
                        ScreenStartGame();
                    }
                    if (y == 23)
                    {
                        system("cls");
                        About();
                        ScreenStartGame();
                    }
                    if (y == 24)
                    {
                        system("cls");
                        exit(0);
                    }
                    break;
			}
		}	
	}
}

int main()//debug
{
	fixConsoleWindow();
	setConsoleWindow(1000, 600);
    ScreenStartGame(1);
	system("pause");
}