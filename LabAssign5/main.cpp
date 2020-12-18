
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include <math.h>
#include <iomanip>
#include <fstream>
#include <sstream>
//#include <conio.h>


using namespace std;


class record
{
    private:
    
    string ID;
    string LAST;
    string FIRST;
    float GPA;
    int CLASS;

    public:
    
    ///sSETALL
    ///iSETID
    ///lSETLAST
    ///fSETFIRST
    ///gSETGPA
    ///cSETCLASS
    ///dDISPLAY
    ///record
    
    void rADDREC ()
    {
        record STUDENT;
        cout << "\n\tEnter ID : ";
        getline (cin, ID);
        
        cout << "\n\n\tEnter Last Name : ";
        getline (cin, LAST);
        
        cout << "\n\n\tEnter First Name : ";
        getline (cin, FIRST);
        
        cout << "\n\n\tEnter GPA : ";
        cin >> GPA;
        
        cout << "\n\n\tEnter Number Of Classes : ";
        cin >> CLASS;
    }
    
    void aSETALL (string aID, string aLAST, string aFIRST, float aGPA, int aCLASS)///sSETALL
    {
        ID = aID;
        LAST = aLAST;
        FIRST = aFIRST;
        GPA = aGPA;
        CLASS = aCLASS;
    }
    
    void iSETID (string iID)///iSETID
    {
        ID = iID;
    }
    
    void lSETLAST (string lLAST)///lSETLAST
    {
        LAST = lLAST;
    }

    void fSETFIRST (string fFIRST)///fSETFIRST
    {
        FIRST = fFIRST;
    }
    
    void gSETGPA (float gGPA)///gSETGPA
    {
        GPA = gGPA;
    }
    
    void cSETCLASS (int cCLASS)///cSETCLASS
    {
        CLASS = cCLASS;
    }
    
    void dDISPLAY ()///dDISPLAY
    {
        cout << "\n\n\tID : " << ID;
        cout << "\n\t" << LAST << ", " << FIRST;
        cout << "\n\tGPA Is " << GPA <<", Enrolled In " << CLASS << " Classes";
    }
    
    record ()
    {
        ID = "N/A";
        LAST = "N/A";
        FIRST = "N/A";
        GPA = -1;
        CLASS = -1;
    }
    
};

void aANY ();
void cCLS ();
void iIO ();

int main ()
{
    record STUDENT1, STUDENT2, STUDENT3, STUDENT4, STUDENT5, STUDENT6;
    int OPT = 0, COUNT=0;
    
    while (OPT != 3)
    {
    //Initial
        STUDENT1.aSETALL("AF101", "Punch Man", "One", 1.0, 1);
        STUDENT2.aSETALL("GC210", "Goku", "Son", 2.5, 2);
        STUDENT3.aSETALL("BC324", "Sanchez", "Rick", 3.4, 3);
        STUDENT4.aSETALL("CS382", "Da OG CodeMaster", "Des", 4.0, 5);

      

        cout << "\n\tMENU";

        cout << "\n\n\t1 - Display Students";
        cout << "\n\t2 - Add A Student (" << 2 - COUNT << " Slot(s) Availiabe)" ;
        cout << "\n\t3 - Quit";

        cout << "\n\n\tOPT : ";
        cin >> OPT;
        cin.clear();
        cin.ignore();
        cCLS();

        switch  (OPT)
        {
            case 1:
            {
                cout << "\n\tDisplay Students";
                
                STUDENT1.dDISPLAY();
                STUDENT2.dDISPLAY();
                STUDENT3.dDISPLAY();
                STUDENT4.dDISPLAY();
                if (COUNT == 1)
                {
                    STUDENT5.dDISPLAY();
                }
                else if (COUNT == 2)
                {
                    STUDENT5.dDISPLAY();
                    STUDENT6.dDISPLAY();
                }
    
                aANY();
                cCLS();
                break;
            }
            case 2:
            {
                if (COUNT == 0)
                {
                    STUDENT5.rADDREC();
                    COUNT++;
                }
                else if (COUNT == 1)
                {
                    STUDENT6.rADDREC();
                    COUNT++;
                }
                else
                {
                    cout << "\n\tNo More Empty Variables Left";
                    aANY();
                }
                
                cCLS();
                break;
            }
        }
    }
}

void aANY ()
{
    cout << "\n\n\tPress Enter To Continue";
    cin.get();
}

void cCLS ()
{
    system ("clear");
}

void iIO ()
{
    cin.clear();
    cin.ignore();
}


