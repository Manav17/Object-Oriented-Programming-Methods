
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include <math.h>
#include <iomanip>
#include <fstream>
#include <sstream>
//#include <conio.h>


using namespace std;


struct DATA
{
    string LNAME;
    string FNAME;
    float HRS;
    float PAY;
    float TAX;
};


//Prototype
void DISPLAY (DATA [], int);
void DISPLAY_ALL (DATA [], int);
void EDIT (DATA [], int);
void KEY ();
int MAIN_MENU ();
void SEARCH (DATA [], int);



int main ()
{
    int SIZE, OPT = 0;
    DATA REC[] = {"De Bosse", "Ian D.", 34.5, 45.75, 0.05,
                "Smithers III", "Weylan K.S.", 40.1, 28.75, 0.04,
                "Simpson", "Homer J.", 40, 23.44, 0.023,
                "Haddington Smith", "Janet K.B.", 33.9, 35.75, 0.05,
                "Jackson", "Sarah L.", 39.45, 17.88, 0.15,
                "Kirk", "James Tiberius", 55.6, 89.65, 0.075,
                "Griffin", "Peter R.", 25.6, 17.88, 0.04,
                "Jones y Enrique", "Alias N.", 28.9, 37.88, 0.045};

//Intialize
    
    SIZE = sizeof(REC)/ sizeof(DATA);
    while (OPT != 4)
    {
    //Menu
        OPT = MAIN_MENU ();
        system("clear");
    
        switch (OPT)
        {
            case 1:
            {
                DISPLAY_ALL (REC, SIZE);
                KEY();
                break;
            }
            case 2:
            {
                SEARCH (REC, SIZE);
                KEY();
                break;
            }
            case 3:
            {
                EDIT (REC, SIZE);
                KEY();
                break;
            }
        }
    }
}

//Definition
void DISPLAY (DATA ARRY[], int NUM)
{
    float OTRATE,TAX, GRS, NET;
    
    //Precision and Output
    cout << left;
    cout.precision(2);
    cout.setf(ios::fixed, ios::floatfield);
    cout.setf(ios::showpoint);
        
    OTRATE = ARRY[NUM].TAX * 100;
    GRS = ARRY[NUM].PAY * ARRY[NUM].HRS;
    TAX = ARRY[NUM].TAX * GRS;
    NET = GRS - TAX;
    
    cout << "\n\n\tIndex # : " << NUM;
    cout << "\n\tLast Name : " << ARRY[NUM].LNAME;
    cout << "\n\tFirst Name : " << ARRY[NUM].FNAME;
    cout << "\n\tHours Worked : " << setw(8) << ARRY[NUM].HRS << "\t\tPay Per Hour: $" << setw(8) << ARRY[NUM].PAY << "\t\tTax Rate : " << OTRATE << " %";
    cout << "\n\tGross Pay : $" << setw(8) << GRS << "\t\tTax Deducted $" << setw(8) << TAX << "\t\tNet Pay : $" << NET;

}

void DISPLAY_ALL (DATA ARRY[], int SIZE)
{
    float OTRATE,TAX, GRS, NET;
    
//Precision and Output
    cout << left;
    cout.precision(2);
    cout.setf(ios::fixed, ios::floatfield);
    cout.setf(ios::showpoint);
    
    cout << "\n\tEmployee Listing :";
    
    for (int A = 0; A < SIZE; A++)
    {
        
        OTRATE = ARRY[A].TAX * 100;
        GRS = ARRY[A].PAY * ARRY[A].HRS;
        TAX = ARRY[A].TAX * GRS;
        NET = GRS - TAX;
        
        cout << "\n\n\tIndex # : " << A;
        cout << "\n\tLast Name : " << ARRY[A].LNAME;
        cout << "\n\tFirst Name : " << ARRY[A].FNAME;
        cout << "\n\tHours Worked : " << setw(8) << ARRY[A].HRS << "\t\tPay Per Hour: $" << setw(8) << ARRY[A].PAY << "\t\tTax Rate : " << OTRATE << " %";
        cout << "\n\tGross Pay : $" << setw(8) << GRS << "\t\tTax Deducted $" << setw(8) << TAX << "\t\tNet Pay : $" << NET;
        
    }

}

void EDIT (DATA ARRY [], int SIZ)
{
    int X, CHOICE = 0;
    cout << "\n\tEnter The Index # Of The Employee You Would Like to Edit (0 - " << SIZ - 1 << ") :";
    cin >> X;
    
    if ((X < 0) or (X > SIZ-1))
    {
        cout << "\n\n\tIndex # " << X << " Was Not Found";
    }
    else
    {
        while (CHOICE != 6)
        {
            DISPLAY (ARRY, X);
            cout << "\n\n\tChange Employee Feilds : ";
            
            cout << "\n\n\t1 - Last Name";
            cout << "\n\t2 - First Name";
            cout << "\n\t3 - Hours Worked";
            cout << "\n\t4 - Pay Per Hour";
            cout << "\n\t5 - Tax Rate";
            cout << "\n\t6 - Save And Return To Main";
            
            cout << "\n\n\tOPT : ";
            cin >> CHOICE;
            cin.clear();
            cin.ignore();
            
            switch (CHOICE)
            {
                case 1:
                {
                    cout << "\n\tWhat Would You Like To Change Last Name To?";
                    getline (cin, ARRY[X].LNAME);
                    cin.clear();
                    cin.ignore();
                    break;
                }
                case 2:
                {
                    cout << "\n\tWhat Would You like To Change First Name To?";
                    getline (cin,ARRY[X].FNAME);
                    cin.clear();
                    cin.ignore();
                    break;
                }
                case 3:
                {
                    cout << "\n\tWhat Would You like To Change Hours Worked To?";
                    cin >> ARRY[X].HRS;
                    cin.clear();
                    cin.ignore();
                    break;
                }
                case 4:
                {
                    cout << "\n\tWhat Would You like To Change Pay Per Hour To?";
                    cin >> ARRY[X].PAY;
                    cin.clear();
                    cin.ignore();
                    break;
                }
                case 5:
                {
                    cout << "\n\tWhat Would You like To Change Tax Rate To?";
                    cin >> ARRY[X].TAX;
                    cin.clear();
                    cin.ignore();
                    break;
                }
            }
            
            system("clear");
        }
        
        cout << "\n\n\tChanges Have Been Made To Record";
        DISPLAY(ARRY, X);
    }
}

void KEY ()
{
    cout << "\n\n\tPress Any Key To Continue";
    cin.ignore();
    system("clear");
}

int MAIN_MENU ()
{
    int OPT;
    
    cout << "\n\tMain Menu";
    cout << "\n\n\t1 - Display All Records";
    cout << "\n\t2 - Find An Employee Via Index";
    cout << "\n\t3 - Edit An Employee's Profile";
    cout << "\n\t4 - Exit";
    
    cout << "\n\n\tOPT : ";
    cin >> OPT;
    
    return OPT;
    
}

void SEARCH (DATA ARRY[], int SIZ)
{
    int X;
    char AGN = 'Y';
    
    do
    {
        cout << "\n\tThere are " << SIZ << " Employees Stored In The Structure";
        cout << "\n\tEnter Index of Employee You Would Like To Find (0 - " << SIZ - 1 << ")";
 
        cout << "\n\tIndex # : ";
        cin >> X;
        cin.clear();
        cin.ignore();
        
        if ((X < 0) or (X > SIZ-1))
        {
            cout << "\n\n\tIndex # " << X << " Was Not Found";
        }
        else
        {
            cout << "\n\n\tIndex # " << X << " Was Found";
            DISPLAY (ARRY, X);
        }
        
        cout << "\n\n\tWould You Like To Search For Another Employee (Y or N)? ";
        cin >> AGN;
        
        system ("clear");
    }
    while ((AGN == 'y') or (AGN == 'Y'));
}

