
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
string upper (string);

//Input Prototypes
string scin (string);
int icin (string);
float fcin (string);
float pcin (string);

///Menu Prototypes
int menu (string, string, string);
int menu (string, string, string, string);
int menu (string, string, string, string, string);
int menu (string, string, string, string, string, string);
int menu (string, string, string, string, string, string, string);
int menu (string, string, string, string, string, string, string, string);
int menu (string, string, string, string, string, string, string, string, string);
int menu (string, string, string, string, string, string, string, string, string, string);
int menu (string, string, string, string, string, string, string, string, string, string, string);
int menu (string, string, string, string, string, string, string, string, string, string, string, string);


//Basic Functions
void any ()
{
    cout << "\n\n\tPress Enter To Continue";
    getchar();
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

string upper (string STR)
{
    long int SIZE;
    SIZE = STR.length();
    for(int A = 0; A < SIZE; A++)
    {
        STR[A] = toupper(STR[A]);
    }
    return STR;
}


//Input Functions
string scin (string aSTR)
{
    string aTEMP;
    
    cout << "\n\t" << aSTR << " : ";
    cin >> aTEMP;
    
    return aTEMP;
}

int icin (string bSTR)
{
    string str;
    int bTEMP;
    
    cout << "\n\t" << bSTR << " : ";
    cin >> str;

    bTEMP = stoi(str);
    return bTEMP;
}

float fcin (string cSTR)
{
    string str;
    float cTEMP;
    
    cout << "\n\t" << cSTR << " : ";
    cin >> str;
    cTEMP = stof(str);
    
    return cTEMP;
}

float pcin (string dSTR)
{
    string str;
    float dTEMP;
    
    cout << "\n\t" << dSTR << " : ";
    cin >> str;
    dTEMP = stof(str);
    
    if (dTEMP > 1)
    {
        dTEMP = dTEMP/100;
    }
    
    return dTEMP;
}


//Menu Functions
int menu (string TITLE, string OPT1, string QUIT)
{
    int OPT;
    
    cout << "\n\t" << TITLE;
    
    cout << "\n\n\t1 - " << OPT1;
    cout << "\n\t2 - " << QUIT;
    
    OPT = icin("\n\tOPT");
    
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
    
    return OPT;
}

int menu (string TITLE, string OPT1, string OPT2, string OPT3, string OPT4, string OPT5, string OPT6, string OPT7, string OPT8, string QUIT)
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
    cout << "\n\t8 - " << OPT8;
    cout << "\n\t9 - " << QUIT;
    
    cout << "\n\n\tOPT : ";
    cin >> OPT;
    
    return OPT;
}

int menu (string TITLE, string OPT1, string OPT2, string OPT3, string OPT4, string OPT5, string OPT6, string OPT7, string OPT8, string OPT9, string QUIT)
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
    cout << "\n\t8 - " << OPT8;
    cout << "\n\t9 - " << OPT9;
    cout << "\n\t10 - " << QUIT;
    
    cout << "\n\n\tOPT : ";
    cin >> OPT;
    
    return OPT;
}

int menu (string TITLE, string OPT1, string OPT2, string OPT3, string OPT4, string OPT5, string OPT6, string OPT7, string OPT8, string OPT9, string OPT10, string QUIT)
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
    cout << "\n\t8 - " << OPT8;
    cout << "\n\t9 - " << OPT9;
    cout << "\n\t10 - " << OPT10;
    cout << "\n\t11 - " << QUIT;
    
    cout << "\n\n\tOPT : ";
    cin >> OPT;
    
    return OPT;
}
