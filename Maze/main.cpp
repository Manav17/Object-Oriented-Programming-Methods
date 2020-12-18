
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include <math.h>
#include <iomanip>
#include <fstream>
#include <sstream>
#include <unistd.h>//For Sleep Functions
//#include <conio.h>

#include "Meep.h"

using namespace std;


int main ()
{
    int HP = 10, MAXHP = 10, COUNT = 1, LEVEL = 1;
    int HPLVL = 1, MAXLVL = 1;
    int MAGIC = 1;
    int SWAG = 1;
    float DMG;
    char OPT;
    
    
    
    
    cout << "\n\tPosion Tapper";
    cout << "\n\n\tRules";
    cout << "\n\n\t1 - Type F to Heal HP";
    cout << "\n\t2 - Type J to increase Max HP";
    cout << "\n\t3 - Type D to Upgrade Heal Magic";
    cout << "\n\t4 - Type K to Upgrade Max Magic";
    
    cls();
    
    while (HP > 0)
    {
        DMG = rand() % COUNT * LEVEL;
        HP = HP - DMG;
        
        //Main Display
        cout << "\n\n\tHeal Spell - " << HPLVL << "\tMax HP Spell - " << MAXLVL << "\tMagic - " << MAGIC;
        cout << "\n\n\toof  - " << DMG << " HP";
        cout << "\n\n\tHP " << HP << " / " << MAXHP;
        OPT = ccin("OPT");

        
        switch (OPT)
        {
            case 'F':
            {
                HP = HP + HPLVL;
                cout << "\n\t + " << HPLVL << " HP";
                break;
            }
                
            case 'J':
            {
                MAXHP = MAXHP + MAXLVL;
                cout << "\n\t + " << MAXLVL << " MAX HP";
                break;
            }
                
            case 'D':
            {
                MAXLVL = MAXLVL + MAGIC;
                cout << "\n\t + " << MAGIC << " Max HP Spell";
                break;
            }
            
            case 'K':
            {
                HPLVL = HPLVL + MAGIC;
                cout << "\n\t + " << MAGIC << "Heal Spell";
            }
                
            case 'G':
            {
                MAGIC = MAGIC + SWAG;
                cout << "\n\t + " << SWAG << " Magic";
                break;
            }
                
            default:
            {
                SWAG++;
                cout << "\n\t Lol That Not An Option Stupid";
                break;
            }
    
        }
        
        cls();
        COUNT++;
    }
    
    cout << "\n\tYou Died... Wow What Looooser";
    cout << "\n\tAt Least Your Score Was " << COUNT;
}
