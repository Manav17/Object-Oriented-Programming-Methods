
//#include <stdlib.h>
//#include <time.h>
//#include <iostream>
//#include <math.h>
//#include <iomanip>
//#include <fstream>
//#include <sstream>
//#include <conio.h>


using namespace std;


///Basic Prototypes
void any ();
void cicc ();
void cls ();


///Menu Prototypes
int menu (string, string, string);
int menu (string, string, string, string);
int menu (string, string, string, string, string);
int menu (string, string, string, string, string, string);
int menu (string, string, string, string, string, string, string);
int menu (string, string, string, string, string, string, string, string);
int menu (string, string, string, string, string, string, string, string, string);

///reswitch Prototypes
string reswitch (int, string, string, string);
string reswitch (int, string, string, string, string, string);




void any ()
{
    cout << "\n\n\tPress Enter To Continue";
    cin.get();
}

void cicc ()
{
    cin.clear();
    cin.ignore();
}

void cls ()
{
    system ("clear");
}


///Menu Definition************************************************************************************************
int menu (string TITLE, string OPT1, string QUIT)
{
    int OPT;
    
    cout << "\n\t" << TITLE;
    
    cout << "\n\n\t1 - " << OPT1;
    cout << "\n\t2 - " << QUIT;
    
    cout << "\n\n\tOPT : ";
    cin >> OPT;
    cicc();
    
    return OPT;
}

int menu (string TITLE, string OPT1, string OPT2, string QUIT)
{
    int OPT;
    
    cout << "\n\t" << TITLE;
    
    cout << "\n\n\t1 - " << OPT1;
    cout << "\n\t2 - " << OPT2;
    cout << "\n\t3 - " << QUIT;
    
    cout << "\n\n\tOPT : ";
    cin >> OPT;
    cicc();
    
    return OPT;
}

int menu (string TITLE, string OPT1, string OPT2, string OPT3, string QUIT)
{
    int OPT;
    
    cout << "\n\t" << TITLE;
    
    cout << "\n\n\t1 - " << OPT1;
    cout << "\n\t2 - " << OPT2;
    cout << "\n\t3 - " << OPT3;
    cout << "\n\t4 - " << QUIT;
    
    cout << "\n\n\tOPT : ";
    cin >> OPT;
    cicc();
    
    return OPT;
}

int menu (string TITLE, string OPT1, string OPT2, string OPT3, string OPT4, string QUIT)
{
    int OPT;
    
    cout << "\n\t" << TITLE;
    
    cout << "\n\n\t1 - " << OPT1;
    cout << "\n\t2 - " << OPT2;
    cout << "\n\t3 - " << OPT3;
    cout << "\n\t4 - " << OPT4;
    cout << "\n\t5 - " << QUIT;
    
    cout << "\n\n\tOPT : ";
    cin >> OPT;
    cicc();
    
    return OPT;
}

int menu (string TITLE, string OPT1, string OPT2, string OPT3, string OPT4, string OPT5, string QUIT)
{
    int OPT;
    
    cout << "\n\t" << TITLE;
    
    cout << "\n\n\t1 - " << OPT1;
    cout << "\n\t2 - " << OPT2;
    cout << "\n\t3 - " << OPT3;
    cout << "\n\t4 - " << OPT4;
    cout << "\n\t5 - " << OPT5;
    cout << "\n\t6 - " << QUIT;
    
    cout << "\n\n\tOPT : ";
    cin >> OPT;
    cicc();
    
    return OPT;
}

int menu (string TITLE, string OPT1, string OPT2, string OPT3, string OPT4, string OPT5, string OPT6, string QUIT)
{
    int OPT;
    
    cout << "\n\t" << TITLE;
    
    cout << "\n\n\t1 - " << OPT1;
    cout << "\n\t2 - " << OPT2;
    cout << "\n\t3 - " << OPT3;
    cout << "\n\t4 - " << OPT4;
    cout << "\n\t5 - " << OPT5;
    cout << "\n\t6 - " << OPT6;
    cout << "\n\t7 - " << QUIT;
    
    cout << "\n\n\tOPT : ";
    cin >> OPT;
    cicc();
    
    return OPT;
}

int menu (string TITLE, string OPT1, string OPT2, string OPT3, string OPT4, string OPT5, string OPT6, string OPT7, string QUIT)
{
    int OPT;
    
    cout << "\n\t" << TITLE;
    
    cout << "\n\n\t1 - " << OPT1;
    cout << "\n\t2 - " << OPT2;
    cout << "\n\t3 - " << OPT3;
    cout << "\n\t4 - " << OPT4;
    cout << "\n\t5 - " << OPT5;
    cout << "\n\t6 - " << OPT6;
    cout << "\n\t7 - " << OPT7;
    cout << "\n\t8 - " << QUIT;
    
    cout << "\n\n\tOPT : ";
    cin >> OPT;
    cicc();
    
    return OPT;
}

///Reswitch Definitions ******************************************************************************************
string reswitch (int OPT, string R1, string R2, string R3)
{
    switch (OPT)
    {
        case 1:
        {
            return R1;
            break;
        }
        case 2:
        {
            return R2;
            break;
        }
        case 3:
        {
            return R3;
            break;
        }
        default:
        {
            return 0;
            break;
        }
    }
    
}

string reswitch (int OPT, string R1, string R2, string R3, string R4, string R5)
{
    switch (OPT)
    {
        case 1:
        {
            return R1;
            break;
        }
        case 2:
        {
            return R2;
            break;
        }
        case 3:
        {
            return R3;
            break;
        }
        case 4:
        {
            return R4;
            break;
        }
        case 5:
        {
            return R5;
            break;
        }
        default:
        {
            return 0;
            break;
        }
    }
}
