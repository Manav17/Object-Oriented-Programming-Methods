
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <unistd.h>
#include <iomanip>
#include <fstream>
#include <sstream>
//#include <conio.h>


#include "employee.h"


using namespace std;


bool compareid (const employee &TEMP1, const employee &TEMP2)
{
    return TEMP1.ID < TEMP2.ID;
}

bool comparelast (const employee &TEMP1, const employee &TEMP2)
{
    return TEMP1.LAST < TEMP2.LAST;
}

bool comparefirst (const employee &TEMP1, const employee &TEMP2)
{
    return TEMP1.FIRST < TEMP2.FIRST;
}

bool comparehrs (const employee &TEMP1, const employee &TEMP2)
{
    return TEMP1.HRS < TEMP2.HRS;
}

bool comparepay (const employee &TEMP1, const employee &TEMP2)
{
    return TEMP1.PAY < TEMP2.PAY;
}

bool comparetrate (const employee &TEMP1, const employee &TEMP2)
{
    return TEMP1.TRATE < TEMP2.TRATE;
}

bool comparedependents (const employee &TEMP1, const employee &TEMP2)
{
    return TEMP1.DEPENDENTS < TEMP2.DEPENDENTS;
}


int main ()
{
    int OPT = 0, OPTB = 0, OPTC = 0, FOUND = 0;
    bool SKIP = false, NINE = false;
    
    
    string TEMPSTR;
    float TEMPFLT;
    int TEMPINT, INDEX = 0;
    
    store PERSONNEL;
    vector<employee> TEMP;
    
    cout << left;
    cout.precision(2);
    cout.setf(ios::fixed, ios::floatfield);
    cout.setf(ios::showpoint);
    
    PERSONNEL.read();
    
    while (OPT != 6)
    {
        OPTB = 0;
        OPTC = 0;
        FOUND = 0;
        
        if (SKIP)
        {
            SKIP = false;
        }
        else
        {
            OPT = menu("Personnel Main Menu", "Display", "Add A Record", "Find A Record", "Delete A Record", "Sort Records", "Quit");
            cls();
        }
        
        switch (OPT)
        {
            case 1:
            {
                cout << "\n\tDisplaying All Records";
                PERSONNEL.displayall();
                any();
                cls();
                break;
            }
            
            case 2:
            {
                while (OPTB != 4 and OPT != 3)
                {
                    OPTB = menu("Add A Record", "To Front", "To Back", "Via Find", "Back To Main");
                    cls();
                    
                    switch (OPTB)
                    {
                        case 1:
                        {
                            cout << "\n\tAdd To Front\n";
                            PERSONNEL.add(0);
                            cls();
                            break;
                        }
                            
                        case 2:
                        {
                            cout << "\n\tAdd To Back\n";
                            PERSONNEL.add();
                            cls();
                            break;
                        }
                        
                        case 3:
                        {
                            SKIP = true;
                            OPT = 3;
                            break;
                        }
                    }
                }
                break;
            }
             
            case 4:
            case 3:
            {
                while (OPTB < 1 or OPTB > 8)
                {
                    OPTB = menu("Find Menu", "Via ID", "Via Last Name", "Via First Name", "Via Hours", "Via Pay", "Via Tax Rate", "Via Number Of Dependents", "Back to main");
                    cls();
                    switch (OPTB)
                    {
                        case 1:
                        {
                            TEMPSTR = scin("Search For ID");
                            FOUND = PERSONNEL.searchid(TEMPSTR);
                            break;
                        }
                        case 2:
                        {
                            TEMPSTR = scin("Search For Last Name");
                            FOUND = PERSONNEL.searchlast(TEMPSTR);
                            break;
                        }
                        case 3:
                        {
                            TEMPSTR = scin("Search For First Name");
                            FOUND = PERSONNEL.searchfirst(TEMPSTR);
                            break;
                        }
                        case 4:
                        {
                            TEMPFLT = fcin("Search For Hours");
                            FOUND = PERSONNEL.searchhrs(TEMPFLT);
                            break;
                        }
                        case 5:
                        {
                            TEMPFLT = fcin("Search For Pay");
                            FOUND = PERSONNEL.searchpay(TEMPFLT);
                            break;
                        }
                        case 6:
                        {
                            TEMPFLT = pcin("Search For Tax Rate");
                            FOUND = PERSONNEL.searchtrate(TEMPFLT);
                            break;
                        }
                        case 7:
                        {
                            TEMPINT = icin("Search For Number Of Dependents");
                            FOUND = PERSONNEL.searchdependents(TEMPINT);
                            break;
                        }
                    }
                }
                if (OPTB > 0 and OPTB < 8)
                {
                    if (FOUND == 0)
                    {
                        OPTB = 0;
                        
                        while (OPTB < 1 or OPTB > 2)
                        {
                            OPTB = menu("No Matches Were Found", "Try Find Again", "Back To Main");
                            
                            if (OPTB == 1)
                            {
                                SKIP = true;
                                OPT = 3;
                            }
                            cls();
                        }
                    }
                    else if (FOUND == 1)
                    {
                        SKIP = true;
                        OPT = 9;
                        NINE = true;
                        INDEX = PERSONNEL.TEMPINT[0];
                        cls();
                    }
                    else
                    {
                        cout << "\n\tMultiple Matches Found";
                        int CNT = 0;
                        
                        do
                        {
                            if (CNT > 0)
                            {
                                cout << "\n\tPick NUM Next To ID ( 1 or 2) : ";
                            }
                            else
                            {
                                cout << "\n\n\tPick One According To Its NUM : ";
                            }
                            INDEX = icin("NUM");
                            CNT++;
                        }
                        while (INDEX < 0 or INDEX > FOUND);
                        
                        SKIP = true;
                        OPT = 9;
                        NINE = true;
                        INDEX = PERSONNEL.TEMPINT[INDEX];
                        cls();
                    }
                }
                break;
            }
            
            case 5:
            {
                do
                {
                    OPTB = menu("Sort Menu", "By ID", "By Last Name", "By First Name", "By Hours", "By Pay", "By Tax Rate", "By Number Of Dependents", "Back To Main Menu");
                }
                while (OPTB < 1 or OPTB > 8);
                
                TEMP = PERSONNEL.set(TEMP);
                
                
                cls();
                switch (OPTB)
                {
                    case 1:
                    {
                        sort(TEMP.begin(), TEMP.end(), compareid);
                        break;
                    }
                    case 2:
                    {
                        sort(TEMP.begin(), TEMP.end(), comparelast);
                        break;
                    }
                    case 3:
                    {
                        sort(TEMP.begin(), TEMP.end(), comparefirst);
                        break;
                    }
                    case 4:
                    {
                        sort(TEMP.begin(), TEMP.end(), comparehrs);
                        break;
                    }
                    case 5:
                    {
                        sort(TEMP.begin(), TEMP.end(), comparepay);
                        break;
                    }
                    case 6:
                    {
                        sort(TEMP.begin(), TEMP.end(), comparetrate);
                        break;
                    }
                    case 7:
                    {
                        sort(TEMP.begin(), TEMP.end(), comparedependents);
                        break;
                    }
                }
                
                do
                {
                    OPTC = menu("Order", "Aescending", "Descending");
                    cls();
                }
                while(OPTC < 1 or OPTC > 2);
                
                if (OPTC == 2)
                {
                    reverse(TEMP.begin(), TEMP.end());
                }
                
                do
                {
                    PERSONNEL.displayall(TEMP);
                    OPTC = menu ("", "Save", "Return To Main");
                }
                while(OPTC < 1 or OPTC > 2);
                
                if (OPTC == 1)
                {
                    PERSONNEL.save(TEMP);
                }
                break;
            }
                
            case 9:
            {
                if (NINE)
                {
                    NINE = false;
                    PERSONNEL.display(INDEX);
                    do
                    {
                    OPTB = menu("\n\tRecord Menu", "Delete", "Edit", "Back To Main");
                    cls();
                    }
                    while (OPTB < 1 and OPTB > 3);
                    
                    if (OPTB == 1)
                    {
                        PERSONNEL.remove(INDEX);
                        cout << "\n\tRecord Has Been Deleted";
                        any();
                        cls();
                        break;
                    }
                    
                    if (OPTB == 2)
                    {
                        while (OPTC != 9)
                        {
                            PERSONNEL.display(INDEX);
                            OPTC = menu("\n\tEdit Menu", "ID", "Last Name", "First Name", "Hours", "Pay", "Tax Rate", "Number Of Dependents", "All", "Back To Main Menu");
                            cls();
                            
                            switch (OPTC)
                            {
                                case 8:
                                case 1:
                                {
                                    PERSONNEL.editid(INDEX);
                                    if (OPTC != 8)
                                        break;
                                }
                                case 2:
                                {
                                    PERSONNEL.editlast(INDEX);
                                    if (OPTC != 8)
                                        break;
                                }
                                case 3:
                                {
                                    PERSONNEL.editfirst(INDEX);
                                    if (OPTC != 8)
                                        break;
                                }
                                case 4:
                                {
                                    PERSONNEL.edithrs(INDEX);
                                    if (OPTC != 8)
                                        break;
                                }
                                case 5:
                                {
                                    PERSONNEL.editpay(INDEX);
                                    if (OPTC != 8)
                                        break;
                                }
                                case 6:
                                {
                                    PERSONNEL.edittrate(INDEX);
                                    if (OPTC != 8)
                                        break;
                                }
                                case 7:
                                {
                                    PERSONNEL.editdependents(INDEX);
                                    break;
                                }
                            }
                        }
                    }
                }
                break;
            }
        }
    }
}

