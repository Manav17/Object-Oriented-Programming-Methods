
#include <stdlib.h>//For I/O
#include <time.h>
#include <iostream>
#include <math.h>
#include <iomanip>
#include <fstream>
#include <sstream>
#include <unistd.h>//For Sleep Functions
//#include <conio.h>
#include <curses.h>

#include "Character.h"


using namespace std;


int main ()
{
    char AGN;
    
    do
    {
        //getch();
        Character Player;
        
        Player.title();
        cls();
        
        Player.rules();
        any();
        cls();
        cicc();
        do
        {
            Player.spell();
            Player.display();
            Player.dmg();
            Player.hp();
            Player.input();
            cls();
        }
        while (Player.getHP() >= 0);
        
        Player.gameover();
        Player.highscore();
        
        cin.clear();
        cin.ignore();
        cout << "\n\n\tRun Again (y or n)?";
        cin >> AGN;
    }
    while (AGN == 'y' or AGN == 'Y');
}
