
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include <math.h>
#include <iomanip>
#include <fstream>
#include <sstream>
//#include <conio.h>


using namespace std;

class student
{
private:
    string ID;
    string LAST;
    string FIRST;
    float GPA;
    float CLASS;
    
public:
    void aDISPLAY ();
    
    void bSETALL (string, string, string, float, float);
    void cSETID (string);
    void dSETLAST (string);
    void eSETFIRST (string);
    void fSETGPA (float);
    void gSETCLASS (float);
    
    string hGETID ();
    string iGETLAST ();
    string jGETFIRST ();
    float kGETGPA ();
    float lGETCLASS ();
    
    student ();
};

int main()
{
    student A;
    A.aDISPLAY();
}

///void aDISPLAY ();

///void bSETALL (string, string, string, float, float);
///void cSETID (string);
///void dSETLAST (string);
///void eSETFIRST (string);
///void fSETGPA (float);
///void gSETCLASS (float);

///string hGETID ();
///string iGETLAST ();
///string jGETFIRST ();
///float kGETGPA ();
///float lGETCLASS ();

///student ();

void student::aDISPLAY ()
{
    cout << "\n\n\tID : " << ID;
    cout << "\n\t" << LAST << ", " << FIRST;
    cout << "\n\tGPA Is " << GPA;
    cout << "\n\tEnrolled In " << CLASS << " Classes";
}

void student::bSETALL(string bID, string bLAST, string bFIRST, float bGPA, float bCLASS)
{
    ID = bID;
    LAST = bLAST;
    FIRST = bFIRST;
    GPA = bGPA;
    CLASS = bCLASS;
}

void student::cSETID(string cID)
{
    ID = cID;
}

void student::dSETLAST(string dLAST)
{
    LAST = dLAST;
}

void student::eSETFIRST(string eFIRST)
{
    FIRST = eFIRST;
}

void student::fSETGPA(float fGPA)
{
    GPA = fGPA;
}

void student::gSETCLASS(float gCLASS)
{
    CLASS = gCLASS;
}

string student::hGETID()
{
    return ID;
}

string student::iGETLAST()
{
    return LAST;
}

string student::jGETFIRST()
{
    return FIRST;
}

float student::kGETGPA()
{
    return GPA;
}

float student::lGETCLASS()
{
    return CLASS;
}

student::student()
{
    ID.clear();
    LAST.clear();
    FIRST.clear();
    GPA = 0;
    CLASS = 0;
}
