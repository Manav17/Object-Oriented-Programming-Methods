
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

//Input Prototypes
string scin (string);
int icin (string);
float fcin (string);

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


void any ()
{
    cout << "\n\n\tPress Enter To Continue";
    system("pause");
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




string scin (string aSTR)
{
    string aTEMP;
    
    cout << "\t" << aSTR << " : ";
    cin >> aTEMP;

    return aTEMP;
}

int icin (string bSTR)
{
    int bTEMP;
    
    cout << "\t" << bSTR << " : ";
    cin >> bTEMP;
    
    return bTEMP;
}

float fcin (string cSTR)
{
    float cTEMP;
    
    cout << "\t" << cSTR << " : ";
    cin >> cTEMP;
    
    return cTEMP;
}




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
    cicc();
    
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
    cicc();
    
    return OPT;
}

