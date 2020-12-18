
//#include <stdlib.h>
//#include <time.h>
//#include <iostream>
//#include <math.h>
//#include <iomanip>
//#include <fstream>
//#include <sstream>
//#include <conio.h>
using namespace std;

class student
{
private:
    string ID;
    string LAST;
    string FIRST;
    float GPA;
    int CLASS;
    
public:
    student ();
    
    void DISPLAY ();
    
    void SETALL (string, string, string, float, int);
    void SETID (string);
    void SETLAST (string);
    void SETFIRST (string);
    void SETGPA (float);
    void SETCLASS (int);
    
    string GETID ();
    string GETLAST ();
    string GETFIRST ();
    float GETGPA ();
    int GETCLASS ();
};

student::student()
{
    ID = "n/a";
    LAST = "n/a";
    FIRST = "n/a";
    GPA = 0;
    CLASS = 0;
}



void student::DISPLAY ()
{
    cout << "\n\n\tID : " << ID;
    cout << "\n\t" << LAST << ", " << FIRST;
    cout << "\n\tGPA Is " << GPA;
    cout << "\n\tEnrolled In " << CLASS << " Classes";
}



void student::SETALL(string bID, string bLAST, string bFIRST, float bGPA, int bCLASS)
{
    ID = bID;
    LAST = bLAST;
    FIRST = bFIRST;
    GPA = bGPA;
    CLASS = bCLASS;
}

void student::SETID(string cID)
{
    ID = cID;
}

void student::SETLAST(string dLAST)
{
    LAST = dLAST;
}

void student::SETFIRST(string eFIRST)
{
    FIRST = eFIRST;
}

void student::SETGPA(float fGPA)
{
    GPA = fGPA;
}

void student::SETCLASS(int gCLASS)
{
    CLASS = gCLASS;
}



string student::GETID()
{
    return ID;
}

string student::GETLAST()
{
    return LAST;
}

string student::GETFIRST()
{
    return FIRST;
}

float student::GETGPA()
{
    return GPA;
}

int student::GETCLASS()
{
    return CLASS;
}

