
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include <math.h>
#include <iomanip>
#include <fstream>
#include <sstream>
//#include <conio.h>


using namespace std;


int main()
{
    char AGAIN = 'y';
    
    while (AGAIN == 'y' or AGAIN == 'Y')
    {
        string STR;
        int A, E, I, O, U, NONVWL;
        float LENGTH;
        
//Initilizations
        STR.clear();
        
        A = 0;
        E = 0;
        I = 0;
        O = 0;
        U = 0;
        NONVWL = 0;
        
//Input
        cout << "\n\tWelcome To The Vowel Counter Pro";
        
        cout << "\n\n\tEnter A String (Spaces Included) : ";
        getline (cin, STR);
        
        system ("clear");
        
        LENGTH = STR.length();
        
//Counter
        for (char CHAR : STR)
        {
        
            switch (CHAR)
            {
                case 'A':
                case 'a':
                {
                    A++;
                    break;
                }
                
                case 'E':
                case 'e':
                {
                    E++;
                    break;
                }
                    
                case 'I':
                case 'i':
                {
                    I++;
                    break;
                }
                    
                case 'O':
                case 'o':
                {
                    O++;
                    break;
                }
                    
                case 'U':
                case 'u':
                {
                    U++;
                    break;
                }
                    
                default:
                {
                    NONVWL++;
                    break;
                }
            }
        }

//Output
        cout << "\n\t\"" << STR << "\" Is " << LENGTH << " Characters Long And Has :";
        
        cout << "\n\n\t" << A << " A's";
        cout << "\n\t" << E << " E's";
        cout << "\n\t" << I << " I's";
        cout << "\n\t" << O << " O's";
        cout << "\n\t" << U << " U's";
        cout << "\n\t" << NONVWL << " Non Vowels";
        
        cout << "\n\n\tRun App Again (Y or N)? ";
        cin >> AGAIN;
        
        cin.ignore();
        system ("clear");
    
    }
 
}
