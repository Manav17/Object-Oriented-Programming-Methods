
//#include <stdlib.h>
//#include <time.h>
//#include <iostream>
//#include <math.h>
//#include <iomanip>
//#include <fstream>
//#include <sstream>
//#include <unistd.h>//For Sleep Functions
//#include <conio.h>

#include "Meep.h"

using namespace std;

struct Score
{
    string N;
    long int S;
};

class Character
{
private:
    string NAME;
    long int HP;
    long int MAX_HP;
    long int MAX_HP_LVL;
    long int HEAL_LVL;
    long int MAGIC;
    long int SWAG;
    long int COUNT;
    float DIFFICULTY;
    char SPELL;
    Score HIGH [10];
    
public:
    Character ()
    {
        HP = 10;
        MAX_HP = 10;
        HEAL_LVL = 1;
        MAX_HP_LVL = 1;
        MAGIC = 1;
        SWAG = 1;
        COUNT = 1;
        DIFFICULTY = .8;
    }
    
    long int getHP ();
    void title ();
    void rules ();
    void display ();
    void dmg ();
    void hp ();
    void input ();
    void spell ();
    void gameover ();
    void highscore ();
    
};


long int Character::getHP()
{
    return HP;
}

void Character::title()
{
    cout << "\n\tTry Not To Die";
    NAME = scin("Name");
}

void Character::rules()
{
    cout << "\n\tThe Rules";
    cout << "\n\tYou Have Been Posioned By The Colorful Frog Gang";
    cout << "\n\tYou Didn't Pay Attention In Magic School";
    cout << "\n\tNow You Get The Crash Course";
    cout << "\n\n\tF - Heal";
    cout << "\n\tJ - Hp Up";
    cout << "\n\tD - Heal Lvl Up";
    cout << "\n\tK - HP Up LvL Up";
    cout << "\n\tG - Magic Lvl Up";
    cout << "\n\tQ - End Game";
}

void Character::display()
{
    cout << "\n\t" << NAME;
    cout << "\n\n\t" << HEAL_LVL << " Heal Lvl";
    cout << "\n\t" << MAX_HP_LVL << " HP Up Lvl";
    cout << "\n\t" << MAGIC << " Magic Lvl";
}

void Character::dmg()
{
    long int DMG;
    long int CNT;
    int OPT;
    CNT = COUNT * DIFFICULTY;
    if (CNT == 0)
    {
        CNT = 1;
    }
    DMG = rand() % CNT;
    HP = HP - DMG;
    
   
    OPT = rand() % 10;
    
    switch (OPT)
    {
        case 1:
        {
            cout << "\n\n\tOof... -" << DMG << " HP";
            break;
        }
        case 2:
        {
            cout << "\n\n\tWhat Is This Trickerey?!? -" << DMG << " HP";
            break;
        }
        case 3:
        {
            cout << "\n\n\tYour Gonna Die Soon... -" << DMG << " HP";
            break;
        }
        case 4:
        {
            cout << "\n\n\tMight As Well Quit Now... -" << DMG << " HP";
            break;
        }
        case 5:
        {
            cout << "\n\n\tAn Ambulam Is On The Way... -"  << DMG << " HP";
            break;
        }
        case 6:
        {
            cout << "\n\n\tPa Pa Pa Pa Stayin Alivvvveeee... -" << DMG << " HP";
            break;
        }
        case 7:
        {
            cout << "\n\n\tKeep Going Your Almost Dead... -" << DMG << " HP";
            break;
        }
        case 8:
        {
            cout << "\n\n\tThe Frog Gang Is Near... -" << DMG << " HP";
            break;
        }
        case 9:
        {
            cout << "\n\n\tThats It Slowly... -" << DMG << " HP";
            break;
        }
        default:
        {
            cout << "\n\n\t-" << DMG << " HP";
            break;
        }
    }
    COUNT++;
}

void Character::hp()
{
    if (HP > MAX_HP)
    {
        HP = MAX_HP;
    }
    cout << "\n\n\t" << HP << " / " << MAX_HP << " HP";
}

void Character::input()
{
    SPELL = ccin("Spell");
}

void Character::spell ()
{
    switch (SPELL)
    {
        case 'F':
        case 'f':
        {
            cout << "\n\tHP  + " << HEAL_LVL;
            HP = HP + HEAL_LVL;
            break;
        }
        case 'J':
        case 'j':
        {
            cout << "\n\tMax HP + " << MAX_HP_LVL;
            MAX_HP = MAX_HP + MAX_HP_LVL;
            break;
        }
        case 'D':
        case 'd':
        {
            cout << "\n\tHeal Lvl + " << MAGIC;
            HEAL_LVL = HEAL_LVL + MAGIC;
            break;
        }
        case 'K':
        case 'k':
        {
            cout << "\n\tMax HP Up + " << MAGIC;
            MAX_HP_LVL = MAX_HP_LVL + MAGIC;
            break;
        }
        case 'G':
        case 'g':
        {
            cout << "\n\tMagic + " << SWAG;
            MAGIC = MAGIC + SWAG;
            break;
        }
        case 'H':
        case 'h':
        {
            SWAG++;
            break;
        }
        case 'Q':
        case 'q':
        {
            HP = -1;
        }
    }
    cout << "\n\t********************************************************";
}

void Character::gameover ()
{
    cout << "\n\tGame Over";
    cout << "\n\tScore is " << COUNT;
    any();
}

void Character::highscore ()
{
    ofstream dout;
    ifstream din;
    int CNT = 1;
    Score TEMP;
    
    din.open("/Users/manavjotsingh/Documents/CSCI/CSCI 15/Posion/Posion/Player.dat", ios::in);
    
    din >> HIGH[0].N >> HIGH[0].S;
    
    while (!din.eof() or CNT > 9)
    {
        din >> HIGH[CNT].N >> HIGH[CNT].S;
        CNT++;
    }
    din.close();
    
    HIGH[CNT].N = NAME;
    HIGH[CNT].S = COUNT;
    CNT++;
    
    for (int A = 0; A < CNT - 1; A++)
    {
        if (HIGH[A].S < HIGH[A+1].S)
        {
            TEMP = HIGH[A];
            HIGH[A] = HIGH[A+1];
            HIGH[A+1] = TEMP;
        }
    }

    cout << "\n\t Highscores\n";
    dout.open("/Users/manavjotsingh/Documents/CSCI/CSCI 15/Posion/Posion/Player.dat", ios::out);
    
    for (int B = 0; B < CNT; B++)
    {
        cout << "\n\t" << B + 1 << ". " << HIGH[B].N << " " << HIGH[B].S;
        dout << HIGH[B].N << " " << HIGH[B].S << endl;
    }
    dout.close();
}
