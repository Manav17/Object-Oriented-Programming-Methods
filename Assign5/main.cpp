
//#include <stdlib.h>
//#include <time.h>
#include <iostream>
//#include <math.h>
//#include <iomanip>
#include <fstream>
#include <sstream>
//#include <conio.h>

#include "student.h"
#include "meep.h"

using namespace std;

///Functions Of Class student

//void DISPLAY ();

//void SETALL (string, string, string, float, float);
//void SETID (string);
//void SETLAST (string);
//void SETFIRST (string);
//void SETGPA (float);
//void SETCLASS (float);

//string GETID ();
//string GETLAST ();
//string GETFIRST ();
//float GETGPA ();
//float GETCLASS ();

//student ();

int READ (string, student []);
void WRITE (string cFILE, student cREC[], int cSIZ);
void CHANGE (string);



int main()
{
    int ARY_SIZ = 20, OPT = 0, SIZE = 0, F_IND = 0, E_OPT = 0;
    stringstream SS;
    string TEMP_STR;
    string ID_T, LAST_T, FIRST_T;
    float GPA_T;
    int CLASS_T;
    student REC [ARY_SIZ];
    
  
///Read
    string FILE = "/Users/manavjotsingh/Documents/CSCI/CSCI 15/Assign5/Assign5/Students.dat.txt";
    SIZE = READ(FILE, REC);
    while (OPT != 5)
    {
///Intializations
        E_OPT = 0;
///Menu
        SS << "Add New Record (" << ARY_SIZ - SIZE << " Slots Avaliable)";
        getline(SS, TEMP_STR);
        
        OPT = menu("Main Menu", "Display All", TEMP_STR, "Find Record Via Index", "Edit Existing Record", "Quit");
        
        cls();
///Options
        switch (OPT)
        {
                
            case 1:
            {
                for (int A = 0; A < SIZE; A++)
                {
                    REC[A].DISPLAY();
                }
                any();
                cls();
                break;
            }
            case 2:
            {
                if (SIZE == ARY_SIZ)
                {
                    cout << "\n\tCannot Add A Record, No More Space In Array";
                }
                else
                {
                    cout << "\n\tAdd A Record";
                    
                    cout << "\n\n\tEnter Student ID : ";
                    cin >> ID_T;
                    cicc();
                    
                    cout << "\n\tEnter Last Name : ";
                    cin >> LAST_T;
                    cicc();
                    
                    cout << "\n\tEnter First Name : ";
                    cin >> FIRST_T;
                    cicc();
                    
                    cout << "\n\tEnter GPA : ";
                    cin >> GPA_T;
                    cicc();
                    
                    cout << "\n\tEnter Number Of Classes Taken : ";
                    cin >> CLASS_T;
                    cicc();
                    
                    REC[SIZE].SETALL(ID_T, LAST_T, FIRST_T, GPA_T, CLASS_T);
                    SIZE++;
                    
                    cout << "\n\tRecord Has Been Added";
                }
                any();
                cls();
                break;
            }
            
            case 3:
            {
                cout << "\n\tFind Via Index";
                cout << "\n\n\tEnter Index # : ";
                cin >> F_IND;
                cicc();
                
                if ((F_IND < SIZE) and (F_IND >= 0))
                {
                    cout << "\n\tRecord Found";
                    
                    REC[F_IND].DISPLAY();
                }
                else
                {
                    cout << "\n\tRecord Was Not Found";
                }
                any();
                cls();
                break;
            }
            case 4:
            {
                cout << "\n\n\tEnter Index # : ";
                cin >> F_IND;
                cicc();
                cls();
                
                if ((F_IND < SIZE) and (F_IND >= 0))
                {
                    while (E_OPT != 6)
                    {
                        REC[F_IND].DISPLAY();
                        E_OPT = menu("\n\tEdit Menu", "Change ID", "Change Last Name", "Edit First Name", "Edit GPA", "Edit Number Of Classes", "Return To Main");
                        cls();
                        switch (E_OPT)
                        {
                            case 1:
                            {
                                CHANGE("ID");
                                cin >> ID_T;
                                cicc();
                                REC[F_IND].SETID(ID_T);
                                cls();
                                break;
                            }
                            case 2:
                            {
                                CHANGE("Last Name");
                                cin >> LAST_T;
                                cicc();
                                REC[F_IND].SETLAST(LAST_T);
                                cls();
                                break;
                            }
                            case 3:
                            {
                                CHANGE("First Name");
                                cin >> FIRST_T;
                                cicc();
                                REC[F_IND].SETFIRST(FIRST_T);
                                cls();
                                break;
                            }
                            case 4:
                            {
                                CHANGE("GPA");
                                cin >> GPA_T;
                                cicc();
                                REC[F_IND].SETGPA(GPA_T);
                                cls();
                                break;
                            }
                            case 5:
                            {
                                CHANGE("Number Of Classes");
                                cin >> CLASS_T;
                                cicc();
                                REC[F_IND].SETCLASS(CLASS_T);
                                cls();
                                break;
                            }
                        }
                    }
                }
                else
                {
                    cout << "\n\tRecord Was Not Found";
                    any();
                    cls();
                }
                break;
            }//Case 4
        }//Switch
    }//Main While
    WRITE (FILE, REC, SIZE);
}




int READ (string aFILE, student aREC[])
{
    int aCNT = 0;
    string aID, aLAST, aFIRST;
    float  aGPA, aCLASS;
    
    ifstream adin;
    adin.open(aFILE, ios::in);
    
    if (!adin)
    {
        cout << "\n\tWhoops, There Was An Error Opening The Data File";
        any();
        cls();
        exit(0);
    }
    
    adin >> aID >> aLAST >> aFIRST >> aGPA >> aCLASS;
    
    while(!adin.eof())
    {
        aREC[aCNT].SETALL(aID, aLAST, aFIRST, aGPA, aCLASS);
        adin >> aID >> aLAST >> aFIRST >> aGPA >> aCLASS;
        aCNT++;
    }
    
    adin.close();
    
    return aCNT;
}

void CHANGE (string bCNG)
{
    cout << "\n\tEnter New " << bCNG << " : ";
}

void WRITE (string cFILE, student cREC[], int cSIZ)
{
    ofstream cdout;
    
    cdout.open(cFILE, ios::out);
    
    for (int C = 0; C < cSIZ; C++)
    {
        cdout << cREC[C].GETID() << " " << cREC[C].GETLAST() << " " << cREC[C].GETFIRST() << " " << cREC[C].GETGPA() << " " << cREC[C].GETCLASS() << "\n";
    }
    
    cdout.close();
}
