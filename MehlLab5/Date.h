
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include <math.h>
#include <iomanip>
#include <fstream>
#include <sstream>
//#include <conio.h>

using namespace std;

class Date
{
private:
    
    int YEAR;
    int MONTH;
    int DAY;
    
public:
    
    Date ();
    Date (int, int, int);
    
    int getYEAR ();
    int getMONTH ();
    int getDAY ();
    
    void setALL (int, int, int);
    void setYEAR (int);
    void setMONTH (int);
    void setDAY (int);
    
    void coutA ();
    void coutB ();
    void coutC ();
    
    int difference (Date, Date);
};

Date::Date ()
{
    YEAR = 1;
    MONTH = 1;
    DAY = 1;
}

Date::Date (int Y, int M, int D)
{
    bool LEAP = false;
    
    if ( Y < 1 )
    {
        YEAR = 1;
        Y = 1;
    }
    else
    {
        YEAR = Y;
    }

    if(Y%4 == 0 and (Y%100 != 0 or Y%400 == 0))
    {
        LEAP = true;
    }
    
    if(M > 12 or M < 1)
    {
        MONTH = 1;
    }
    else
    {
        MONTH = M;
    }
    
    switch (M)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
        {
            if (D > 31 or D < 1)
            {
                DAY = 1;
            }
            else
            {
                DAY = D;
            }
            break;
        }
        case 4:
        case 6:
        case 9:
        case 11:
        {
            if(D > 30 or D < 1)
            {
                DAY = 1;
            }
            else
            {
                DAY = D;
            }
            break;
        }
        case 2:
        {
            if (LEAP)
            {
                if(D > 29 or D < 1)
                {
                    DAY = 1;
                }
                else
                {
                    DAY = D;
                }
            }
            else
            {
                if (D > 28 or D < 1)
                {
                    DAY = 1;
                }
                else
                {
                    DAY = D;
                }
            }
        }
    }
}

void Date::setALL (int Y, int M, int D)
{
    bool LEAP = false;
    
    if ( Y < 1 )
    {
        YEAR = 1;
        Y = 1;
    }
    else
    {
    YEAR = Y;
    }
    
    if(Y%4 == 0 and (Y%100 != 0 or Y%400 == 0))
    {
        LEAP = true;
    }
    
    if(M > 12 or M < 1)
    {
        MONTH = 1;
    }
    else
    {
        MONTH = M;
    }
    
    switch (M)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
        {
            if (D > 31 or D < 1)
            {
                DAY = 1;
            }
            else
            {
                DAY = D;
            }
            break;
        }
        case 4:
        case 6:
        case 9:
        case 11:
        {
            if(D > 30 or D < 1)
            {
                DAY = 1;
            }
            else
            {
                DAY = D;
            }
            break;
        }
        case 2:
        {
            if (LEAP)
            {
                if(D > 29 or D < 1)
                {
                    DAY = 1;
                }
                else
                {
                    DAY = D;
                }
            }
            else
            {
                if (D > 28 or D < 1)
                {
                    DAY = 1;
                }
                else
                {
                    DAY = D;
                }
            }
        }
    }
}
void Date::setYEAR(int Y)
{
    YEAR = Y;
}

void Date::setMONTH(int M)
{
    MONTH = M;
}

void Date::setDAY(int D)
{
    DAY = D;
}

int Date::getYEAR()
{
    return YEAR;
}

int Date::getMONTH()
{
    return MONTH;
}

int Date::getDAY()
{
    return DAY;
}

void Date::coutA ()
{
    cout << "\n\t" << MONTH << "/" << DAY << "/" << YEAR;
}

void Date::coutB ()
{
    switch (MONTH)
    {
            
        case 1:
        {
            cout << "\n\tJanuary " << DAY << ", " << YEAR;
            break;
        }
        case 2:
        {
            cout << "\n\tFebruary " << DAY << ", " << YEAR;
            break;
        }
        case 3:
        {
            cout << "\n\tMarch " << DAY << ", " << YEAR;
            break;
        }
        case 4:
        {
            cout << "\n\tApril " << DAY << ", " << YEAR;
            break;
        }
        case 5:
        {
            cout << "\n\tMay " << DAY << ", " << YEAR;
            break;
        }
        case 6:
        {
            cout << "\n\tJune " << DAY << ", " << YEAR;
            break;
        }
        case 7:
        {
            cout << "\n\tJuly " << DAY << ", " << YEAR;
            break;
        }
        case 8:
        {
            cout << "\n\tAugust " << DAY << ", " << YEAR;
            break;
        }
        case 9:
        {
            cout << "\n\tSeptember " << DAY << ", " << YEAR;
            break;
        }
        case 10:
        {
            cout << "\n\tOctober " << DAY << ", " << YEAR;
            break;
        }
        case 11:
        {
            cout << "\n\tNovember " << DAY << ", " << YEAR;
            break;
        }
        case 12:
        {
            cout << "\n\tDecember " << DAY << ", " << YEAR;
            break;
        }
    }
}

void Date::coutC ()
{
    switch (MONTH)
    {
            
        case 1:
        {
            cout << "\n\t" << DAY << " January " << YEAR;
            break;
        }
        case 2:
        {
            cout << "\n\t" << DAY << " February  " << YEAR;
            break;
        }
        case 3:
        {
            cout << "\n\t" << DAY << " March " << YEAR;
            break;
        }
        case 4:
        {
            cout << "\n\t" << DAY << " April  " << YEAR;
            break;
        }
        case 5:
        {
            cout << "\n\t" << DAY << "May " << YEAR;
            break;
        }
        case 6:
        {
            cout << "\n\t" << DAY << " June " << YEAR;
            break;
        }
        case 7:
        {
            cout << "\n\t" << DAY << " July " << YEAR;
            break;
        }
        case 8:
        {
            cout << "\n\t" << DAY << " August  " << YEAR;
            break;
        }
        case 9:
        {
            cout << "\n\t" << DAY << " September  " << YEAR;
            break;
        }
        case 10:
        {
            cout << "\n\t" << DAY << " October " << YEAR;
            break;
        }
        case 11:
        {
            cout << "\n\t" << DAY << " November " << YEAR;
            break;
        }
        case 12:
        {
            cout << "\n\t" << DAY << " December " << YEAR;
            break;
        }
    }
}
int Date:: difference (Date D1, Date D2)
{
    bool LEAP;
    int CNT = 0;
    Date TEMP;
    
    if (D1.YEAR > D2.YEAR)
    {
        D1.YEAR = TEMP.YEAR;
        D1.YEAR = D2.YEAR;
        D2.YEAR = TEMP.YEAR;
        
        D1.MONTH = TEMP.MONTH;
        D1.MONTH = D1.MONTH;
        D2.MONTH = TEMP.MONTH;
        
        D1.DAY = TEMP.DAY;
        D1.DAY = D2.DAY;
        D2.DAY = TEMP.DAY;
    }
    else if (D1.MONTH > D2.YEAR)
    {
        D1.YEAR = TEMP.YEAR;
        D1.YEAR = D2.YEAR;
        D2.YEAR = TEMP.YEAR;
        
        D1.MONTH = TEMP.MONTH;
        D1.MONTH = D1.MONTH;
        D2.MONTH = TEMP.MONTH;
        
        D1.DAY = TEMP.DAY;
        D1.DAY = D2.DAY;
        D2.DAY = TEMP.DAY;

    }
    else if (D1.DAY > D2.DAY)
    {
        D1.YEAR = TEMP.YEAR;
        D1.YEAR = D2.YEAR;
        D2.YEAR = TEMP.YEAR;
        
        D1.MONTH = TEMP.MONTH;
        D1.MONTH = D1.MONTH;
        D2.MONTH = TEMP.MONTH;
        
        D1.DAY = TEMP.DAY;
        D1.DAY = D2.DAY;
        D2.DAY = TEMP.DAY;

    }
    else if (D1.YEAR == D2.YEAR and D1.MONTH == D2.YEAR and D1.DAY == D2.DAY)
    {
        return 0;
    }
    
    while(D1.DAY != 1)
    {
        cout << "1";
        if(D1.YEAR%4 == 0 and (D1.YEAR%100 != 0 or D1.YEAR%400 == 0))
        {
            LEAP = true;
        }
        else
        {
            LEAP = false;
        }
        
        switch(D1.MONTH)
        {
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
            {
                if (D1.DAY == 31)
                {
                    D1.DAY = 1;
                    D1.MONTH++;
                    CNT++;
                }
                else
                {
                    D1.DAY++;
                    CNT++;
                    {
                        break;
                    }
                }
            }
            case 4:
            case 6:
            case 9:
            case 11:
            {
                if(D1.DAY == 30)
                {
                    D1.DAY = 1;
                    D1.MONTH++;
                    CNT++;
                }
                else
                {
                    D1.DAY++;
                    CNT++;
                }
                break;
            }
            case 2:
            {
                if (LEAP)
                {
                    if(D1.DAY == 29)
                    {
                        D1.DAY = 1;
                        D1.MONTH++;
                        CNT++;
                    }
                    else
                    {
                        D1.DAY++;
                        CNT++;
                    }
                }
                else
                {
                    if (D1.DAY == 28)
                    {
                        D1.DAY = 1;
                        D1.MONTH++;
                        CNT++;
                    }
                    else
                    {
                        D1.DAY++;
                        CNT++;
                    }
                }
            }
        }
    }
    
    while (D1.MONTH != 1)
    {
        cout << "2";

        if(D1.YEAR%4 == 0 and (D1.YEAR%100 != 0 or D1.YEAR%400 == 0))
        {
            LEAP = true;
        }
        else
        {
            LEAP = false;
        }
        
        switch(D1.MONTH)
        {
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
            {
                if (D1.MONTH == 12)
                {
                    D1.YEAR++;
                    D1.MONTH = 1;
                    CNT = CNT + 31;
                }
                else
                {
                    D1.MONTH++;
                    CNT = CNT + 31;
                }
                break;
            }
            case 4:
            case 6:
            case 9:
            case 11:
            {
                D1.MONTH++;
                CNT = CNT + 30;
                break;
            }
            case 2:
            {
                if (LEAP)
                {
                    D1.MONTH++;
                    CNT = CNT + 29;
                }
                else
                {
                    D1.MONTH++;
                    CNT = CNT + 28;
                }
                break;
            }
        }
    }
    
    while (D1.YEAR != D2.YEAR)
    {
        cout << "3";

        if(D1.YEAR%4 == 0 and (D1.YEAR%100 != 0 or D1.YEAR%400 == 0))
        {
            LEAP = true;
        }
        else
        {
            LEAP = false;
        }
        
        if (LEAP)
        {
            CNT = CNT + 366;
            D1.YEAR++;
        }
        else
        {
            CNT = CNT + 365;
            D1.YEAR++;
        }
    }
    
    while (D1.MONTH != D2.MONTH)
    {
        cout << "2";
        
        if(D1.YEAR%4 == 0 and (D1.YEAR%100 != 0 or D1.YEAR%400 == 0))
        {
            LEAP = true;
        }
        else
        {
            LEAP = false;
        }
        
        switch(D1.MONTH)
        {
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
            {
                if (D1.MONTH == 12)
                {
                    D1.YEAR++;
                    D1.MONTH = 1;
                    CNT = CNT + 31;
                }
                else
                {
                    D1.MONTH++;
                    CNT = CNT + 31;
                }
                break;
            }
            case 4:
            case 6:
            case 9:
            case 11:
            {
                D1.MONTH++;
                CNT = CNT + 30;
                break;
            }
            case 2:
            {
                if (LEAP)
                {
                    D1.MONTH++;
                    CNT = CNT + 29;
                }
                else
                {
                    D1.MONTH++;
                    CNT = CNT + 28;
                }
                break;
            }
        }
    }
    
    while(D1.DAY != D2.DAY)
    {
        cout << "1";
        if(D1.YEAR%4 == 0 and (D1.YEAR%100 != 0 or D1.YEAR%400 == 0))
        {
            LEAP = true;
        }
        else
        {
            LEAP = false;
        }
        
        switch(D1.MONTH)
        {
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
            {
                if (D1.DAY == 31)
                {
                    D1.DAY = 1;
                    D1.MONTH++;
                    CNT++;
                }
                else
                {
                    D1.DAY++;
                    CNT++;
                    {
                        break;
                    }
                }
            }
            case 4:
            case 6:
            case 9:
            case 11:
            {
                if(D1.DAY == 30)
                {
                    D1.DAY = 1;
                    D1.MONTH++;
                    CNT++;
                }
                else
                {
                    D1.DAY++;
                    CNT++;
                }
                break;
            }
            case 2:
            {
                if (LEAP)
                {
                    if(D1.DAY == 29)
                    {
                        D1.DAY = 1;
                        D1.MONTH++;
                        CNT++;
                    }
                    else
                    {
                        D1.DAY++;
                        CNT++;
                    }
                }
                else
                {
                    if (D1.DAY == 28)
                    {
                        D1.DAY = 1;
                        D1.MONTH++;
                        CNT++;
                    }
                    else
                    {
                        D1.DAY++;
                        CNT++;
                    }
                }
            }
        }
    }
    
    return CNT;
}
