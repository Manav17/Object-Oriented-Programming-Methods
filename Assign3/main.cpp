
//#include <stdlib.h>
//#include <time.h>
#include <iostream>
//#include <math.h>
//#include <iomanip>
//#include <fstream>
#include <sstream>
//#include <conio.h>


using namespace std;

void Valid (bool&);
void Invalid (bool&);

int main()
{
    string ID, C;
    int NUM;
    bool XX;
    char A, B, AGAIN = 'Y';
    stringstream SS;
    
    
//Repeat
    while (AGAIN == 'Y')
    {
//Rules
        cout << "\n\tCustomer ID Processer";
        cout << "\n\n\tRules For Valid ID : ";
        cout << "\n\t1 - A, K, S - Followed By B, C, D, Followed By 101 to 110";
        cout << "\n\t2 - B, H, N - Followed By A, F, G, H, Followed by 113 to 118 or 213 or 220 or 560 or 890";
        cout << "\n\t3 - C, T - Followed by K, L, Z, Followed By 134, 138, 145 or 246";
        cout << "\n\t4 - M, O, Z - Followed By A, D, F, Followed By 177 to 181 or 333 to 335";

//Input
        cout << "\n\n\tEnter Customer ID : ";
        cin >> ID;
    
        cout << "\n\tID : " << ID;
    
//Initilizations
        C.clear();
        SS.clear();
        NUM = 0;
        XX = false;
        
    
        A = toupper(ID[0]);
        B = toupper(ID[1]);

        SS << ID[2] << ID[3] << ID[4];
        SS >> NUM;
    
        if (ID.length()!= 5)
        {
            Invalid (XX);
        }

//Check
        switch (A)
        {
            case 'A':
            case 'K':
            case 'S':
            {
                switch (B)
                {
                    case 'B':
                    case 'C':
                    case 'D':
                    {
                        switch (NUM)
                        {
                            case 101:
                            case 102:
                            case 103:
                            case 104:
                            case 105:
                            case 106:
                            case 107:
                            case 108:
                            case 109:
                            case 110:
                            {
                                Valid (XX);
                                break;
                            }
                            default:
                            {
                                Invalid (XX);
                                break;
                            }
                        }
                    }
                    default:
                    {
                        Invalid (XX);
                        break;
                    }
                }
            }
            case 'B':
            case 'H':
            case 'N':
            {
                switch (B)
                {
                    case 'A':
                    case 'F':
                    case 'G':
                    case 'H':
                    {
                        switch (NUM)
                        {
                            case 113:
                            case 114:
                            case 115:
                            case 116:
                            case 117:
                            case 118:
                            case 213:
                            case 220:
                            case 560:
                            case 890:
                            {
                                Valid (XX);
                                break;
                            }
                            default:
                            {
                                Invalid (XX);
                                break;
                            }
                        }
                    }
                    default:
                    {
                        Invalid (XX);
                        break;
                    }
                }
            }
            case 'C':
            case 'T':
            {
                switch (B)
                {
                    case 'K':
                    case 'L':
                    case 'Z':
                    {
                     switch (NUM)
                        {
                            case 134:
                            case 138:
                            case 145:
                            case 246:
                            {
                                Valid (XX);
                                break;
                            }
                            default:
                            {
                                Invalid (XX);
                                break;
                            }
                        }
                    }
                    default:
                    {
                        Invalid (XX);
                        break;
                    }
                }
            }
            case 'M':
            case 'O':
            case 'Z':
            {
                switch (B)
                {
                    case 'A':
                    case 'D':
                    case 'F':
                    {
                       switch (NUM)
                        {
                            case 177:
                            case 178:
                            case 179:
                            case 180:
                            case 181:
                            case 333:
                            case 334:
                            case 335:
                            {
                                Valid (XX);
                                break;
                            }
                            default:
                            {
                                Invalid (XX);
                                break;
                            }
                        }
                    }
                    default:
                    {
                        Invalid (XX);
                        break;
                    }
                }
            }
                
            default:
            {
                Invalid (XX);
                break;
            }
        }
    
    cout << "\n\n\tRun Again?";
    cin >> AGAIN;
    
    AGAIN = toupper (AGAIN);
    system ("clear");

    }
}

//Definitions
void Invalid (bool &XX)
{
    if (XX == false)
    {
        cout << "\n\tID Is Invalid";
        getchar ();
        XX = true;
    }
    

}

void Valid (bool &XX)
{
    if (XX == false)
    {
    cout << "\n\tID Is Valid";
    getchar ();
    XX = true;
    }
}
