
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include <math.h>
#include <iomanip>
#include <fstream>
#include <sstream>
//#include <conio.h>


using namespace std;


struct record
{
    string ID;
    string LAST;
    string FIRST;
    float HRS;
    float PAY;
    float TAX;
};


//Same Order As Definitions
void aANY ();
void cCLS ();
void dDISPLAY (record [], int);
int fFIND (record [], int, string);
void iIO ();
void rREAD (record [], string);
int sSIZE (string);
float pPERCENT (float);
string uUPPER (string);
void wWRITE (record [], int, string);


int main()
{
    string FILE = "personnel1.dat";
    string S_ID;
    int SIZE, S_INDEX;
    int OPT = 0, E_OPT = 0;
    record EMP [100];

//Initialize Array
    SIZE = sSIZE (FILE);
    rREAD (EMP, FILE);
    while (OPT != 4)
    {
    //Initilizations
        E_OPT = 0;
        S_INDEX = -1;
        OPT = 0;
        
    //Menu
        cout << "\n\tMain Menu";
        cout << "\n\n\t1 - Display All Employees";
        cout << "\n\t2 - Find An Employee";
        cout << "\n\t3 - Add An Employee";
        cout << "\n\t4 - Save and Quit";
        
        cout << "\n\n\tOption : ";
        cin >> OPT;
        iIO();
        cCLS();
        
        switch (OPT)
        {
                
    //Display All
            case 1:
            {
                cout << "\n\tDisplaying All Employees";
                
                for (int A = 0; A < SIZE; A++)
                {
                    dDISPLAY(EMP, A);
                }
                aANY();
                cCLS();
                break;
            }
                
    //Search
            case 2:
            {
                cout << "\n\tSearch For Employee Via ID";
                cout << "\n\tID : ";
                cin >> S_ID;
                iIO();
                cCLS();
                
                S_ID = uUPPER(S_ID);
                S_INDEX = fFIND(EMP, SIZE, S_ID);

            //No Match
                if (S_INDEX == -1)
                {
                    cout << "\n\tThere Were No Matches For ID " << S_ID;
                    aANY();
                    cCLS();
                }

            //Match
                else
                {
                    cout << "\n\tA Match For ID " << S_ID << " Was Found";

                //Inner Menu for Editing
                    while (E_OPT != 7)
                    {
                        dDISPLAY(EMP, S_INDEX);

                        cout << "\n\n\tChange Employee Feilds";

                        cout << "\n\n\t1 - ID";
                        cout << "\n\t2 - Last Name";
                        cout << "\n\t3 - First Name";
                        cout << "\n\t4 - Hours Worked";
                        cout << "\n\t5 - Pay Per Hour";
                        cout << "\n\t6 - Tax Rate";
                        cout << "\n\t7 - Save And Return To Main";

                        cout << "\n\n\tOPT : ";
                        cin >> E_OPT;
                        iIO();
                        cCLS();

                        switch (E_OPT)
                        {
                        //ID
                            case 1:
                            {
                                cout << "\n\tWhat Would You Like To Change ID To?";
                                cout << "\n\tID : ";
                                getline(cin, EMP[S_INDEX].ID);
                                EMP[S_INDEX].ID = uUPPER (EMP[S_INDEX].ID);
                                iIO();
                                cCLS();
                                break;
                            }
                        //Last Name
                            case 2:
                            {
                                cout << "\n\tWhat Would You Like To Change Last Name To?";
                                cout << "\n\tLast Name : ";
                                getline(cin, EMP[S_INDEX].LAST);
                                iIO();
                                cCLS();
                                break;
                            }
                        //First Name
                            case 3:
                            {
                                cout << "\n\tWhat Would You like To Change First Name To?";
                                cout << "\n\tFirst Name : ";
                                getline(cin, EMP[S_INDEX].FIRST);
                                iIO();
                                cCLS();
                                break;
                            }
                        //Hours
                            case 4:
                            {
                                cout << "\n\tWhat Would You like To Change Hours Worked To?";
                                cout << "\n\tHours Worked : ";
                                cin >> EMP[S_INDEX].HRS;
                                iIO();
                                cCLS();
                                break;
                            }
                        //Pay Rate
                            case 5:
                            {
                                cout << "\n\tWhat Would You like To Change Pay Per Hour To?";
                                cout << "\n\tPay Per Hour: $";
                                cin >> EMP[S_INDEX].PAY;
                                iIO();
                                cCLS();
                                break;
                            }
                        //Tax Rate
                            case 6:
                            {
                                cout << "\n\tWhat Would You like To Change Tax Rate To?";
                                cout << "\n\tTax : ";
                                cin >> EMP[S_INDEX].TAX;
                                EMP[S_INDEX].TAX = pPERCENT(EMP[S_INDEX].TAX);
                                iIO();
                                cCLS();
                                break;
                            }
                        }//Inner Switch
                    }//Inner While
                }//Else
                break;
            }//Case 2
            case 3:
            {
            //Input For New Emp
                cout << "\n\tAdd An Employee";

                cout << "\n\n\t(1 of 6) ID : ";
                getline(cin, EMP[SIZE].ID);
                EMP[SIZE].ID = uUPPER (EMP[SIZE].ID);
                iIO();

                cout << "\n\n\t(2 of 6) Last Name : ";
                getline(cin, EMP[SIZE].LAST);
                iIO();

                cout << "\n\n\t(3 of 6) First Name : ";
                getline(cin, EMP[SIZE].FIRST);
                iIO();

                cout << "\n\n\t(4 of 6) Hours Worked : ";
                cin >> EMP[SIZE].HRS;
                iIO();

                cout << "\n\n\t(5 of 6) Pay Per Hour : $";
                cin >> EMP[SIZE].PAY;
                iIO();

                cout << "\n\n\t(6 of 6) Tax Rate : ";
                cin >> EMP[SIZE].TAX;
                EMP[SIZE].TAX = pPERCENT(EMP[SIZE].TAX);
                iIO();

                cCLS();

            //Display Final
                cout << "\n\tEmployee Has Been Added To Record";

                dDISPLAY(EMP, SIZE);
                aANY();
                cCLS();

                SIZE++;
                break;
            }//Case 3

        }//Main Switch
    }//While Loop
    
//Write To FILE
    wWRITE(EMP, SIZE, FILE);
    
}//Main




//Press Any Key, Getchar
void aANY ()
{
    cout << "\n\n\tPress Enter To Continue";
    cin.get();
}


//System clear
void cCLS ()
{
    system ("clear");
}

//Display Employee Info
void dDISPLAY (record dARY[], int dIDX)
{
    float dGRS, dTXWTH, dNET, dTAX;
    
//Setw Justify left
    cout << std::left;
    
//Precision
    cout.precision(2);
    cout.setf(ios::fixed, ios::floatfield);
    cout.setf(ios::showpoint);

//Calculations
    dGRS = dARY[dIDX].HRS * dARY[dIDX].PAY;
    dTXWTH = dGRS * dARY[dIDX].TAX;
    dNET = dGRS - dTXWTH;
    dTAX = dARY[dIDX].TAX * 100;
    
//Output
    cout << "\n\n\tID : " << dARY[dIDX].ID;
    cout << "\n\tLast Name : " << setw(15) << dARY[dIDX].LAST << "First Name : " << dARY[dIDX].FIRST;
    cout << "\n\tHours Worked : " << setw(15) << dARY[dIDX].HRS << "Pay Per Hour : $" << setw(15) << dARY[dIDX].PAY << "Tax Rate : " << dTAX << "%";
    cout << "\n\tGross Pay : $" << setw(15) << dGRS << "Tax Witheld : $" << setw(15) << dTXWTH << "Net Pay : $" << dNET;
}


//IO buffer clense
void iIO ()
{
    cin.clear();
    cin.ignore();
}


int fFIND (record fARY[], int fSIZE, string fID)
{
    for (int fB = 0; fB < fSIZE; fB++)
    {
        if (fARY[fB].ID == fID)
        {
            return fB;
        }
    }
    return -1;
}

float pPERCENT (float pTAX)
{
    if (pTAX > 1)
    {
        pTAX = pTAX / 100;
    }

    return pTAX;
}


//Read From Data File
void rREAD (record rARY[], string rFILE)
{
    ifstream rdin;
    int rX = 0;
    
    rdin.open(rFILE, ios::in);
    
    if(!rdin)
    {
        cout << "\n\tWhoops, There Was An Error Opening The Data File";
    }
    else
    {
        rdin >> rARY[0].ID >> rARY[0].LAST >> rARY[0].FIRST >> rARY[0].HRS >> rARY[0].PAY >> rARY[0].TAX;
        
        while (!rdin.eof())
        {
            rX++;
            rdin >> rARY[rX].ID >> rARY[rX].LAST >> rARY[rX].FIRST >> rARY[rX].HRS >> rARY[rX].PAY >> rARY[rX].TAX;
        }
    }
}


//Initialize Size Of Data File
int sSIZE (string sFILE)
{
    ifstream sdin;
    string sA, sB, sC;
    int sCNT = 0;
    float sD, sE, sF;
    
    sdin.open(sFILE, ios::in);
    
    if(!sdin)
    {
        cout << "\n\tWhoops, There Was An Error Opening The Data File";
    }
    
    sdin >> sA >> sB >> sC >> sD >> sE >> sF;
    
    while (!sdin.eof())
    {
        sdin >> sA >> sB >> sC >> sD >> sE >> sF;
        sCNT++;
    }
    
    sdin.close();
    return sCNT;
}


string uUPPER (string uSTR)
{
    float uLEN;
    
    uLEN = uSTR.length();
    for (int uC = 0; uC < uLEN; uC++)
    {
        uSTR[uC] = toupper(uSTR[uC]);
    }
    
    return uSTR;
}

//Writing To File
void wWRITE (record wARY[], int wSIZE, string wFILE)
{
    ofstream wdout;

    wdout.open(wFILE, ios::out);

    for(int wC = 0; wC < wSIZE; wC++)
    {
        wdout << wARY[wC].ID << " " << wARY[wC].LAST << " " << wARY[wC].FIRST << " " << wARY[wC].HRS << " " << wARY[wC].PAY << " " << wARY[wC].TAX << endl;
    }

    wdout.close();
}
