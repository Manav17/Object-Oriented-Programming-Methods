
//#include <stdlib.h>
//#include <time.h>
//#include <iostream>
//#include <math.h>
//#include <iomanip>
//#include <fstream>
//#include <sstream>
//#include <conio.h>

#include "Meep.h"

using namespace std;

class Char
{
protected:
    string NAME;
    
public:
    Char ()
    {
        NAME = "Nada";
    }
    
    void setNAME ()
    {
        NAME = scin("Name");
    }
};

class Stat : public Char
{
protected:
    int LVL;//Max 20 e_levelup
    int EXP;
    int SKILL;
    int HP;
    int MP;
    int MAX_EXP;
    int MAX_HP;//Max 1000 e_levelup
    int MAX_MP;//Max 1000 e_levelup
    
    int DEF;//Max 10
    int VIT;//HP Up   Max 10   e_levelup
    int WIS;//MP UP   Max 10   e_levelup
    int STR;//Max 10
    int MGI;//Max 10
    
public:
    Stat ()
    {
        LVL = 0;
        SKILL = 0;
        HP = 10;
        MP = 10;
        EXP = 0;
        MAX_HP = 10;
        MAX_MP = 10;
        MAX_EXP = 10;
        
        DEF = 0;
        VIT = 0;
        WIS = 0;
        STR = 0;
        MGI = 0;
    }
    
    void levelup ()
    {
        LVL++;
        SKILL++;
        MAX_HP = (25 * LVL) / pow(10, 1 - .2 * VIT) + (10 * pow(10,LVL / 11.77 ));
        MAX_MP = (25 * LVL) / pow(4, 1 - .2 * WIS) + (10 * pow(10,LVL / 11.77 )) / pow(2, 1 - .2 * WIS);
        HP = MAX_HP;
        MP = MAX_MP;
    }
    
    void skillmenu()
    {
        int OPT;
        cout << "\n\tWIS - " << WIS << " / 5";
        cout << "\n\tVIT - " << VIT << " / 5";
        cout << "\n\tSTR - " << STR << " / 5";
        cout << "\n\tMGI - " << MGI << " / 5";
        cout << "\n\tDEF - " << DEF << " / 5";
        
        OPT = menu("Skill Menu", "WIS Up", "VIT Up", "STR Up", "MGI Up", "DEF Up", "Quit");
        
        cls();
        
        switch (OPT)
        {
            case 1:
                WIS++;
                cout << "\n\tWIS++";
                break;
            case 2:
                VIT++;
                cout << "\n\tVIT++";
                break;
            case 3:
                STR++;
                cout << "\n\tSTR++";
                break;
            case 4:
                MGI++;
                cout << "\n\tMGI++";
                break;
            case 5:
                DEF++;
                cout << "\n\tDEF++";
                break;
        }
    }
};

